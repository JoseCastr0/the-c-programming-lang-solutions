#include <stdio.h>

/* Write an alternate version of squeeze(s1,s2) that delete each
   character in s1 that matches any character in the string s2
*/

void squeeze(char s[], char t[])
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; t[j] != '\0'; j++)
        {
            if (s[i] == t[j])
            {
                s[i] = ' ';
            }
        }
    }
}

int main(void)
{
    char s[] = "Hello, World!";
    char t[] = "World!";
    squeeze(s, t);
    printf("Result: %s\n", s);
    return 0;
}