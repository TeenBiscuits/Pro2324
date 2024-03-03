// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>

// Constantes
#define PETICION "Introduzca un més (1-12): "
#define MENSAJE "El més siguiente es: %d"

// Definiciones
typedef int tMes;

// Definición funciones
tMes introducirMes();

tMes MesSiguiente(tMes mes);

// Main
int main() {
    tMes mes;

    mes = introducirMes();
    mes = MesSiguiente(mes);
    printf(MENSAJE, mes + 1); // Correción del módulo 11

    return 0;
}

// Declaración Funciones
tMes introducirMes() {
    tMes aux;
    do {
        printf(PETICION);
        scanf("%d", &aux);
    } while (aux < 0 || aux > 12);
    aux -= 1; // El mes 1 pasa a ser el mes 0, y el més 12 el 11
    return aux;
}

tMes MesSiguiente(tMes mes) {
    tMes aux;
    aux = (mes + 1) % 12; // Módulo 12, para que el més siguiente al 12 sea el 1
    return aux;
}