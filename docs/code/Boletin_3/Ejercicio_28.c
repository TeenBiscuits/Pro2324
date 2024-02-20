// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>

// Definición funciones
void introduceDatosPorTeclado(int *n, int *mmax);

void imprimirTablaDeMultiplicar(int n, int mmax);

// Main
int main() {
    int n, mmax;
    introduceDatosPorTeclado(&n, &mmax);
    imprimirTablaDeMultiplicar(n, mmax);
    return 0;
}

// Declaración Funciones
void introduceDatosPorTeclado(int *n, int *mmax) {
    printf("Introduzca un número entero: ");
    scanf("%d", n);
    printf("Introduzca el máximo multiplicador: ");
    scanf("%d", mmax);
}

void imprimirTablaDeMultiplicar(int n, int mmax) {
    for (int i = 1; i <= mmax; i++) {
        printf("\t%3d  x  %3d  =  %d\n", n, i, n * i);
    }
}