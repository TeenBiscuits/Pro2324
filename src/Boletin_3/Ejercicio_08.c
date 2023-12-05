//
// Created by Pablo on 02/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente una función en Lenguaje C que reciba un valor que
 *       representa un mes y devuelva el siguiente mes, utilizando para ello la siguiente
 *       interface:
 *                                  MesSiguiente(mes:integer): integer;
 *       NOTA: Téngase en cuenta que el mes siguiente a 12 es 1.
 * in: Número del 1-12
 * out: El més siguiente
 * NOTA1:
 */

// Librerías
#include <stdio.h>

// Constantes
#define PETICION "Introduzca un més (1-12): "
#define MENSAJE "El més siguiente es: %d"

// Definición funciones
int introducirMes();

int MesSiguiente(int mes);

// Main
int main() {
    int mes;

    mes = introducirMes();
    mes = MesSiguiente(mes);
    printf(MENSAJE, mes + 1); // Correción del módulo 11

    return 0;
}

// Declaración Funciones
int introducirMes() {
    int aux;
    do {
        printf(PETICION);
        scanf("%d", &aux);
    } while (aux < 0 || aux > 12);
    aux -= 1; // El mes 1 pasa a ser el mes 0, y el més 12 el 11
    return aux;
}

int MesSiguiente(int mes) {
    int aux;
    aux = (mes + 1) % 12; // Módulo 12, para que el més siguiente al 12 sea el 1
    return aux;
}