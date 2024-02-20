// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>
#include <math.h>

// Constantes
#define e 2.718281828459045235360 // Sacada de Wikipedia
#define MAX 100
#define ERROR 0.0001

// Main
int main() {
    float aproxdeE = 1, x = 1, fact; // Comenzando en  1,  e ^ x = e ^ 1, factorial
    int rep; // Rep

    // Fórmula: 1 + x + (x^2/2!) + (x^3/3!) + ...
    aproxdeE = 1 + x;
    for (int i = 2; i < MAX; i++) {
        rep++;fact = 1;
        for (int j = 1; j <= i; j++) fact = j * fact;
        aproxdeE += (powf(x,i)/fact);
        if (fabs(e-aproxdeE) < ERROR) break; // Cuando el error absoluto sea menor fin al bucle, en caso contrario hasta que i = MAX
    }
    printf("El valor aproximado de e (%d rep.): %.5f",rep,aproxdeE);

    return 0;
}