//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite un número
entero por teclado y muestre por pantalla si es par o impar.
 * in: NÚMERO ENTERO
 * out: SI ES PAR O IMPAR
 * NOTA1:
 */

int main() {
    int n;

    // INPUT
    printf("Introduzca un número entero: ");
    scanf("%d",&n);

    // OUTPUT
    if (n == 0) {
        printf("El número es 0.");
    } else {
        if (n % 2 == 0) {
            printf("El número %d es par.",n);
        } else {
            printf("El número %d es impar.",n);
        }
    }

    return 0;
}
