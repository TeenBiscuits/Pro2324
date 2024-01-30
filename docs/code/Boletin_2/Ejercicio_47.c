//
// Created by Pablo on 06/12/2023.
//
// Librerías
#include <stdio.h>

// Constantes
#define MENSAJE "Introduzca el número de filas que quiere imprimir del triángulo de Floyd: "
#define FORMAT "%5d"

// Main
int main() {
    int n;

    printf(MENSAJE);
    scanf("%d",&n);

    // Sacado del Ejercicio 5 / Boletín 3
    for (int i = n, g = 1;i >= 0; i--) {
        for (int f = 1; f != n - i + 1; f++, g++) printf(FORMAT"\t", g);
        printf("\n");
    }

    return 0;
}