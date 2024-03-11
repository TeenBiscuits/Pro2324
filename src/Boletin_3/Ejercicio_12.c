// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

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