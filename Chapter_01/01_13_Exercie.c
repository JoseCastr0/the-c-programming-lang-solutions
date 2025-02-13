#include <stdio.h>

/* 
	Write a program to print a histogram of the lengths of words in its input.
	It is easy to draw the histogram with the bars horizontal; a vertical
	orientation is more challenging.
*/

// definir c para almacenar cada caracter
// definir numero de caracteres
// definir el length del array (total de palabras)
// recorrer cada item del array con getchar y contar cada caracter que no sea un espacio en blanco

#define MAXHLIST 15			/* max length of histogram	 					*/
#define MAXWORD 11			/* max length of a word		 					*/
#define IN 		1			/* inside a word			 					*/
#define OUT 	0			/* outside a word			 					*/

/* print horizontal histogram */
main() {
	int c, i, nc, state;
	int len;						/* length of each bar 					*/
	int maxvalue; 					/* maximum value for wordLengthCounters	*/
	int ovflow; 					/* number of overflow words				*/
	int wl[MAXWORD];				/* word length counters 				*/

	state = OUT;
	nc = 0;							/* number of chars in a word */
	ovflow = 0;						/* number of words >= MAXWORD */
	/* set array to 0 */
	for (i = 0; i < MAXWORD; i++)
		wl[i] = 0;
	
	while ((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0) 
				if (nc < MAXWORD) 
					++wl[nc];
				else 
					++ovflow;
			nc = 0;
		} else if (state == OUT) {  
			state = IN;	
			nc = 1;				/* begining of word */
		} else 
			++nc;				/* inside a word 	*/
	}
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i];

	for (i = 1; i < MAXWORD; ++i) {
		printf("%5d - %5d : ", i, wl[i]);
		if (wl[i] > 0) {
			if ((len = wl[i] * MAXHLIST / maxvalue) <= 0) 
				len = 1;
		} else 
			len = 0;
		while (len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}
	if (ovflow > 0) 
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
}
