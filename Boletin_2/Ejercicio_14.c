//
// Created by pablo on 25/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite por teclado dos
 *       números enteros positivos (el primero de 3 cifras y el segundo de 1) y que
 *       muestre por pantalla su multiplicación en el formato que se indica en el ejemplo
 *       de ejecución. Debe comprobar que el primer número tiene efectivamente 3
 *       cifras y es positivo, y que el segundo número es también positivo y tiene una
 *       única cifra. En caso de que no se cumplan estas condiciones, el programa debe
 *       alertar al usuario con un mensaje apropiado (Ej. “El primer número no tiene 3
 *       cifras!!!”).
 *                               785
 *                               x 7
 *                              ====
 *                              5495
 * in: Dos números enteros, el primero de 3 cifras y el segundo de 1
 * out: Multiplicación en formato especificado
 * NOTA1:
 */
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