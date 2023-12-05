//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite el nombre, edad,
 *       número de hijos y sueldo anual de una persona (en euros) y muestre por
 *       pantalla la misma información indicando su sueldo mensual en vez del sueldo
 *       anual.
 * in: NOMBRE, EDAD, NÚMERO DE HIJOS, SUELDO ANUAL
 * out: NOMBRE, EDAD, Nº HIJOS, SUELDO MENSUAL
 * NOTA1:
 */

int main() {
    int edad, nhijos;
    char nombre[20];
    float sueldoa, sueldom;

    // INPUT
    puts("Introduzca los datos que a continuación se le solicitan: ");
    printf("\tSu nombre y edad (Nombre Edad): ");
    scanf("%s %d", nombre, &edad);
    printf("\tNúmero de hijos/as: ");
    scanf("%d", &nhijos);
    printf("\tSueldo anual (En Euros): ");
    scanf("%f", &sueldoa);

    // OPERACIÓN
    sueldom = (sueldoa / 14);

    // OUTPUT
    printf("\nSu nombre es %s, tiene %d años y %d hijos/as.\nSu sueldo anual es de %.2f €, lo cual, equivale a %.2f € al mes en 14 pagas.",
           nombre, edad, nhijos, sueldoa, sueldom);

    return 0;
}
