//
// Created by Pablo on 01/12/2023.
//
// Librerías
#include <stdio.h>

// Constantes
#define MENSAJE "Introduzca un número entero para mostrar un tríangulo de Floyd: "
#define FORMAT "%5d"

// Definición funciones
void imprimirTFloyd(int n);

// Main
int main() {
    int n;

    printf(MENSAJE);
    scanf("%d",&n);
    imprimirTFloyd(n);

    return 0;
}

// Declaración Funciones
void imprimirTFloyd(int n){
    for (int i = n, g = 1;i >= 0; i--){
        for(int f = 1;f != n-i+1; f++, g++) printf(FORMAT"\t",g);
        printf("\n");
    }
}