#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */
#define MAXCHARS 80     /* maximum chars per line size */

int getLine(char line[], int maxline);
/*
    Write a program to print all input lines that are longer than 80 characters.
*/
int main()
{
    int len;            /* current line length */
    char line[MAXLINE];      /* current input line */
    
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len - 1 > MAXCHARS) {
            printf("Longer than %d chars. Length %d ----> %s", MAXCHARS, len -1, line);
        }
    }
    return 0;
}

/* getline: read a line into s, return length       */
int getLine(char s[], int lim) {
    int c, i, j;

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2) {
            s[j] = c;   /* line still in boundaries */
            ++j;
        }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

