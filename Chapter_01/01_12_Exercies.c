#include <stdio.h>

// Write a program that prints its iput one word per line.,

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

main() {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n'); 	/* finish the word */
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN; 		/* begining of word */
			putchar(c);
		}
		else { 					/* inside a word */
			putchar(c);
		}
	}
}
