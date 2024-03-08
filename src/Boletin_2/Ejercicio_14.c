// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;

    // BUCLE DE INPUT
    bool nocontinuar = true;
    do {
        int n, error;
        puts("Introduzca dos números enteros positivos, el primero de tres cifras, el segundo de una.");
        printf("\n\tDos números (XXX, X): ");
        n = scanf("%d %d", &a, &b);
        while((getchar()) != '\n'); // Limpio el buffer por seguridad
        error = 0; // INICIALIZO LA VARIABLE DE CONTROL DE ERRORES
        if (n == 2) { // Inputs válidos
            if (a >= 0 && b >= 0) {
                if ((a >= 100 && a < 1000)) { // PRIMER NÚMERO VÁLIDO
                    if ((b >= 0 && b < 10)) {  // SEGUNDO NÚMERO VÁLIDO
                        nocontinuar = false; // CORRECTO CONTINUAR
                    } else { error = 2; } // SENDOS NÚMEROS NO VÁLIDOS
                } else {
                    if (b >= 0 && b < 10) { // SEGUNDO NÚMERO VÁLIDO
                        error = 1;
                    } else { error = 3; } // SENDOS NÚMEROS NO VÁLIDOS
                }
            } else { error = 5; }
        } else { error = 4; }

        // Control de mensajes de error
        switch (error) {
            case 1:     // PRIMER NÚMERO MAL
                printf("\nError: El primer número no tiene tres cifras.\n");
                break;
            case 2:     // SEGUNDO NÚMERO MAL
                printf("\nError: El segundo número no tiene una cifra.\n");
                break;
            case 3:     // SENDOS NÚMEROS NO VÁLIDOS
                printf("\nError: Sendos números no tienen el formáto especificado.\n");
                break;
            case 4:     // INPUT NO VÁLIDO
                printf("\nError: Introduzca dos inputs válidos.\n");
                break;
            case 5:     // NO POSITIVOS
                printf("\nError: Ambos números deben ser positivos.\n");
                break;
            default:    // NO HAY ERRORES ERROR = 0
                break; // Buena práctica hay que evitar "fallitos"
        }
    } while (nocontinuar);

    // MULTIPLICACIÓN
    c = a * b;

    // OUTPUT
    printf("\n\n\t\t\t %d\n\t\t\t x %d\n\t\t\t====\n\t\t\t%4d\n",a,b,c);

    return 0;
}