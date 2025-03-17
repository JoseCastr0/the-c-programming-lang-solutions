#include <stdio.h>

/* Write a loop equivalent to the for loop below without using && or ||

    for (i=0; i<lim-1 && (c=getchar()) != ´n´ && c != EOF; ++i)
        s[i] = c;
*/

int main()
{
    int c, i, lim;
    char s[10];

    lim = 10;

    for (i = 0; (c = getchar()) != '\n'; ++i) {
        if (lim-1) {
            if (c != EOF) {
                s[i] = c;
            }
        }
    }
    printf("Result: %s", s);

    return 0;
}