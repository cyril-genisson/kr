/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo4.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int mini, maxi, intervalle;
    float celsius, fahr;

    mini = 0;
    maxi = 300;
    intervalle = 20;
    celsius = mini;

    printf("Celsius\t\t  Fahr\n");

    while( celsius <= maxi) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius += intervalle;
    }

    return EXIT_SUCCESS;
}
