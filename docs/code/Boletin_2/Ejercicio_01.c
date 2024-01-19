//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite un número
 *       entero por teclado y muestre por pantalla si es positivo o negativo.
 * in: NÚMERO ENTERO
 * out: SI ES NEGATIVO O NO
 * NOTA1:
 */


int main() {
    int n;

    // Input
    printf("Introduzca un número entero: ");
    scanf("%d",&n);

    // Output
    if (n > 0) {
        printf("El número %d es positivo.",n);
    } else {
        if (n == 0) {
            printf("El número es 0.");
        } else {
            printf("El número %d es negativo.",n);
        }
    }


    return 0;
}
