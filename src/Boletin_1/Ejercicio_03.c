//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite por teclado la
 *       base y altura de un triángulo rectángulo y muestre por pantalla su superficie.
 *       Presente la salida con el siguiente formato.
 * in: BASE Y ALTURA
 * out: La superficie del triángulo de base XX.XX y altura YY.YY es ZZ.ZZ
 * NOTA1:
 */
#define superficie3(x, y) ((x*y)/2) // Defino la fórmula del area del triángulo

int main() {
    float base, altura;

    // INPUT

    puts("En la siguiente linea indique los datos solicitados de su triángulo (en metros): ");
    printf("\t\tBase: ");
    scanf("%f", &base);
    printf("\t\tAltura: ");
    scanf("%f", &altura);

    // OUTPUT
    printf("\nLa superficie del triángulo de base %.2f m y altura %.2f m es %.2f m.", base, altura,
           superficie3(base, altura));

    return 0;
}
