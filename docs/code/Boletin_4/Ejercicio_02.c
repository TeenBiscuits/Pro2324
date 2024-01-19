//
// Created by Pablo on 07/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en lenguaje C, que utilizando
 *       exclusivamente subprogramas, solicite nombres de animales por teclado y vaya
 *       rellenando un array de 7 elementos, mostrándolos posteriormente por pantalla
 *       apropiadamente.
 * in: Nombres de animales.
 * out: Nombres de animales
 */

// Librerías
#include <stdio.h>

// Constantes
#define MAX 40
#define NANIMAL 7

// Definiciones
typedef char nombreanimal[40];

typedef struct{
    nombreanimal nombre;
}tRegAnimales[NANIMAL];

// Definición funciones
void introducirNombres(tRegAnimales listaAnimales);
void imprimirNombres(tRegAnimales listaNombres);

// Main
int main() {
    tRegAnimales listaAnimales;

    introducirNombres(listaAnimales);
    imprimirNombres(listaAnimales);

    return 0;
}

// Declaración Funciones
void introducirNombres(tRegAnimales listaAnimales){
    printf("Introduzca los 7 nombres de animales separados por comas: ");
    for(int i = 0; i < NANIMAL; i++) scanf("%s, ",listaAnimales[i].nombre);
}

void imprimirNombres(tRegAnimales listaNombres){
    printf("Los 7 nombres són:");
    for(int i = 0; i < NANIMAL; i++) printf(" %s",listaNombres[i].nombre);
    printf(".");
}