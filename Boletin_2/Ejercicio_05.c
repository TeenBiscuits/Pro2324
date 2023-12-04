//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que muestre por pantalla tres
 *       números enteros introducidos por teclado ordenados de menor a mayor.
 * in: TRES NÚMEROS
 * out: NÚMEROS DADOS DE MENOR A MAYOR
 * NOTA1:
 */

int main() {
    int a, b, c, menor, medio, mayor;

    // IN
    puts("Introduzca tres números para que este programa los organice de mayor a menor.");
    printf("\tTres números, ordenados como quiera: ");
    scanf("%d %d %d", &a, &b, &c);

    // ORDENAR
    if (a < b) {
        menor = a;
        mayor = b;
    } else {
        menor = b;
        mayor = a;
    }
    if (c < menor) {
        medio = menor;
        menor = c;
    } else {
        if (c < mayor) {
            medio = c;
        } else {
            medio = mayor;
            mayor = c;
        }
    }

    // OUT
    printf("\nOrdenados de menor a mayor: %d < %d < %d", menor, medio, mayor);

    return 0;
}
