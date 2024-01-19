//
// Created by Pablo on 05/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente una función en Lenguaje C que reciba un entero N y
 *       calcule 1+2+3+...+N, devolviendo dicho valor. Además de la función,
 *       implemente la función apropiada para probar su funcionamiento, activando este
 *       último desde el programa principal.
 * in:
 * out:
 * NOTA1:
 */

// Librerías
#include <stdio.h>

// Constantes
#define MENSAJE "Introduzca un entero para realizarle el factorial: "
#define RESPUESTA "El factorial de %d! es: %d"

// Definición funciones
int factorialN(int N);

// Main
int main() {
    int N, fact;

    printf(MENSAJE);
    scanf("%d", &N);
    fact = factorialN(N);
    printf(RESPUESTA, N, fact);

    return 0;
}

// Declaración Funciones
int factorialN(int N) {
    int aux = 1;
    for (int i = 1; i <= N; i++) aux = i * aux;
    return aux;
}