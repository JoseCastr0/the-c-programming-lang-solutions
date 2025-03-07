#include <stdio.h>
/*
    Write a program detab that replaces tabs in the input with the proper number of blanks to space 
    to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a 
    variable or a symbolic parameter?
*/
#define TABINC 4        /* tab increment size               */
int main()
{
    int c, nb, pos;
    nb = 0;             /* number of blanks necessary       */
    pos = 1;            /* position of character in line    */
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABINC - (pos - 1) % TABINC;
            while (nb > 0) {
                putchar(' ');
                ++pos;
                --nb;
            }
        } else if (c == '\n') { /* newline character        */
            putchar(c);
            pos = 1;
        } else {                /* all other characters     */
            putchar(c);
            ++pos;
        }
    }
}

