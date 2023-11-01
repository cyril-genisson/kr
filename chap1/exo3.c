/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo3.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float fahr, celsius;
    int min, max, intervalle;

    min = 0;
    max = 300;
    intervalle = 20;
    fahr = min;

    printf("Fahr Celsius\n");

    while(fahr <= max) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  %6.1f\n", fahr, celsius);
        fahr += intervalle;
    }

    return EXIT_SUCCESS;
}
