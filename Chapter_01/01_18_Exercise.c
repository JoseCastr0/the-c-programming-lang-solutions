#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
int removeblanks(char s[]);
/*
    Write a program to remove trailling blanks and tabs from each line of input, and to delete entirely 
    blank lines.
*/
int main()
{
    char line[MAXLINE];      /* current input line */
    
    while ((getLine(line, MAXLINE) > 0)) {
        if (removeblanks(line) > 0) {
            printf("%s", line);
        }
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

/* remove trailing blanks and tabs from character string s */
int removeblanks(char s[]) {
     int i, j;

    /* Remove leading blanks and tabs*/
    i = 0;
    while (s[i] == ' ' || s[i] == '\t') {
        ++i;
    }

    /* Shift the string to the left*/
    if (i > 0) {
        for (j = 0; s[i] != '\0'; ++i, ++j) {
            s[j] = s[i];
        }
        s[j] = '\0';
    }

    /* Remove trailing blanks and tabs*/
    i = 0;
    while (s[i] != '\n' && s[i] != '\0') {  /* Find newline character or end of string*/
        ++i;
    }
    --i;  /* Back off from '\n' or '\0'*/

    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {  /* Remove trailing blanks and tabs*/
        --i;
    }
    if (i >= 0) {  /* Is it a nonblank line?*/
        ++i;
        s[i] = '\n';  /* Put newline character back*/
        ++i;
        s[i] = '\0';  /* Terminate the string*/
    }
    return i;
}
