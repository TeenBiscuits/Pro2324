//
// Created by Pablo on 01/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un subprograma en Lenguaje C para mostrar por pantalla
 *       N filas del triángulo de Floyd. Incluya la función para obtener del usuario un
 *       número de filas correcto (N>0). Además del subprograma, implemente la
 *       función apropiada para probar su funcionamiento, activando este último desde
 *       el programa principal.
 * in:
 * out:
 * NOTA1:
 */

// Librerías
#include <stdio.h>

// Constantes
#define MENSAJE "Introduzca un número entero para mostrar un tríangulo de Floyd: "
#define FORMAT "%5d"

// Definición funciones
int introducirN();

void imprimirTFloyd(int n);

// Main
int main() {
    int n;

    n = introducirN();
    imprimirTFloyd(n);

    return 0;
}

// Declaración Funciones
int introducirN() {
    int aux = 0;

    do {
        printf(MENSAJE);
        scanf("%d", &aux);
        while ((getchar()) != '\n');
    } while (aux <= 0);

    return aux;
}

void imprimirTFloyd(int n) {
    for (int i = n, g = 1; i >= 0; i--) {
        for (int f = 1; f != n - i + 1; f++, g++) printf(FORMAT"\t", g);
        printf("\n");
    }
}