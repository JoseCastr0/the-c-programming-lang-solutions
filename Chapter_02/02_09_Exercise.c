#include <stdio.h>

/*
  In a two's complement number sustem, x &= (x - 1) deletes the rightmost 1-bit
  in x. Explain why. Use this observation to write a faster version of bitcount.
*/

/* bitcount: count 1 bits in x (faster version)       */
int bitcount(unsigned x) {
  int b = 0;
  for (b = 0; x != 0; x &= (x - 1)) {
    ++b;
  }
  return b;
}

int main(void) {
  unsigned x = 0b10101010; // Example value for x
  int count = bitcount(x);
  printf("Number of 1 bits: %d\n", count); // Print the number of 1 bits
  return 0;
}