#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <sys/time.h>

#include "lcg.h"

int main(void) {
  struct timeval start;

  gettimeofday(&start, NULL);

  seed_rand(start.tv_usec);

  printf("int64    : %" PRIi64 "\n", next_int64());
  printf("uint64   : %" PRIu64 "\n", next_uint64());
  printf("int32    : %" PRIi32 "\n", next_int32());
  printf("uint32   : %" PRIu32 "\n", next_uint32());
  printf("double   : %.15f\n", next_double());
  printf("float    : %.7f\n", next_float());
  printf("char     : %d\n", next_char());

  return EXIT_SUCCESS;
}
