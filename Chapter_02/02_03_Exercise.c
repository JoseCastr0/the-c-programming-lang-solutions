/* 
    Write the function htoi(s) which converts a string of hexadecimal digits 
    (including an optional 0x or 0X) into its equivalent integer value. The allowable
    digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

int htoi(char s[]);

main() {
    
    int c, i, lim, result;
    char s[] = "42";

    result = htoi(s);
    
    printf("Result: %d", result);
    // expect: s = 109

    return 0;
}

// idea: hacer TDD
int htoi(char s[]) {
    enum loop { NO, YES };
    enum loop okloop = YES;
    int n = 0;
    int i = 0;

    while (okloop == YES) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = 16 * n + (s[i] - '0');
            ++i;
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            n = (16 * n + (s[i] - '0')) + 10;
            ++i;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            n = (16 * n + (s[i] - 'A')) + 10;
            ++i;
        } else {
            okloop = NO;
        }

    }
    return n;
}

