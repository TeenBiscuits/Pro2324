// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>

// Constantes
#define PETICION "Introduzca un número entero: "

// Definición funciones
char esPosioNega(int entero);

// Main
int main() {
    int entero;

    printf(PETICION);
    scanf("%d",&entero);
    printf("%c",esPosioNega(entero));

    return 0;
}

// Declaración Funciones
char esPosioNega(int entero){
    char aux;
    if (entero >= 0) aux = 'P';
    else aux = 'N';
    return aux;
}