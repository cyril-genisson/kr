/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo12.c
 * Description: affiche un mot par ligne
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define IN  1
#define OUT 0

int main(void) {
    int c, state;

    state = OUT;

    while((c = getchar()) != EOF) {
        if ( c == ' ' || c == '\t' || c == '\n') {
           if ( state == IN ) {
               putchar('\n');
               state = OUT;
           }
        } else if ( state == OUT ) {
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
    return EXIT_SUCCESS;
}
