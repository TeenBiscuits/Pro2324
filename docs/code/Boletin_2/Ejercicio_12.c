// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    bool nocontinuar = true;

    // BUCLE DE INPUT
    do {
        puts("Introduzca tres números enteros positivos y se le mostrará la división entera del mayor entre el menor.");
        printf("\tTres números (a,b,c): ");
        int n; // Cuenta el número de entradas correctas
        n = scanf("%d %d %d", &a, &b, &c);
        while((getchar()) != '\n'); // LIMPIO EL BUFFER PARA EVITAR COSAS RARAS
        if (n == 3) {
            if (a > 0 && b > 0 && c > 0) {
                nocontinuar = false;
            } else {
                printf("¡Introduzca tres números positivos!\n");
            }
        } else {
            printf("¡Introduzca tres números enteros!\n");
        }
    } while (nocontinuar);

    // ALGORITMO DE ORDENACIÓN DE NÚMEROS
    // es de otro ejercicio, no lo voy a modificar cumple su función.
    int menor, medio, mayor;

    if (a < b) {
        menor = a;
        mayor = b;
    } else {
        menor = b;
        mayor = a;
    }
    if (c < menor) {
        medio = menor;
        menor = c;
    } else {
        if (c < mayor) {
            medio = c;
        } else {
            medio = mayor;
            mayor = c;
        }
    }

    // DIVISIÓN
    // Podría usar más variables, o más líneas de código, pero prefiero dejarlo simple
    int cociente = mayor/menor, resto = mayor%menor;

    // OUTPUT
    printf("\n\t\t\t%d dividido\t|entre %d\n\t\t\t\t\t\t------------\n\t\t\tC: %d\t\tR: %d\n",mayor,menor,cociente,resto);


    return 0;
}