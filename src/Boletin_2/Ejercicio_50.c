//
// Created by Pablo on 06/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente en Lenguaje C el juego MasterMind, empleando
 *       sentencias do...while
 * in: 4 Colores
 * out: Si están correctos o no
 */

// Librerías
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

// Declaración de Funciones
char colorAleatorio(int ncolor);

// Main
int main() {
    // Descripción del juego
    /*
     * Al principio y en secreto se dispondrán 4 colores.
     * Existen en total 5 colores posibles:
     *  N - Negro       A - Amarillo    R - Rojo
     *  B - Blanco      V - Verde
     * Es decir existen 5^4 combinaciones posibles
     * El usuario debe adivinar los 4 colores solo conociendo si ha colocado bien o no alguno.
     */

    char a, b, c, d; // Las respuestas
    char ap1, ap2, ap3, ap4; // Las apuestas
    int intento; // Número de intentos
    bool ganaste = false; // No ganaste todavía

    // Se generan los cuatro colores secretos
    srand(time(NULL));
    // rand()%4 Número aleatorio de 0 - 4
    a = colorAleatorio((rand() % 4));
    b = colorAleatorio((rand() % 4));
    c = colorAleatorio((rand() % 4));
    d = colorAleatorio((rand() % 4));

    // Se le da la bienvenida al usuario
    printf("Buenas, se han dispuesto 4 colores en secreto.\n"
           "\t\t\t[ X ][ X ][ X ][ X ]\n"
           "Tu objetivo es adivinarlos, te iré diciendo según aciertes en tus diferentes intentos.\n"
           "Existen 5 colores: \n"
           "N - Negro\tA - Amarillo\tR - Rojo\n"
           "B - Blanco\tV - Verde\n");

    // Bucle del juego
    intento = 1;
    do {
        printf("%dº Intento. Que colores crées que hay: ", intento);
        scanf("%c %c %c %c", &ap1, &ap2, &ap3, &ap4);
        while ((getchar()) != '\n'); // Limpio el buffer si no da errores

        printf("[ %c ][ %c ][ %c ][ %c ]\n", ap1, ap2, ap3, ap4);

        if (ap1 == a)printf("[ %c ]", a);
        else printf("[ X ]");
        if (ap2 == b)printf("[ %c ]", b);
        else printf("[ X ]");
        if (ap3 == c)printf("[ %c ]", c);
        else printf("[ X ]");
        if (ap4 == d)printf("[ %c ]", d);
        else printf("[ X ]");
        printf("\n");

        if (ap1 == a && ap2 == b && ap3 == c && ap4 == d) {
            ganaste = true;
            printf("¡Enhorabuena has acertado en tan solo %d intentos!", intento);
        } else intento += 1;

    } while (ganaste == false);

    return 0;
}

// Definición de funciones
char colorAleatorio(int ncolor) {
    switch (ncolor) {
        case 0:
            return 'N';
        case 1:
            return 'B';
        case 2:
            return 'A';
        case 3:
            return 'V';
        case 4:
            return 'R';
        default:
            break;
    }
}