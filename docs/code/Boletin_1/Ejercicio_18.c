// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

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
