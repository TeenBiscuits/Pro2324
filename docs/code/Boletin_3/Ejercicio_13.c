// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>
#include <math.h>

// Constantes
#define PREGUNTA "¿Cual es el valor de x? "
#define RESPUESTA "Las solución al polinomio (3x^5 + 2x^4 – 5x^3 – x^2 + 7^x - 6) es: "

// Definición funciones
float solEcua5Grado(float x);

// Main
int main() {
    float x, sol;

    printf(PREGUNTA);
    scanf("%f", &x);

    sol = solEcua5Grado(x);

    printf(RESPUESTA"%.2f", sol);

    return 0;
}

// Declaración Funciones
float solEcua5Grado(float x) {
    float aux;
    aux = 3 * powf(x, 5) + 2 * powf(x, 4) - 5 * powf(x, 3) - x * powf(x, 2) + 7 * x - 6;
    return aux;
}