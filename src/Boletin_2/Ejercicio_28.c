//
// Created by Pablo on 30/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que acepte valores enteros
 *       como entrada (por teclado) y que muestre por pantalla la suma de los valores
 *       introducidos. El programa terminará cuando el usuario introduzca un 0, tal y
 *       como se muestra en el ejemplo siguiente:
 * in: Sucesión de números
 * out: El sumatorio de todos
 * NOTA1:
 */
#include <stdio.h>

int main() {
    int a, b;

    printf("A continuación introduzca los números enteros de los que desee calcular la suma\nseparados por espacios:\n");

    do{
        scanf(" %d",&b);
        a += b;
    } while (b != 0);

    printf("La suma de los números introducidos es %d",a);

    return 0;
}