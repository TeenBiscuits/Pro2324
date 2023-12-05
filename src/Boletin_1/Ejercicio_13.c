//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que muestre por pantalla una
 *       tabla indicando el radio, el perímetro y el área de tres círculos cuyo radio es
 *       solicitado por teclado. La salida en pantalla debe tener el siguiente formato:
 *       RADIO              PERIMETRO           AREA
 *       RADIO
 *       =====              =========           =====
 *       2                  12.56               12.56
 *       3                  18.86               28.27
 *       4                  25.13               50.26
 *
 * in: TRES RADIOS
 * out: EL PERIMETRO Y AREA DE CADA UNO DE ELLOS
 * NOTA1:
 */
#define PI 3.14159265359 // APROXIMACIÓN DE PI
#define perimetro(x) (2 * PI * x) // PERIMETRO DEL CÍRCULO
#define area(x) (PI * x * x) // AREA DEL CÍRCULO

int main() {
    float r1, r2, r3;

    // INPUT
    printf("Introduzca los radios de los tres círculos (r1 r2 r3): ");
    scanf("%f %f %f", &r1, &r2, &r3);

    // OUTPUT
    printf("\nRADIO\t\t\tPERIMETRO\t\t\tAREA\n");
    printf("=====\t\t\t=========\t\t\t=====\n");
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r1, perimetro(r1), area(r1));
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r2, perimetro(r2), area(r2));
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r3, perimetro(r3), area(r3));

    return 0;
}
