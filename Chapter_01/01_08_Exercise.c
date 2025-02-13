#include <stdio.h>

// Write a program to count blanks, tabs, and newlines.
main()
{
  int c, blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;

  printf("Enter some text. Press Ctrl+D to end input.\n");

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++blanks;
    }
    if (c == '\t')
    {
      ++tabs;
    }
    if (c == '\n')
    {
      ++newlines;
    }
  }

  printf("Blanks: %d\n", blanks);
  printf("Tabs: %d\n", tabs);
  printf("Newlines: %d\n", newlines);
}
