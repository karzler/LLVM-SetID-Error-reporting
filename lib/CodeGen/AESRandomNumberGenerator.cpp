/*
 *  FIPS-197 compliant AES implementation
 *
 *  Copyright (C) 2006-2010, Brainspark B.V.
 *
 *  This file is part of PolarSSL (http://www.polarssl.org)
 *  Lead Maintainer: Paul Bakker <polarssl_maintainer at polarssl.org>
 *
 *  All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/*
 *  The AES block cipher was designed by Vincent Rijmen and Joan Daemen.
 *
 *  http://csrc.nist.gov/encryption/aes/rijndael/Rijndael.pdf
 *  http://csrc.nist.gov/publications/fips/fips197/fips-197.pdf
 */
/*
 * C++-ified by Todd Jackson
 */

#include "llvm/MultiCompiler/MultiCompilerOptions.h"
#include "llvm/MultiCompiler/AESRandomNumberGenerator.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace llvm;

namespace multicompiler
{
namespace Random
{

AESRandomNumberGenerator::AESRandomNumberGenerator( ) : Random(), counter(0), keylength(16), aes_init_done(false)
{
    memset(&ctx, 0x00, sizeof(aes_context));
    memset(nonce, 0x00, sizeof(nonce));
    memset(plaintext, 0x00, sizeof(plaintext));

    key = new uint8_t[keylength];

    readStateFile();
}

AESRandomNumberGenerator::AESRandomNumberGenerator(AESRandomNumberGenerator const& a) : Random()
{
    memcpy(&ctx, &a.ctx, sizeof(aes_context));
    memcpy(nonce, &a.nonce, sizeof(nonce));
    keylength = a.keylength;
    key = new uint8_t[keylength];
    memcpy(key, &a.key, sizeof(key));
}

AESRandomNumberGenerator::~AESRandomNumberGenerator()
{
    writeStateFile();
    delete[] key;
}

void AESRandomNumberGenerator::readStateFile()
{
    struct stat s;
    // Don't read if there's no file specified.
    if (multicompiler::RNGStateFile == "" || stat(multicompiler::RNGStateFile.c_str(), &s) != 0) {
        defaultInitialization();
        return;
    }

    std::ifstream statefile(multicompiler::RNGStateFile.c_str(), std::ios::in | std::ios::binary);
    DEBUG(errs() << "Reading RNG state file from " << multicompiler::RNGStateFile << "\n");

    // uint16_t: keysize
    statefile.read((char *)&keylength, sizeof(uint16_t));
    key = new uint8_t[keylength];

    // keylength * uint8_t: key
    statefile.read((char *)key, keylength * sizeof(uint8_t));

    // 16 * uint8_t: plaintext
    statefile.read((char *)plaintext, 16 * sizeof(uint8_t));

    // 8 * uint8_t: nonce
    statefile.read((char *)nonce, 8 * sizeof(uint8_t));

    // uint64_t: counter
    statefile.read((char *)&counter, sizeof(uint64_t));

    ctx.rk = ctx.buf;

    if (aes_init_done == false) {
        aes_gen_tables();
        aes_init_done = true;
    }
    aes_set_rounds();
    aes_gen_round_keys();
}

void AESRandomNumberGenerator::writeStateFile()
{
    //Don't serialise without a file name
    if (multicompiler::RNGStateFile == "") return;

    std::ofstream statefile(multicompiler::RNGStateFile.c_str(), std::ios::out | std::ios::binary);
    DEBUG(errs() << "Writing RNG state file to " << multicompiler::RNGStateFile << "\n");
    statefile.write((char *)&keylength, sizeof(uint16_t));
    statefile.write((char *)key, keylength * sizeof(uint8_t));
    statefile.write((char *)plaintext, 16 * sizeof(uint8_t));
    statefile.write((char *)nonce, 8 * sizeof(uint8_t));
    statefile.write((char *)&counter, sizeof(uint64_t));
}

void AESRandomNumberGenerator::defaultInitialization()
{
    const uint8_t default_key[] = {0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
    const uint8_t default_plaintext[] = {0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96, 0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a};
    const uint8_t default_testvector[] = {0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff};
    keylength = 16;
    counter = 0;
    memcpy(key, default_key, 16 * sizeof(uint8_t));
    memcpy(nonce, default_testvector, 8 * sizeof(uint8_t));
    memcpy(&counter, default_testvector + 8, sizeof(uint64_t));
    memcpy(plaintext, default_plaintext, 16 * sizeof(uint8_t));

    aes_setkey_enc();
}

void AESRandomNumberGenerator::incrementBigEndianUInt64(uint8_t* val)
{
    if (val[7] == 0xff) {
        val[7] = 0x00;
        val[6]++;
    } else if (val[7] == 0xff && val[6] == 0xff) {
        val[7] = val[6] = 0x00;
        val[5]++;
    } else if (val[7] == 0xff && val[6] == 0xff && val[5] == 0xff) {
        val[7] = val[6] = val[5] = 0x00;
        val[4]++;
    } else if (val[7] == 0xff && val[6] == 0xff && val[5] == 0xff && val[4] == 0xff) {
        val[7] = val[6] = val[5] = val[4] = 0x00;
        val[3]++;
    } else if (val[7] == 0xff && val[6] == 0xff && val[5] == 0xff && val[4] == 0xff
               && val[2] == 0xff) {
        val[7] = val[6] = val[5] = val[4] = val[3] = val[2] = 0x00;
        val[1]++;
    } else if (val[7] == 0xff && val[6] == 0xff && val[5] == 0xff && val[4] == 0xff
               && val[2] == 0xff && val[1] == 0xff) {
        val[7] = val[6] = val[5] = val[4] = val[3] = val[2] = val[1] = 0x00;
        val[0]++;
    } else if (val[7] == 0xff && val[6] == 0xff && val[5] == 0xff && val[4] == 0xff
               && val[2] == 0xff && val[1] == 0xff && val[0] == 0xff) {
        memset(val, 0x00, 8);
    } else val[7]++;
}

uint64_t AESRandomNumberGenerator::random()
{
    uint8_t input[16];
    uint8_t output[16];
    int i;
    uint64_t result;

    memcpy(input, (char *)nonce, sizeof(uint64_t));
    memcpy(input + 8, (char *)&counter, sizeof(uint64_t));
    aes_crypt_ecb(&ctx, input, output);
    for (i = 0; i < 16; i++) output[i] ^= plaintext[i];
    memcpy((char *)&result, (char *)output, sizeof(uint64_t));

    incrementBigEndianUInt64((uint8_t *)&counter);

    // We only use the first 64 bits - we throw the rest away.
    // TODO(tmjackso): Do we need 128 bits?  There is no uint128_t.
    memcpy((char *)&result, (char *)output, sizeof(uint64_t));

    return result;
}

uint64_t AESRandomNumberGenerator::randnext(uint64_t max)
{
    return random() % max;
}

/*
 * 32-bit integer manipulation macros (little endian)
 */
#ifndef GET_ULONG_LE
#define GET_ULONG_LE(n,b,i)                             \
		{                                                       \
			(n) = ( (uint32_t) (b)[(i)    ]       )        \
			| ( (uint32_t) (b)[(i) + 1] <<  8 )        \
			| ( (uint32_t) (b)[(i) + 2] << 16 )        \
			| ( (uint32_t) (b)[(i) + 3] << 24 );       \
		}
#endif

#ifndef PUT_ULONG_LE
#define PUT_ULONG_LE(n,b,i)                             \
		{                                                       \
			(b)[(i)    ] = (unsigned char) ( (n)       );       \
			(b)[(i) + 1] = (unsigned char) ( (n) >>  8 );       \
			(b)[(i) + 2] = (unsigned char) ( (n) >> 16 );       \
			(b)[(i) + 3] = (unsigned char) ( (n) >> 24 );       \
		}
#endif

/*
 * Tables generation code
 */
#define ROTL8(x) ( ( x << 8 ) & 0xFFFFFFFF ) | ( x >> 24 )
#define XTIME(x) ( ( x << 1 ) ^ ( ( x & 0x80 ) ? 0x1B : 0x00 ) )
#define MUL(x,y) ( ( x && y ) ? pow[(log[x]+log[y]) % 255] : 0 )

void AESRandomNumberGenerator::aes_gen_tables( void )
{
    int32_t i, x, y, z;
    int32_t pow[256];
    int32_t log[256];

    /*
     * compute pow and log tables over GF(2^8)
     */
    for ( i = 0, x = 1; i < 256; i++ ) {
        pow[i] = x;
        log[x] = i;
        x = ( x ^ XTIME( x ) ) & 0xFF;
    }

    /*
     * calculate the round constants
     */
    for ( i = 0, x = 1; i < 10; i++ ) {
        RCON[i] = (uint32_t) x;
        x = XTIME( x ) & 0xFF;
    }

    /*
     * generate the forward and reverse S-boxes
     */
    FSb[0x00] = 0x63;

    for ( i = 1; i < 256; i++ ) {
        x = pow[255 - log[i]];

        y  = x;
        y = ( (y << 1) | (y >> 7) ) & 0xFF;
        x ^= y;
        y = ( (y << 1) | (y >> 7) ) & 0xFF;
        x ^= y;
        y = ( (y << 1) | (y >> 7) ) & 0xFF;
        x ^= y;
        y = ( (y << 1) | (y >> 7) ) & 0xFF;
        x ^= y ^ 0x63;

        FSb[i] = (unsigned char) x;
    }

    /*
     * generate the forward and reverse tables
     */
    for ( i = 0; i < 256; i++ ) {
        x = FSb[i];
        y = XTIME( x ) & 0xFF;
        z =  ( y ^ x ) & 0xFF;

        FT0[i] = ( (uint32_t) y       ) ^
                 ( (uint32_t) x <<  8 ) ^
                 ( (uint32_t) x << 16 ) ^
                 ( (uint32_t) z << 24 );

        FT1[i] = ROTL8( FT0[i] );
        FT2[i] = ROTL8( FT1[i] );
        FT3[i] = ROTL8( FT2[i] );

    }
}

/*
 * AES key schedule (encryption)
 */
int AESRandomNumberGenerator::aes_setkey_enc(void)
{
    if ( aes_init_done == false ) {
        aes_gen_tables();
        aes_init_done = true;
    }

    aes_set_rounds();

    ctx.rk = ctx.buf;

    aes_gen_round_keys();

    return 0;
}

int AESRandomNumberGenerator::aes_set_rounds(void)
{
    switch (keylength) {
    case 16:
        ctx.nr = 10;
        break;
    case 24:
        ctx.nr = 12;
        break;
    case 32:
        ctx.nr = 14;
        break;
    default:
        return INVALID_KEY_LENGTH;

    }
    return 0;
}

void AESRandomNumberGenerator::aes_gen_round_keys(void)
{
    uint32_t *RK;
    uint32_t i;
    uint32_t keysize = keylength * 8;
    RK = ctx.buf;

    for ( i = 0; i < (keysize >> 5); i++ ) {
        GET_ULONG_LE( RK[i], key, i << 2 );
    }

    switch ( ctx.nr ) {
    case 10:
        for ( i = 0; i < 10; i++, RK += 4 ) {
            RK[4]  = RK[0] ^ RCON[i] ^
                     ( (uint32_t) FSb[ ( RK[3] >>  8 ) & 0xFF ]       ) ^
                     ( (uint32_t) FSb[ ( RK[3] >> 16 ) & 0xFF ] <<  8 ) ^
                     ( (uint32_t) FSb[ ( RK[3] >> 24 ) & 0xFF ] << 16 ) ^
                     ( (uint32_t) FSb[ ( RK[3]       ) & 0xFF ] << 24 );

            RK[5]  = RK[1] ^ RK[4];
            RK[6]  = RK[2] ^ RK[5];
            RK[7]  = RK[3] ^ RK[6];
        }
        break;
    case 12:
        for ( i = 0; i < 8; i++, RK += 6 ) {
            RK[6]  = RK[0] ^ RCON[i] ^
                     ( (uint32_t) FSb[ ( RK[5] >>  8 ) & 0xFF ]       ) ^
                     ( (uint32_t) FSb[ ( RK[5] >> 16 ) & 0xFF ] <<  8 ) ^
                     ( (uint32_t) FSb[ ( RK[5] >> 24 ) & 0xFF ] << 16 ) ^
                     ( (uint32_t) FSb[ ( RK[5]       ) & 0xFF ] << 24 );

            RK[7]  = RK[1] ^ RK[6];
            RK[8]  = RK[2] ^ RK[7];
            RK[9]  = RK[3] ^ RK[8];
            RK[10] = RK[4] ^ RK[9];
            RK[11] = RK[5] ^ RK[10];
        }
        break;
    case 14:
        for ( i = 0; i < 7; i++, RK += 8 ) {
            RK[8]  = RK[0] ^ RCON[i] ^
                     ( (uint32_t) FSb[ ( RK[7] >>  8 ) & 0xFF ]       ) ^
                     ( (uint32_t) FSb[ ( RK[7] >> 16 ) & 0xFF ] <<  8 ) ^
                     ( (uint32_t) FSb[ ( RK[7] >> 24 ) & 0xFF ] << 16 ) ^
                     ( (uint32_t) FSb[ ( RK[7]       ) & 0xFF ] << 24 );

            RK[9]  = RK[1] ^ RK[8];
            RK[10] = RK[2] ^ RK[9];
            RK[11] = RK[3] ^ RK[10];

            RK[12] = RK[4] ^
                     ( (uint32_t) FSb[ ( RK[11]       ) & 0xFF ]       ) ^
                     ( (uint32_t) FSb[ ( RK[11] >>  8 ) & 0xFF ] <<  8 ) ^
                     ( (uint32_t) FSb[ ( RK[11] >> 16 ) & 0xFF ] << 16 ) ^
                     ( (uint32_t) FSb[ ( RK[11] >> 24 ) & 0xFF ] << 24 );

            RK[13] = RK[5] ^ RK[12];
            RK[14] = RK[6] ^ RK[13];
            RK[15] = RK[7] ^ RK[14];
        }
        break;
    default:
        break;
    }
}

#define AES_FROUND(X0,X1,X2,X3,Y0,Y1,Y2,Y3)     \
		{                                               \
			X0 = *RK++ ^ FT0[ ( Y0       ) & 0xFF ] ^   \
			FT1[ ( Y1 >>  8 ) & 0xFF ] ^   \
			FT2[ ( Y2 >> 16 ) & 0xFF ] ^   \
			FT3[ ( Y3 >> 24 ) & 0xFF ];    \
			\
			X1 = *RK++ ^ FT0[ ( Y1       ) & 0xFF ] ^   \
			FT1[ ( Y2 >>  8 ) & 0xFF ] ^   \
			FT2[ ( Y3 >> 16 ) & 0xFF ] ^   \
			FT3[ ( Y0 >> 24 ) & 0xFF ];    \
			\
			X2 = *RK++ ^ FT0[ ( Y2       ) & 0xFF ] ^   \
			FT1[ ( Y3 >>  8 ) & 0xFF ] ^   \
			FT2[ ( Y0 >> 16 ) & 0xFF ] ^   \
			FT3[ ( Y1 >> 24 ) & 0xFF ];    \
			\
			X3 = *RK++ ^ FT0[ ( Y3       ) & 0xFF ] ^   \
			FT1[ ( Y0 >>  8 ) & 0xFF ] ^   \
			FT2[ ( Y1 >> 16 ) & 0xFF ] ^   \
			FT3[ ( Y2 >> 24 ) & 0xFF ];    \
		}

/*
 * AES-ECB block encryption/decryption
 */
int AESRandomNumberGenerator::aes_crypt_ecb( aes_context *ctx,
        const unsigned char input[16],
        unsigned char output[16] )
{
    int i;
    uint32_t *RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3;

    RK = ctx->rk;

    GET_ULONG_LE( X0, input,  0 );
    X0 ^= *RK++;
    GET_ULONG_LE( X1, input,  4 );
    X1 ^= *RK++;
    GET_ULONG_LE( X2, input,  8 );
    X2 ^= *RK++;
    GET_ULONG_LE( X3, input, 12 );
    X3 ^= *RK++;
#if 0
    if ( mode == AES_DECRYPT ) {
        for ( i = (ctx->nr >> 1) - 1; i > 0; i-- ) {
            AES_RROUND( Y0, Y1, Y2, Y3, X0, X1, X2, X3 );
            AES_RROUND( X0, X1, X2, X3, Y0, Y1, Y2, Y3 );
        }

        AES_RROUND( Y0, Y1, Y2, Y3, X0, X1, X2, X3 );

        X0 = *RK++ ^ \
             ( (uint32_t) RSb[ ( Y0       ) & 0xFF ]       ) ^
             ( (uint32_t) RSb[ ( Y3 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) RSb[ ( Y2 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) RSb[ ( Y1 >> 24 ) & 0xFF ] << 24 );

        X1 = *RK++ ^ \
             ( (uint32_t) RSb[ ( Y1       ) & 0xFF ]       ) ^
             ( (uint32_t) RSb[ ( Y0 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) RSb[ ( Y3 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) RSb[ ( Y2 >> 24 ) & 0xFF ] << 24 );

        X2 = *RK++ ^ \
             ( (uint32_t) RSb[ ( Y2       ) & 0xFF ]       ) ^
             ( (uint32_t) RSb[ ( Y1 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) RSb[ ( Y0 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) RSb[ ( Y3 >> 24 ) & 0xFF ] << 24 );

        X3 = *RK++ ^ \
             ( (uint32_t) RSb[ ( Y3       ) & 0xFF ]       ) ^
             ( (uint32_t) RSb[ ( Y2 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) RSb[ ( Y1 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) RSb[ ( Y0 >> 24 ) & 0xFF ] << 24 );
    } else { /* AES_ENCRYPT */
#endif
        for ( i = (ctx->nr >> 1) - 1; i > 0; i-- ) {
            AES_FROUND( Y0, Y1, Y2, Y3, X0, X1, X2, X3 );
            AES_FROUND( X0, X1, X2, X3, Y0, Y1, Y2, Y3 );
        }

        AES_FROUND( Y0, Y1, Y2, Y3, X0, X1, X2, X3 );

        X0 = *RK++ ^ \
             ( (uint32_t) FSb[ ( Y0       ) & 0xFF ]       ) ^
             ( (uint32_t) FSb[ ( Y1 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) FSb[ ( Y2 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) FSb[ ( Y3 >> 24 ) & 0xFF ] << 24 );

        X1 = *RK++ ^ \
             ( (uint32_t) FSb[ ( Y1       ) & 0xFF ]       ) ^
             ( (uint32_t) FSb[ ( Y2 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) FSb[ ( Y3 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) FSb[ ( Y0 >> 24 ) & 0xFF ] << 24 );

        X2 = *RK++ ^ \
             ( (uint32_t) FSb[ ( Y2       ) & 0xFF ]       ) ^
             ( (uint32_t) FSb[ ( Y3 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) FSb[ ( Y0 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) FSb[ ( Y1 >> 24 ) & 0xFF ] << 24 );

        X3 = *RK++ ^ \
             ( (uint32_t) FSb[ ( Y3       ) & 0xFF ]       ) ^
             ( (uint32_t) FSb[ ( Y0 >>  8 ) & 0xFF ] <<  8 ) ^
             ( (uint32_t) FSb[ ( Y1 >> 16 ) & 0xFF ] << 16 ) ^
             ( (uint32_t) FSb[ ( Y2 >> 24 ) & 0xFF ] << 24 );
#if 0
    }
#endif
    PUT_ULONG_LE( X0, output,  0 );
    PUT_ULONG_LE( X1, output,  4 );
    PUT_ULONG_LE( X2, output,  8 );
    PUT_ULONG_LE( X3, output, 12 );

    return( 0 );
}

} // namespace Random

} // namespace multicompiler
