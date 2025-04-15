#include <stdio.h>

/*
  Rewrite the function lower, which converts upper case letters to lower case,
  with a conditional expression instead of if-else.
*/

/* lower: convert c to lower case (Ascii only)       */
int lower(int c) { return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c; }

int main(void) {
  char c = 'E'; // Example character
  char result = lower(c);
  printf("Lowercase: %c\n", result); // Print the lowercase character
  return 0;
}