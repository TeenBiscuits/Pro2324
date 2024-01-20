//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C como en el ejercicio anterior,
 *       calculando esta vez el producto de las matrices leídas.
 * in: COMPOSICIÓN DE LAS MATRICES 1 y 2 (4 num * 2 matrices)
 * out: RESULTADO DE LA MULTIPLICACIÓN DE AMBAS
 * NOTA1:
 */

int main() {
    // PARA LAS VARIABLES USO EL SIGUIENTE ESQUEMA DE NOMBRES
    /*
     *  ( a1 b1 )   ( a2 b2 )   ( a3 b3 )
     *  (       ) * (       ) = (       )
     *  ( c1 d1 )   ( c2 d2 )   ( c3 d3 )
     */
    float a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;

    // INPUT
    puts("A continuación introduzca los valores de cada matriz en el orden especificado: ");
    printf("\tPrimera matriz (a b / c d): ");
    scanf("%f %f %f %f", &a1, &b1, &c1, &d1);
    printf("\tSegunda matriz (a b / c d): ");
    scanf("%f %f %f %f", &a2, &b2, &c2, &d2);

    // CÁLCULO
    // La multiplicación de matrices parece difícil de automatizar o hacer más eficiente
    a3 = (a1 * a2) + (b1 * c2);
    b3 = (a1 * b2) + (b1 * d2);
    c3 = (c1 * a2) + (d1 * c2);
    d3 = (c1 * b2) + (d1 * d2);

    // OUTPUT
    printf("\nEl resultado de la multiplicación de las dos matrices es el siguiente: \n\n");
    printf("(\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)\n", a1, b1, a2, b2, a3, b3);
    printf("(\t\t\t\t\t) * (\t\t\t\t\t) = (\t\t\t\t\t)\n");
    printf("(\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)\n", c1, d1, c2, d2, c3, d3);

    return 0;
}