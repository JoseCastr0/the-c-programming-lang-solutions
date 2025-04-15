#include <stdio.h>

/*
  Write a function invert(x, p, n) that returns x with the n bits that begin at
  position p inverted (i.e., 1 changed into 0 and vice versa), leaving the
  others unchanged.
*/

/* invert: invert n bits of x at position p */
unsigned invert(unsigned x, int p, int n) { return x ^ (((1 << n) - 1) << p); }

int main(void) {
  unsigned x = 0b10101010; // Example value for x
  int p = 4;               // Example position p
  int n = 2;               // Example number of bits n
  unsigned result = invert(x, p, n);
  printf("Result: %u\n", result); // Print the result in unsigned format
  return 0;
}