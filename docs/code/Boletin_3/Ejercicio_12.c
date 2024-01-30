//
// Created by Pablo on 05/12/2023.
//
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