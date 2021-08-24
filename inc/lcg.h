#ifndef _LCG_H_
#define _LCG_H_

#include <inttypes.h>

static uint64_t _seed;

void seed_rand(const uint64_t seed);
uint64_t _bits(void);

uint64_t next_uint64();

int64_t next_int64();

uint32_t next_uint32();

int32_t next_int32();

double next_double();

double next_gaussian();

float next_float();

char next_char();

#endif

