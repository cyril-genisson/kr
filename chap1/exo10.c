/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo10.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;

    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
    return EXIT_SUCCESS;
}
