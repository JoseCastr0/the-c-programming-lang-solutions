#include <stdio.h>

/*
  Write a function rightrot(x, n) that returns the value of the integer x
  rotated to the right by n bit positions.
*/

/* rightrot: rotate x to the right by n bits                            */
unsigned rightrot(unsigned x, int n) {
  int bits = sizeof(x) * 8; // Calculate the number of bits in x
  n = n % bits; // Handle cases where n is greater than the number of bits
  return (x >> n) | (x << (bits - n)); // Rotate right
}

int main(void) {
  unsigned x = 0b10101010; // Example value for x
  int n = 2;               // Example number of positions to rotate
  unsigned result = rightrot(x, n);
  printf("Result: %u\n", result); // Print the result in unsigned format
  return 0;
}