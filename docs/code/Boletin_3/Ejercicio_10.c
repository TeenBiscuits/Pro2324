//
// Created by Pablo on 03/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente una función en Lenguaje C que tenga un argumento de
 *       tipo entero y que devuelva la letra P si el número es positivo o N si el número es
 *       negativo. Además del subprograma, implemente la función apropiada para
 *       probar su funcionamiento, activando este último desde el programa principal.
 * in: un número entero
 * out: P si es positivo, N si es negativo
 * NOTA1:
 */

// Librerías
#include <stdio.h>

// Constantes
#define PETICION "Introduzca un número entero: "

// Definición funciones
char esPosioNega(int entero);

// Main
int main() {
    int entero;

    printf(PETICION);
    scanf("%d",&entero);
    printf("%c",esPosioNega(entero));

    return 0;
}

// Declaración Funciones
char esPosioNega(int entero){
    char aux;
    if (entero >= 0) aux = 'P';
    else aux = 'N';
    return aux;
}