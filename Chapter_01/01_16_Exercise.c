#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
    Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, 
    and as much as possible of the text.
*/

/* print longest input line*/
main()
{
    int len;            /* current line length */
    int max;            /* maximum length earn so far */
    char line[MAXLINE];      /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    
    while ((len = getLine(line, MAXLINE)) > 0) {
        printf("\n%s -- length: %d\n", line, len - 1);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)    /* there was a line */
        printf("%s", longest);
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

/* copy: copu 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

