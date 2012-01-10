/*
 * =====================================================================================
 *
 *       Filename:  skein_test.c
 *
 *    Description:  Prototype program for using Skein
 *
 *        Version:  1.0
 *        Created:  12/10/2011 14:38:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Todd Jackson
 *        Company:
 *
 * =====================================================================================
 */
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "llvm/MultiCompiler/Skein.h"
#include "llvm/MultiCompiler/SkeinPBKDF2.h"

const unsigned int SKEIN_512_512_BITLENGTH = 512;
const unsigned int SKEIN_512_512_BYTELENGTH = 64;

void F(const uint8_t * const password, const unsigned int passwordlen, const uint8_t * const salt, const unsigned int saltlen,
        const unsigned int iterations, const uint32_t index, uint8_t * const output){
    unsigned int i, j;
    uint8_t *prevblock = new uint8_t[SKEIN_512_512_BYTELENGTH];
    uint8_t *outputblock = new uint8_t[SKEIN_512_512_BYTELENGTH];
    Skein_512_Ctxt_t ctx;

    /* First round
     * U_1 = PRF(password, salt || UINT32(index)
     * RFC 2898 says that iterations is a 4 byte encoding */
    unsigned int inputlen = passwordlen + saltlen + sizeof(index);
    uint8_t* input = new uint8_t[inputlen];
    memset(input, 0x00, inputlen);
    memcpy(input, password, passwordlen);
    memcpy(input + passwordlen, salt, saltlen);
    memcpy(input + passwordlen + saltlen, &index, sizeof(index));

    //input[0] = 0xff;
    //inputlen = 1;

    /* Init and Do Skein 512-512 */
    Skein_512_Init(&ctx, SKEIN_512_512_BITLENGTH);
    Skein_512_Update(&ctx, input, inputlen);
    Skein_512_Final(&ctx, prevblock);
    printf("Iteration 1\n");
    for(i = 0; i < SKEIN_512_512_BYTELENGTH; i++){
        printf("%02x", prevblock[i]);
    }
    printf("\n");

    memcpy(outputblock, prevblock, SKEIN_512_512_BYTELENGTH);
    printf("outputblock = ");
    for(i = 0; i < SKEIN_512_512_BYTELENGTH; i++){
        printf("%02x", outputblock[i]);
    }
    printf("\n");

    /* Done with input...for now. Will use a new one inside the loop */
    delete[] input;

    uint8_t *tempdata = new uint8_t[SKEIN_512_512_BYTELENGTH];
    for(i = 0; i < iterations; i++){
        /* New input, new length. Resize input */
        inputlen = saltlen + SKEIN_512_512_BYTELENGTH;
        input = new uint8_t[inputlen];
        memset(input, 0x00, inputlen);

        /* PRF(P, U_1) = PRF(P, prev_block) */
        memcpy(input, salt, saltlen);
        memcpy(input + saltlen, prevblock, SKEIN_512_512_BYTELENGTH);
        printf("input = ");
        for(j = 0; j < inputlen; j++){
            printf("%02x", input[j]);
        }
        printf("\n");

        memset(&ctx, 0x00, sizeof(Skein_512_Ctxt_t));
        Skein_512_Init(&ctx, SKEIN_512_512_BITLENGTH);
        Skein_512_Update(&ctx, input, inputlen);
        Skein_512_Final(&ctx, tempdata);
        printf("tempdata = ");
        for(j = 0; j < SKEIN_512_512_BYTELENGTH; j++){
            printf("%02x", tempdata[j]);
        }
        printf("\n");

        /* XOR */
        for(j = 0; j < SKEIN_512_512_BYTELENGTH; j++){
            outputblock[j] ^= tempdata[j];
        }

        /* Save the previous block */
        memcpy(prevblock, tempdata, SKEIN_512_512_BYTELENGTH);

        /* Destroy input -- will recreate on next loop */
        delete[] input;
    }

    memcpy(output, outputblock, SKEIN_512_512_BYTELENGTH);
    printf("output = ");
    for(i = 0; i < SKEIN_512_512_BYTELENGTH; i++){
        printf("%02x", output[i]);
    }
    printf("\n");

    delete[] prevblock;
    delete[] tempdata;
    delete[] outputblock;
}

/**
 * Driver function for PBKDF2.
 *
 * password - Password data
 * pLen - Length of password in bytes
 * salt - Salt
 * sLen - Length of salt in bytes
 * iterations - Iteration count, a positive integer
 * dkLen - Desired output length in bytes
 */
uint8_t *pbkdf2(uint8_t const *password, const unsigned int pLen, uint8_t const *salt, const unsigned int sLen,
        const unsigned int iterations, const unsigned int dkLen) {
    const unsigned int hLen = SKEIN_512_512_BYTELENGTH; /* Assume Skein 512-512 -- length of output in bytes */
    if(dkLen > (UINT32_MAX - 1) * hLen) {
        printf("Desired derived key too long\n");
        return NULL;
    }
    unsigned int i;

    /* Number of PRF blocks */
    const unsigned int l = ceil((float)dkLen / hLen);

    /* Number of bytes that get copied from a remainder block */
    const unsigned int r = dkLen - (l - 1) * hLen;

    uint8_t *output = new uint8_t[dkLen];
    uint8_t *h_block = new uint8_t[hLen];

    /* Generate l - 1 blocks */
    for(i = 0; i < l - 1; i++){
        printf("Block %d\n", i);
        F(password, pLen, salt, sLen, iterations, i + 1, h_block);
        memcpy(output + (hLen * i), h_block, hLen);
    }

    printf("Block %d\n", l);
    F(password, pLen, salt, sLen, iterations, l, h_block);

    /* Copy r bytes out of the remainder block */
    if(r > 0){
        memcpy(output + (hLen * (l - 1)), h_block, r);
    }
    else{
        memcpy(output + (hLen * (l - 1)), h_block, hLen);
    }

    delete[] h_block;
    return output;
}
