//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite por teclado dos
 *       números enteros y que muestre un mensaje indicando si el primero es o no
 *       divisible por el segundo.
 * in: DOS NÚMEROS ENTEROS
 * out: SI ES DIVISIBLE O NO POR EL SEGUNDO
 * NOTA1:
 */

int main() {
    int a,b;

    // INPUT
    printf("Introduzca dos números enteros y te diré si el primero es divisible por el segundo: ");
    scanf("%d %d",&a,&b);

    // OUTPUT
    if (b == 0) {
        printf("NO SE PUEDE DIVIDIR ENTRE 0.");
    } else {
        if (a % b == 0) {
            printf("%d es divisible entre %d.", a, b);
        } else {
            printf("%d no es divisible entre %d.", a, b);
        }
    }

    return 0;
}
