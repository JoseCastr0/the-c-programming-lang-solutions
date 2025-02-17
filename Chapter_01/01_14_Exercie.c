#include <stdio.h>
#include <ctype.h>

/* 
	Write a program to print a histogram of the lengths of words in its input.
	It is easy to draw the histogram with the bars horizontal; a vertical
	orientation is more challenging.
*/

// definir c para almacenar cada caracter
// definir numero de caracteres
// definir el length del array (total de palabras)
// recorrer cada item del array con getchar y contar cada caracter que no sea un espacio en blanco

#define MAXHLIST 15					/* max length of histogram	 					*/
#define MAXCHAR 128					/* max different characters	 					*/

/* print horizontal histogram */
main() {
	int c, i;
	int len;						/* length of each bar 					*/
	int maxvalue; 					/* maximum value for cc[]				*/
	int cc[MAXCHAR];				/* character counters		 			*/

	/* set array to 0 */
	for (i = 0; i < MAXCHAR; i++)
		cc[i] = 0;
	
	while ((c = getchar()) != EOF) {
		if (c < MAXCHAR)
			++cc[c];
	}

	maxvalue = 0;
	for (i = 1; i < MAXCHAR; ++i)
		if (cc[i] > maxvalue)
			maxvalue = cc[i];
	
	printf("\n");
	for (i = 1; i < MAXCHAR; ++i) {
		if (isprint(i))
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		else 
			printf("%5d -   - %5d : ", i, cc[i]);
		
		if (cc[i] > 0) {
			if ((len = cc[i] * MAXHLIST / maxvalue) <= 0)
				len = 1;
		} else {
			len = 0;
		}

		while (len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}
}
