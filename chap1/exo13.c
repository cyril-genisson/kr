/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo13.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define IN      1
#define OUT     0
#define HISTMAX 20  // longueur de l'histogramme
#define WORDMAX 27  // longueur maximum d'un mot en langue française

int main(void) {
    int c, i, nc, state;
    int lc;
    int maxvalue;
    int overflow;
    int wl[WORDMAX];

    nc = 0;
    overflow = 0;

    for (i =0; i< WORDMAX ; i++)
        wl[i] = 0;

    while((c = getchar()) != EOF) {
        if ( c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (nc > 0)
                if (nc < WORDMAX)
                    ++wl[nc-1];
                else
                    ++overflow;
            nc = 0
        } else if (state == OUT) {
            state = IN;
            ++nc;
        } else
            ++nc;
    }

