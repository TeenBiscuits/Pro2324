//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que a partir de la siguiente
 *       información (correspondiente a un test realizado por los alumnos): cantidad
 *       total de preguntas planteadas y la cantidad de preguntas contestadas
 *       correctamente. Permita insertar los dos datos por teclado y muestre como
 *       resultado el nivel del mismo según el porcentaje de respuestas correctas
 *       obtenidas. Suponga que:
 *          Nivel máximo:               Porcentaje>=90%.
 *          Nivel medio:                Porcentaje>=75% y <90%.
 *          Nivel regular:              Porcentaje>=50% y <75%.
 *          Fuera de nivel:             Porcentaje<50%.
 * in: Total Preguntas, Total Correctas
 * out: Nivel del alumno
 * NOTA1:
 */
#define porcentaje(x, y) ( x / (float) y * 100)

int main() {
    int total, correctas;

    // INPUT
    puts("Conteste a las siguiente preguntas sobre el test realizado:");
    printf("\tCantidad total de preguntas: ");
    scanf("%d", &total);
    printf("\tCantidad de preguntas contestadas correctamente: ");
    scanf("%d", &correctas);

    // OUTPUT
    printf("Tiene usted ");
    if (porcentaje(correctas, total) >= 90) {
        printf("un Nivel Máximo.");
    } else {
        if (porcentaje(correctas, total) >= 75) {
            printf("un Nivel Medio.");
        } else {
            if (porcentaje(correctas, total) >= 50) {
                printf("un Nivel Regular.");
            } else {
                if (porcentaje(correctas, total) < 50) {
                    printf("un Nivel Insuficiente.");
                }
            }
        }
    }
    printf("\n");


    return 0;
}
