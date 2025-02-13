#include <stdio.h>

// Write a program to copy its input to its output, 
// replacing each string of one or more blanks by a single blank.

#define NONBLANK 'a';
main()
{
  int c, lastC;

  lastC = NONBLANK;

  printf("Enter some text. Press Ctrl+D to end input.\n");

  while ((c = getchar()) != EOF)
  {
    if (c != ' ')
      putchar(c);
    
    if (c == ' ')
      if (lastC != ' ')
        putchar(c);
        
    lastC = c;
  }

  printf("Result: %d\n", lastC);
}
