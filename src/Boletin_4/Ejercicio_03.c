//
// Created by Pablo on 08/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en lenguaje C, que utilizando
 *       exclusivamente subprogramas, calcule la suma de los elementos de un array de
 *       números reales proporcionados por el usuario, considerando como máximo 30
 *       elementos.
 * in: Introduzca números reales, un máximo de 30
 * out: El sumatorio
 */

// Librerías
#include <stdio.h>

// Constantes
#define MAX 30

// Definiciones
typedef float listanumeros[MAX];

// Definición funciones
void introducirPorTeclado(listanumeros numeros);

void imprimirSumatorio(const listanumeros numeros);

// Main
int main() {
    listanumeros lnumeros;
    introducirPorTeclado(lnumeros);
    imprimirSumatorio(lnumeros);
    return 0;
}

// Declaración Funciones
void introducirPorTeclado(listanumeros numeros) {
    printf("Introduzca los números que quiere sumar, para terminar introduzca 0: ");
    // Expresión lógica dentro del for: mientras i < 30 y a partir del primer número que el número
    // introducido anteriormente (i-1) no fuera 0.
    for (int i = 0; i < MAX && (i < 1 || numeros[i - 1] != 0.0); i++) scanf("%f", &numeros[i]);
}

void imprimirSumatorio(const listanumeros numeros) {
    float suma = 0;
    // Impresión hasta el MAX o hasta llegar al primer 0
    for (int i = 0; i < MAX && numeros[i] != 0; i++) suma += numeros[i];
    printf("El sumatorio final son: %.2f", suma);
}