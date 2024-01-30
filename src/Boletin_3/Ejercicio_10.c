//
// Created by Pablo on 03/12/2023.
//
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