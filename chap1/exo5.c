/*
 * Author: Cyril GENISSON
 * Created: 01/11/2023
 * Updated: 01/11/2023
 *
 * Filename: exo5.c
 * Description: 
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int fahr;

    for(fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr -32));
    }

    return EXIT_SUCCESS;
}
