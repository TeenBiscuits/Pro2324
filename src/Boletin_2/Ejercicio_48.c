//
// Created by Pablo on 06/12/2023.
//
// Librerías
#include <stdio.h>

// Constantes
#define MENSAJE "Introduzca el número máximo que quiere imprimir en el triángulo de Floyd: "
#define FORMAT "%5d"
#define MAX 30

// Main
int main() {
    int n;

    printf(MENSAJE);
    scanf("%d",&n);

    // Sacado del Ejercicio 5 / Boletín 3
    for (int i = MAX, g = 1;i >= 0; i--) {
        if(g > n) break;
        for (int f = 1; f != MAX - i + 1; f++, g++){
            if(g > n) break;
            printf(FORMAT"\t", g);
        }
        printf("\n");
    }

    return 0;
}
