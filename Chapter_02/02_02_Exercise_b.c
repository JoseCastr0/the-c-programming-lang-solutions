#include <stdio.h>

/* Write a loop equivalent to the for loop below without using && or ||

    for (i=0; i<lim-1 && (c=getchar()) != ´n´ && c != EOF; ++i)
        s[i] = c;
*/

int main()
{
    enum loop { NO, YES };
    enum loop okloop = YES;
    int c, i, lim;
    char s[10];

    int i = 0;
    lim = 10;

    while (okloop == YES) {
        if (i >= lim - 1) {
            okloop = NO;
        } else if ((c = getchar()) == '\n') {
            okloop = NO;
        } else if (c == EOF) {
            okloop = NO;
        } else {
            s[i] = c;
            ++i;
        }
    }
    
    printf("Result: %s", s);

    return 0;
}