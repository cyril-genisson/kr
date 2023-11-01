/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo8.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float ne, nt, nl;
    int c;

    ne = nt = nl = 0.;

    while ( (c = getchar()) != EOF) {
        if (c == ' ')
            ++ne;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("Nombre d'espaces: %.0f\n", ne);
    printf("Nombre de tabulations: %.0f\n",nt);
    printf("Nombre de lignes: %.0f\n",nl);

    return EXIT_SUCCESS;
}
