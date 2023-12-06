//
// Created by Pablo on 06/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente en Lenguaje C una función que calcule el valor del
 *       siguiente polinomio: 3x^5 + 2x^4 – 5x^3 – x^2 + 7^x - 6 Además del subprograma,
 *       implemente la función apropiada para probar su funcionamiento preguntándole
 *       al usuario el valor de x, y activando esta última desde el programa principal.
 * in: El valor de x
 * out: Solución al polinomio dado.
 */

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