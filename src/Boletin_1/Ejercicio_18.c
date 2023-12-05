//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite a un usuario su
 *       nombre, apellidos, sueldo mensual (en euros) y el dinero que gasta diariamente
 *       en ocio, comida y transporte. A continuación, utilizando descriptores de
 *       formato, debe mostrar una tabla como la que se indica donde se recoja el % de
 *       su sueldo que gasta semanalmente en ocio, comida y transporte. Incluya
 *       también el total del gasto semanal realizado.
 * in: NOMBRE, APELLIDOS, SUELDO MENSUAL (€); DINERO QUE GASTA EN: OCIO, COMIDA, TRANSPORTE.
 * out: TABLA CON FORMATO COMO EL INDICADO:
 *
 *      ************************************************************************
 *      *******                 Sonia Rodríguez: 1000€                   *******
 *              %Ocio           %Comida             %Transporte           %Otros
 *              7.5%            5%                  10.34 %               2.16%
 *      *******                                                          *******
 *                                                                  Gasto semanal
 *                                                                           250€
 *
 * NOTA1:
 */

#define MAX 20 // DEFINO MÁXIMO PARA LOS STRINGS DE CARACTERES
#define porcentaje(x, y) ((x / y) * 100) // FÓRMULA PARA CALCULAR PORCENTAJES

int main() {
    char nombre[MAX], apellido1[MAX], apellido2[MAX];
    float sueldomes, gocio, gcomida, gtransporte, gotros, totalsemana;

    // INPUT
    puts("Introduzca los siguientes datos para elaborar una tabla de gastos: ");
    printf("\tNombre y Apellidos: ");
    scanf("%s %s %s", nombre, apellido1, apellido2);
    // PIDO EL SEGUNDO APELLIDO PARA LUEGO NO IMPRIMIRLO PERO ES LO QUE HAY
    printf("\tCual es su sueldo mensual (en euros): ");
    scanf("%f", &sueldomes);
    printf("\tGastos de esta semana (Introduzca en este orden: Ocio, Comida, Transporte, Otros): ");
    scanf("%f %f %f %f", &gocio, &gcomida, &gtransporte, &gotros);

    // CÁLCULO
    totalsemana = gocio + gcomida + gtransporte + gotros;
    // Los porcentajes los calculo directamente en la tabla.

    // OUTPUT
    printf("\n***********************************************************************\n");
    printf("*******\t\t\t\t\t%s %s: %.2f €\t\t\t\t\t*******\n", nombre, apellido1, sueldomes);
    printf("\t\t\t%%Ocio\t\t\t%%Comida\t\t\t%%Transporte\t\t\t %%Otros\n");
    printf("\t\t\t%.2f%%\t\t\t%.2f%%\t\t\t%.2f%%\t\t\t\t  %.2f%%\n", porcentaje(gocio, sueldomes),
           porcentaje(gcomida, sueldomes), porcentaje(gtransporte, sueldomes), porcentaje(gotros, sueldomes));
    printf("*******\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Gasto semanal\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%.2f€", totalsemana);


    return 0;
}
