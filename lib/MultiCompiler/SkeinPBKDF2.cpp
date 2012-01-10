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
        const unsigned int iterations, unsigned int index, uint8_t * const output){
    unsigned int i, j;
    uint8_t tempdata[SKEIN_512_BITLENGTH / 8];
    uint8_t outputdata[SKEIN_512_BITLENGTH / 8];
    Skein_512_Ctxt_t ctx;

    /* First round: P, S || INT(index) */
    unsigned int inputlen = passwordlen + saltlen + sizeof(iterations);
    uint8_t* input = new uint8_t[inputlen];
    memcpy(input, password, passwordlen);
    memcpy(input + passwordlen, salt, saltlen);
    memcpy(input + passwordlen + saltlen, &iterations, sizeof(iterations));
    Skein_512_Init(&ctx, 512);
    Skein_512_Update(&ctx, input, inputlen);
    Skein_512_Final(&ctx, outputdata);
    delete[] input;

    for(i = 0; i < iterations - 1; i++){
        /* PRF(P, U_1) */
        inputlen = passwordlen + SKEIN_512_BITLENGTH / 8;
        input = new uint8_t[inputlen];
        memcpy(input, password, passwordlen);
        memcpy(input + passwordlen, tempdata, sizeof(tempdata));
        Skein_512_Init(&ctx, 512);
        Skein_512_Update(&ctx, input, inputlen);
        Skein_512_Final(&ctx, tempdata);
        delete[] input;

        /* XOR */
        for(j = 0; j < SKEIN_512_BITLENGTH / 8; j++){
            outputdata[j] ^= tempdata[j];
        }
    }

    memcpy(output, outputdata, SKEIN_512_BITLENGTH / 8);
}

uint8_t *pbkdf2(uint8_t const *password, const unsigned int passwordlen, uint8_t const *salt, const unsigned int saltlen,
        const unsigned int iterations, const unsigned int length) {
    if(length > UINT32_MAX - 1) {
        return NULL;
    }
    unsigned int i;
    unsigned int l = ceil(length / SKEIN_512_BITLENGTH);
    unsigned int r = length - (l - 1) * SKEIN_512_BITLENGTH;

    uint8_t *output = new uint8_t[length / 8];
    for(i = 0; i < l; i++){
        F(password, passwordlen, salt, saltlen, iterations, i, output);
    }
    return output;
}
