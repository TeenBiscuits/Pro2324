//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite al usuario su
 *       nombre, edad y lo que se ha gastado en cañas y en transporte durante una
 *       semana (en euros) y muestre por pantalla esos mismos datos y la suma de los
 *       gastos.
 * in: NOMBRE, EDAD, GASTADO EN CAÑAS, GASTADO EN TRANSPORTE
 * out: NOMBRE, EDAD, GASTO EN CAÑAS, GASTO EN TRANSPORTE, TOTAL DE GASTOS
 * NOTA1:
 */

int main() {
    int edad;
    char nombre[20];
    float gcanas, gtransp, gtotal;

    // INPUT

    puts("Indique a continuación los datos solicitados: ");
    printf("Nombre y Edad (Nombre Edad): ");
    scanf("%s %d", nombre, &edad);
    printf("Gasto en Cañas y Gasto en Transporte (G.Cañas G.Transp.): ");
    scanf("%f %f", &gcanas, &gtransp);

    // CÁLCULO RIDÍCULO
    gtotal = gcanas + gtransp,

    // OUTPUT
    printf("\nSu nombre es %s, tiene %d años.\nEl informe de gastos de esta semana es el siguiente:\n\tGasto en Cañas:\t\t\t%.2f €\n\tGasto en Transporte:\t%.2f €\n\t-------------------------------\n\tTotal:\t\t\t\t\t%.2f €",
           nombre, edad, gcanas, gtransp, gtotal);


    return 0;
}
