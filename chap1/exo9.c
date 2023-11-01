/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo9.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define NONESPACE 'a'

int main(void) {
    int c;
    char lastchar;

    lastchar = NONESPACE;

    while((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        else
            if (lastchar != ' ')
                putchar(c);
        lastchar = c;
    }
    return EXIT_SUCCESS;
}
