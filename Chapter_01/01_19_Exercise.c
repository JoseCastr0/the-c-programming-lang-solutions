#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void reverse(char s[]);
/*
    Write a function reverse(s) that reverses the character string s. Use it to write a program
    that reverses its input a line at a time.
*/
int main()
{
    char line[MAXLINE];      /* current input line */
    
    while ((getLine(line, MAXLINE) > 0)) {
        reverse(line);
        printf("%s", line);
        
    }
    return 0;
}

/* getline: read a line into s, return length       */
int getLine(char line[], int lim) {
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}


void reverse(char s[]) {
    int i, j;
    char temp;

    i = 0;

    while (s[i] != '\0') {
        ++i;
    }
    --i;
    if (s[i] == '\n') {
        --i;
    }

    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}
