
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//  This file implements cryptographically secure random number generation
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "rng"
#include "llvm/Support/RandomNumberGenerator.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Config/config.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/ErrorHandling.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#if LLVM_ENABLE_RNG == 1 && HAVE_OPENSSL_AES_H && HAVE_OPENSSL_EVP_H
#include <openssl/aes.h>
#include <openssl/evp.h>
#endif

extern int errno;

using namespace llvm;

STATISTIC(RandomNumbersGenerated, "Number of random numbers generated");

#if LLVM_ENABLE_RNG == 1

namespace {
  static cl::opt<unsigned long long>
  RandomSeed("rng-seed", cl::value_desc("seed"),
             cl::desc("Seed for the random number generator"));

  static cl::opt<std::string>
  RNGStateFile("rng-state-file", cl::value_desc("filename"),
               cl::desc("State filename for the random number generator"));
}


RandomNumberGenerator::~RandomNumberGenerator() {
  if (!RNGStateFile.empty()) {
    WriteStateFile(RNGStateFile);
  }
}

std::string RandomNumberGenerator::EntropyData;


#if USE_OPENSSL

RandomNumberGenerator::RandomNumberGenerator() {
  DEBUG(errs() << "AES RNG: Initializing context ");
  if (RandomSeed != 0 && !EntropyData.empty()) {
    DEBUG(errs() << " with command line seed and entropy data\n");

    // Seed properly
    Reseed(EntropyData, RandomSeed);

  } else if(RNGStateFile != "") {
    // Fall back on state file...if provided.
    DEBUG(errs() << " with file\n");
    ReadStateFile(RNGStateFile);
  } else{
    DEBUG(errs() << " to default\n");
    errs() << "Warning! Using unseeded random number generator\n";

    Reseed(EntropyData, RandomSeed);
  }
}

void RandomNumberGenerator::Reseed(StringRef Password, uint64_t Salt) {
  DEBUG(errs() << "Re-Seeding AES RNG context from salt and password\n");
  DEBUG(errs() << "Salt: " << Salt << "\n");

  unsigned KeyLen = AES_KEY_LENGTH + 2*AES_BLOCK_SIZE;
  unsigned char *RandomBytes = (unsigned char*) malloc(KeyLen);
  PKCS5_PBKDF2_HMAC_SHA1(Password.data(), Password.size(), (unsigned char*)&Salt, sizeof(Salt), PBKDF_ITERATIONS, KeyLen, RandomBytes);

  // TODO(sjcrane): check return val
  memcpy(Key, RandomBytes, AES_KEY_LENGTH);
  AES_set_encrypt_key(Key, AES_KEY_LENGTH*8, &AESKey);
  memcpy(IV, RandomBytes + AES_KEY_LENGTH, AES_BLOCK_SIZE);
  memcpy(Plaintext, RandomBytes + AES_KEY_LENGTH + AES_BLOCK_SIZE, AES_BLOCK_SIZE);

  free(RandomBytes);
}

void RandomNumberGenerator::ReadStateFile(StringRef StateFilename) {
  DEBUG(errs() << "Re-Seeding AES RNG context from state file\n");
  DEBUG(errs() << "File: " << StateFilename << "\n");


  struct stat s;
  /* Don't read if there's no file specified.
   * TODO(tmjackso): This probably shouldn't fail silently. */
  if (StateFilename.empty() || stat(StateFilename.data(), &s) != 0) {
    return;
  }

  int fhandle = open(StateFilename.data(), O_RDONLY);
  int bytes_read = 0;

  uint16_t keylength;
  unsigned char* KeyBytes[AES_KEY_LENGTH];

  /* uint16_t: keysize */
  bytes_read += read(fhandle, (char *)&keylength, sizeof(uint16_t));
  assert(keylength == AES_KEY_LENGTH && "Invalid key length");

  /* keylength * uint8_t: key */
  bytes_read += read(fhandle, (char *)Key, AES_KEY_LENGTH);
  
  /* 16 * uint8_t: plaintext */
  bytes_read += read(fhandle, (char *)Plaintext, AES_BLOCK_SIZE);

  /* 8 * uint8_t: IV (nonce+counter) */
  bytes_read += read(fhandle, (char *)IV, AES_BLOCK_SIZE);

  if (bytes_read != s.st_size) {
    // We didn't read the whole file
    errs() << "Warning: Did not read the entire state file!\n";
  }

  close(fhandle);

  // TODO(sjcrane): check return val
  AES_set_encrypt_key(Key, AES_KEY_LENGTH*8, &AESKey);
}

RandomNumberGenerator::RandomNumberGenerator(RandomNumberGenerator const& a) {
  DEBUG(errs() << "Initialising AES RNG context from copy constructor\n");
  AESKey = a.AESKey;
  memcpy(Key, a.Key, AES_KEY_LENGTH);
  memcpy(IV, a.IV, AES_BLOCK_SIZE);
  memcpy(EcountBuffer, a.EcountBuffer, AES_BLOCK_SIZE);
  Num = a.Num;
}

void RandomNumberGenerator::WriteStateFile(StringRef StateFilename) {
  DEBUG(errs() << "Writing RNG state file to " << StateFilename << "\n");

  /* Don't serialise without a file name */
  assert(!StateFilename.empty() && "Cannot serialize RNG state file without a filename");

  uint16_t keylength = AES_KEY_LENGTH;

  int fhandle = open(StateFilename.data(), O_WRONLY);
  int byte_count = 0;
  byte_count += write(fhandle, (char *)&keylength, sizeof(uint16_t));
  byte_count += write(fhandle, (char *)Key, AES_KEY_LENGTH);
  byte_count += write(fhandle, (char *)Plaintext, AES_BLOCK_SIZE);
  byte_count += write(fhandle, (char *)IV, AES_BLOCK_SIZE);
  close(fhandle);
}

uint64_t RandomNumberGenerator::Random() {
  RandomNumbersGenerated++;

  unsigned char Output[AES_BLOCK_SIZE];
  AES_ctr128_encrypt(Plaintext, Output, AES_BLOCK_SIZE, &AESKey, IV, EcountBuffer, &Num);

  uint64_t OutValue;
  memcpy(&OutValue, Output, sizeof(uint64_t));
  return OutValue;
}

uint64_t RandomNumberGenerator::Random(uint64_t Max) {
  uint64_t t = Max * (((uint64_t)1 << 63) / Max);
  uint64_t r;
  while ((r = Random()) >= t) { /* NOOP */ }

  return r % Max;
}

#else // do not use libcrypto

namespace {
  static const uint64_t LOW = 0x330e;
  static const uint64_t A = 0x5deece66dULL;
  static const uint64_t C = 0xb;
  static const uint64_t M = 0x0000ffffffffffffULL;
}

RandomNumberGenerator::RandomNumberGenerator() : state(0) {
  errs() << "Warning! Using insecure random number generator. Do not use for security.\n";
  if (RandomSeed != 0) {
    // Seed properly
    state = (RandomSeed << 16) | LOW;
  } else if(RNGStateFile != "") {
    // Fall back on state file...if provided.
    ReadStateFile(RNGStateFile);
  } else{
    errs() << "Warning! Using unseeded random number generator\n";

    state = (RandomSeed << 16) | LOW;
  }
}

RandomNumberGenerator::RandomNumberGenerator(RandomNumberGenerator const& a) : state(0) {
  state = a.state;
}

void RandomNumberGenerator::ReadStateFile(StringRef StateFilename) {
  struct stat s;
  // Don't read if there's no file specified.
  if (StateFilename.empty() || stat(StateFilename.data(), &s) != 0) {
    return;
  }

  int fhandle = open(StateFilename.data(), O_RDONLY);
  int bytes_read = 0;


  DEBUG(errs() << "Reading RNG state file from " << RNGStateFile << "\n");
  bytes_read += read(fhandle, &state, sizeof(uint64_t));

  close(fhandle);
}

void RandomNumberGenerator::WriteStateFile(StringRef StateFilename) {
  /* Don't serialise without a file name */
  assert(!StateFilename.empty() && "Cannot serialize RNG state file without a filename");


  int fhandle = open(StateFilename.data(), O_WRONLY);
  int byte_count = 0;
  byte_count += write(fhandle, (char *)&state, sizeof(uint64_t));
  close(fhandle);
}

/* This RNG only generates 32 bits of randomness, so we have to cast it down
 * and then up
 */
uint64_t RandomNumberGenerator::Random() {
  RandomNumbersGenerated++;

  state = (A * state + C) & M;
  return static_cast<uint32_t>(state >> 17);
}

/*
 * With only 32 bits of randomness, we do a proportional shift to ensure we
 * get even distribution over the potential max.
 */
uint64_t RandomNumberGenerator::Random(uint64_t max) {
  return (static_cast<double>(Random()) / UINT32_MAX) * max;
}

#endif // USE_OPENSSL

#endif // LLVM_ENABLE_RNG
