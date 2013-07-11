#ifndef RANDOMNUMBERGENERATOR_H_
#define RANDOMNUMBERGENERATOR_H_

#include <llvm/Config/config.h>
#include <llvm/ADT/ilist.h>
#include <llvm/ADT/SmallVector.h>
#include <string>
#include <inttypes.h>

#if HAVE_OPENSSL_AES_H
#include <openssl/aes.h>
#endif

#define AES_KEY_LENGTH 16 // bytes
#define AES_BLOCK_SIZE 16
#define PBKDF_ITERATIONS 1000

namespace llvm {

class StringRef;

/* Random number generator based on either the AES block cipher from
 * openssl or an integrated linear congruential generator. DO NOT use
 * the LCG for any security application.
 */
class RandomNumberGenerator {
private:
  /** Imports state file from disk */
  void ReadStateFile(StringRef StateFilename);

  /** Writes current RNG state to disk */
  void WriteStateFile(StringRef StateFilename);

  RandomNumberGenerator();
  RandomNumberGenerator(RandomNumberGenerator const&);
  RandomNumberGenerator& operator=(RandomNumberGenerator const&) {
    return *this;
  }

  void Reseed(StringRef Password, uint64_t Salt);

  // Internal state
#if USE_OPENSSL
  unsigned char IV[AES_BLOCK_SIZE];
  AES_KEY AESKey;
  unsigned char Key[AES_KEY_LENGTH];
  unsigned char EcountBuffer[AES_BLOCK_SIZE];
  unsigned int Num;
  unsigned char Plaintext[AES_KEY_LENGTH];
#else
  uint64_t state;
#endif

public:
  static std::string EntropyData;

  uint64_t Random();
  uint64_t Random(uint64_t Max);

  static RandomNumberGenerator& Generator() {
    static RandomNumberGenerator instance;
    return instance;
  };

  ~RandomNumberGenerator();

  /**
   * Shuffles an *array* of type T.
   *
   * Uses the Durstenfeld version of the Fisher-Yates method (aka the Knuth
   * method).  See http://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
   */
  template<typename T>
    void shuffle(T* array, size_t length) {
    for (size_t i = length - 1; i > 0; i--) {
      size_t j = Random(i + 1);
      if (j < i)
        std::swap(array[j], array[i]);
    }
  }

  /**
   * Shuffles a SmallVector of type T, default size N
   */
  template<typename T, unsigned N>
    void shuffle(SmallVector<T, N>& sv) {
    if (sv.empty()) return;
    for (size_t i = sv.size() - 1; i > 0; i--) {
      size_t j = Random(i + 1);
      if (j < i)
        std::swap(sv[j], sv[i]);
    }
  }

  /**
   * Shuffles an iplist of type T
   */
  template<typename T>
    void shuffle(iplist<T>& list){
    if(list.empty()) return;
    SmallVector<T*, 10> sv;
    for(typename iplist<T>::iterator i = list.begin(); i != list.end(); ){
      /* iplist<T>::remove() actually increments the iterator, so the for 
       * loop shouldn't increment it either.
       */
      T* t = list.remove(i);
      sv.push_back(t);
    }
    shuffle<T*, 10>(sv);
    for(typename SmallVector<T*, 10>::size_type i = 0; i < sv.size(); i++){
      list.push_back(sv[i]);
    }
  }

};


}

#endif
