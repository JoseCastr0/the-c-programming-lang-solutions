#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
    Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, 
    and as much as possible of the text.
*/
main()
{
    
}

/* getline: read a line into s, return length */
float getline(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c !='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '/0';
    return i;
}

void copy

