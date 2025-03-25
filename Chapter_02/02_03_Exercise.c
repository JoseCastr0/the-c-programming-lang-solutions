/* 
    Write the function htoi(s) which converts a string of hexadecimal digits 
    (including an optional 0x or 0X) into its equivalent integer value. The allowable
    digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

main() {
    char hex[MAXLINE];
    int i, c, n;

    i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        hex[i] = c;
        ++i;
    }
    hex[i] = '\0';

    n = htoi(hex);
    printf("Result: %d\n", n);

    return 0;
}

// idea: hacer TDD
int htoi(char s[]) {
    return 0;
}

