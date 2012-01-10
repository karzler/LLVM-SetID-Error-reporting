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

#define SKEIN_512_BITLENGTH 512

void F(const uint8_t * const password, const unsigned int passwordlen, const uint8_t * const salt, const unsigned int saltlen,
        const unsigned int iterations, const uint32_t index, uint8_t * const output){
    unsigned int i, j;
    uint8_t *prevblock = new uint8_t[SKEIN_512_BITLENGTH / 8];
    uint8_t *outputblock = new uint8_t[SKEIN_512_BITLENGTH / 8];
    Skein_512_Ctxt_t ctx;

    /* First round
     * U_1 = PRF(password, salt || UINT32(index)
     * RFC 2898 says that iterations is a 4 byte encoding */
    unsigned int inputlen = passwordlen + saltlen + sizeof(index);
    uint8_t* input = new uint8_t[inputlen];
    memcpy(input, password, passwordlen);
    memcpy(input + passwordlen, salt, saltlen);
    memcpy(input + passwordlen + saltlen, &iterations, sizeof(index));

    Skein_512_Init(&ctx, 512);
    Skein_512_Update(&ctx, input, inputlen);
    Skein_512_Final(&ctx, prevblock);

    memcpy(outputblock, prevblock, 512 / 8);

    uint8_t *tempdata = new uint8_t[512 / 8];
    for(i = 0; i < iterations; i++){
        /* PRF(P, U_1) = PRF(P, prev_block) */
        inputlen = passwordlen + 512 / 8;
        memcpy(input, password, passwordlen);
        memcpy(input + passwordlen, prevblock, 512 / 8);

        Skein_512_Init(&ctx, 512);
        Skein_512_Update(&ctx, input, inputlen);
        Skein_512_Final(&ctx, tempdata);

        /* XOR */
        for(j = 0; j < SKEIN_512_BITLENGTH / 8; j++){
            outputblock[j] ^= tempdata[j];
        }

        /* Save the previous block */
        memcpy(prevblock, tempdata, 512 / 8);
    }
    delete[] tempdata;
    delete[] input;

    memcpy(output, outputblock, SKEIN_512_BITLENGTH / 8);
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
    unsigned int hLen = 512 / 8; /* Assume Skein 512-512 -- length of output in bytes */
    if(dkLen > (UINT32_MAX - 1) * hLen) {
        printf("Desired derived key too long\n");
        return NULL;
    }
    unsigned int i;

    /* Number of Skein blocks */
    const unsigned int l = ceil(dkLen / hLen);

    /* Number of bytes that get copied from a remainder block */
    const unsigned int r = dkLen - (l - 1) * hLen;

    uint8_t *output = new uint8_t[dkLen];
    uint8_t *h_block = new uint8_t[hLen];

    /* Generate l blocks */
    for(i = 0; i < l; i++){
        F(password, pLen, salt, sLen, iterations, i + 1, h_block);
        memcpy(output + (hLen * i), h_block, hLen);
    }

    /* Generate remainder block - if necessary */
    if(r > 0){
        F(password, pLen, salt, sLen, iterations, l, h_block);
    }

    /* Copy r bytes out of the remainder block */
    memcpy(output + (hLen * l), h_block, r);

    delete[] h_block;
    return output;
}
