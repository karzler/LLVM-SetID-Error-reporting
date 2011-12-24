#ifndef AESCOUNTERMODERNG_H_
#define AESCOUNTERMODERNG_H_

/**
 * C Interface to the random number generator based on AES in CTR mode.
 *
 * Designed for use in C projects.  Based on reference implementation of AES.
 *
 * Interface technically allows for multiple RNGs to be instantiated at once 
 * by passing aesrng_context object to the functions.  This is by design.
 *
 * -- Todd Jackson, University of California, Irvine
 * 
 * 15 November 2011: Initial drop
 */

#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * AES context structure, but extended to act a RNG state
 */
typedef struct {
    uint64_t counter;
    uint8_t nonce[8];
    uint16_t keylength;
    uint8_t *key;
    uint8_t plaintext[16];

    int nr;                /* number of rounds  */
    uint32_t *rk;          /* AES round keys    */
    uint32_t buf[68];      /* unaligned data    */
} aesrng_context;

typedef struct {
    uint64_t hi;
    uint64_t lo;
} uint128_t;

void aesrng_initialize(aesrng_context** ctx, uint64_t counter, uint16_t keylength);
void aesrng_initialize_to_empty(aesrng_context** ctx);
void aesrng_initialize_to_default(aesrng_context** ctx);
void aesrng_destroy(aesrng_context* ctx);

void aesrng_restore_state(aesrng_context* ctx, const char* filename);
void aesrng_write_state(aesrng_context* ctx, const char* filename);

void aesrng_random_u128(aesrng_context* ctx, uint128_t* val);
uint64_t aesrng_random_u64(aesrng_context* ctx);
uint32_t aesrng_random_u32(aesrng_context* ctx);

#ifdef __cplusplus
}
#endif

#endif
