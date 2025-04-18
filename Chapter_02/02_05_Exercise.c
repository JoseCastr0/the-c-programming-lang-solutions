#include <stdio.h>

/*
  Write the function aby(s1, s2), which returns the first location
  in the string s1 where any character from the string s2 occurs, or -1 if s1
  contains no characters from s2. (The standard library function strpbrk does
  the same job but returns a pointer to the location.)
*/

/* any: return first location in s1 where any char from s2 occurs */
int any(char s1[], char s2[]) {
  int i, j;

  for (i = 0; s1[i] != '\0'; i++)
    for (j = 0; s2[j] != '\0'; j++)
      if (s1[i] == s2[j])
        return i;

  return -1;
}

int main(void) {
  char s1[] = "Hello, World!";
  char s2[] = "War";
  int result = any(s1, s2);
  printf("Result: %d\n", result);
  return 0;
}