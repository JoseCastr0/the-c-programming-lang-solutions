#include <stdio.h>

/*
  Write the function setbits(x, p, n, y), which returns x with the n bits that
  begin at position p set to the rightmost n bits of y, leaving the other bits
  unchanged.
*/

/* setbits: set n bits of x at position p with bits of y    */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
  return (x & ~(((1 << n) - 1) << p)) | ((y & ((1 << n) - 1)) << p);
}

int main(void) {
  unsigned x = 0b10101010; // Example value for x
  unsigned y = 0b1100;     // Example value for y
  int p = 4;               // Example position p
  int n = 2;               // Example number of bits n
  unsigned result = setbits(x, p, n, y);
  printf("Result: %u\n", result); // Print the result in unsigned format
  return 0;
}