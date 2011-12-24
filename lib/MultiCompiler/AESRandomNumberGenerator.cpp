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
#include "llvm/MultiCompiler/AESCounterModeRNG.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>

using namespace llvm;

namespace multicompiler
{
namespace Random
{

AESRandomNumberGenerator::AESRandomNumberGenerator( ) : Random()
{
    DEBUG(errs() << "Initialising AES RNG context\n");
    aesrng_initialize_to_default(&ctx);
    readStateFile();
}

AESRandomNumberGenerator::AESRandomNumberGenerator(AESRandomNumberGenerator const& a) : Random()
{
    DEBUG(errs() << "Initialising AES RNG context 2\n");
    aesrng_initialize_to_empty(&ctx);
    memcpy(&ctx, &a.ctx, sizeof(aesrng_context));
    ctx->key = new uint8_t[a.ctx->keylength];
    memcpy(ctx->key, &a.ctx->key, a.ctx->keylength);
}

AESRandomNumberGenerator::~AESRandomNumberGenerator()
{
    writeStateFile();
    aesrng_destroy(ctx);
}

void AESRandomNumberGenerator::readStateFile()
{
    DEBUG(errs() << "Reading RNG state file from " << multicompiler::RNGStateFile << "\n");
    aesrng_restore_state(ctx, multicompiler::RNGStateFile.c_str());
}

void AESRandomNumberGenerator::writeStateFile()
{
    DEBUG(errs() << "Writing RNG state file to " << multicompiler::RNGStateFile << "\n");
    aesrng_write_state(ctx, multicompiler::RNGStateFile.c_str());
}

uint64_t AESRandomNumberGenerator::random()
{
    assert(ctx != NULL);
    return aesrng_random_u64(ctx);
}

uint64_t AESRandomNumberGenerator::randnext(uint64_t max)
{
    assert(ctx != NULL);
    return aesrng_random_u64(ctx) % max;
}

} // namespace Random

} // namespace multicompiler
