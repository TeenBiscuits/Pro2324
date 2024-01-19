//
// Created by Pablo on 10/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente una función recursiva en Lenguaje C que calcule y
 *       muestre la tabla de multiplicar de un número entero a partir de dicho número y
 *       el máximo multiplicador. Además de la función, implemente la función
 *       apropiada para probar su funcionamiento.
                                        EJEMPLO DE EJECUCIÓN
                                        Introduzca un número entero: 12
                                        Introduzca el máximo multiplicador: 7
                                            12 x 1 = 12
                                            12 x 2 = 24
                                            12 x 3 = 36
                                            12 x 4 = 48
                                            12 x 5 = 60
                                            12 x 6 = 72
                                            12 x 7 = 84
 * in: Un número entero, su máximo multiplicador
 * out: Una tabla de multiplicar
 */

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