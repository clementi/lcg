#include <math.h>

#include "lcg.h"

void seed_rand(const uint64_t seed) {
  _seed = seed;
}

uint64_t _bits(void) {
  uint64_t next = (6364136223846793005L * _seed + 1442695040888963407L) & 0xFFFFFFFFFFFFFFFFL;
  seed_rand(next);
  return next;
}

int64_t next_int64() {
  return (int64_t) _bits();
}

uint64_t next_uint64() {
  return _bits();
}

int32_t next_int32() {
  return (int32_t) (_bits() >> 32);
}

uint32_t next_uint32() {
  return _bits() >> 32;
}

double next_double() {
  return (double) _bits() / (double) 0xFFFFFFFFFFFFFFFFL;
}

float next_float() {
  return (float) _bits() / (float) 0xFFFFFFFFFFFFFFFFL;
}

char next_char() {
  return (char) (_bits() >> 56);
}
