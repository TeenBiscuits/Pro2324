//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en LENGUAJE C para calcular la suma de
 *       dos matrices 2x2. Pida los datos oportunos y calcule el resultado deseado,
 *       mostrándolo después en pantalla.
 * in: COMPOSICIÓN DE LAS MATRICES 1 y 2 (4 num * 2 matrices)
 * out: RESULTADO DE LA SUMA DE AMBAS
 * NOTA1:
 */

int main() {
    // PARA LAS VARIABLES USO EL SIGUIENTE ESQUEMA DE NOMBRES
    /*
     *  ( a1 b1 )   ( a2 b2 )   ( a3 b3 )
     *  (       ) + (       ) = (       )
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
    a3 = a1 + a2;
    b3 = b1 + b2;
    c3 = c1 + c2;
    d3 = d1 + d2;

    // OUTPUT
    printf("\nEl resultado de la suma de las dos matrices es el siguiente: \n\n");
    printf("(\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)\n", a1, b1, a2, b2, a3, b3);
    printf("(\t\t\t\t\t) + (\t\t\t\t\t) = (\t\t\t\t\t)\n");
    printf("(\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)   (\t%03.2f\t%03.2f\t)\n", c1, d1, c2, d2, c3, d3);

    return 0;
}
