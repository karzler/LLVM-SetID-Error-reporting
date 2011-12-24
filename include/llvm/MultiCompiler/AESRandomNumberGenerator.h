#ifndef AESRANDOMNUMBERGENERATOR_H_
#define AESRANDOMNUMBERGENERATOR_H_

#include <inttypes.h>
#include "llvm/MultiCompiler/Random.h"

namespace multicompiler
{
namespace Random
{

/* Random number generator based on the AES block cipher.
 *
 * Because the block size in AES is 128 bit, we can generate
 * 128 bit random numbers.  However, there isn't an easy way to get a 128
 * bit number, we're going to have to do some magic to get 64-bit numbers out.
 */
class AESRandomNumberGenerator : public Random
{
private:
    static const int INVALID_KEY_LENGTH = -0x0800;
    static const int INVALID_INPUT_LENGTH = -0x0810;
    /**
     * \brief          AES context structure
     */
    typedef struct {
        int nr;                     /*!<  number of rounds  */
        uint32_t *rk;          /*!<  AES round keys    */
        uint32_t buf[68];      /*!<  unaligned data    */
    }
    aes_context;

    /* Round Constants */
    uint32_t RCON[10];

    /*
     * Forward S-box & tables
     */
    uint8_t FSb[256];
    uint32_t FT0[256];
    uint32_t FT1[256];
    uint32_t FT2[256];
    uint32_t FT3[256];

    aes_context ctx;
    uint64_t counter;
    uint8_t nonce[8];
    uint8_t *key;
    uint16_t keylength;
    uint8_t plaintext[16];

    bool aes_init_done;

    void incrementBigEndianUInt64(uint8_t* val);
    void defaultInitialization();

    void readStateFile();
    void writeStateFile();

    AESRandomNumberGenerator();
    AESRandomNumberGenerator(AESRandomNumberGenerator const&);
    AESRandomNumberGenerator& operator=(AESRandomNumberGenerator const&) {
        return *this;
    }

    void aes_gen_tables();
    void aes_gen_round_keys();
    int aes_set_rounds();
    int aes_setkey_enc();
    int aes_crypt_ecb(aes_context *ctx, const unsigned char *input, unsigned char *output);
public:
    uint64_t random();
    uint64_t randnext(uint64_t max);

    static AESRandomNumberGenerator& Generator() {
        static AESRandomNumberGenerator instance;
        return instance;
    };

    ~AESRandomNumberGenerator();

// Include shuffling code
#include "Shuffle.h"

};
}
}

#endif
