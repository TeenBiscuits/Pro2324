// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>

// Main
int main() {

    // i filas, j columnas
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i == 0 && j == 0) printf(" *"); // El asterisco de la celda 0,0
            else {
                if (i == 0) printf("%2d", j);// La barra de título
                else {
                    if (j == 0)printf("%2d", i); // La primera columna
                    else printf("%2d", i * j); // El interior de la matriz
                }
            }
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}