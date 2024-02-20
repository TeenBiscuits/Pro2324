// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <math.h>

int main() {
    int nbaldosalado, nbaldosatotal;
    float t, b;

    // INPUT
    puts("Introduzca los datos solicitados: ");
    printf("\tKilogramos de baldosas que transporta el camión: ");
    scanf("%f",&t);
    printf("\tPeso por baldosa: ");
    scanf("%f",&b);

    // CÁLCULO
    nbaldosatotal = (t/b);
    // TENGO QUE HACER UNA RAÍZ CUADRADA !!!!! NI IDEA DE COMO HACERLO SIN LA LIBRERÍA MATH
    nbaldosalado = sqrt(nbaldosatotal);

    // OUTPUT
    printf("\nEn el lado del mayor cuadrado que se puede hacer hay %d baldosas.\n", nbaldosalado);
    // ESTO LO AÑADO PORQUE ME APETECE
    int baldosassobrantes = nbaldosatotal - nbaldosalado * nbaldosalado;
    float porcentajerestantes;
    porcentajerestantes = (float)baldosassobrantes / (float)nbaldosatotal * 100;
    printf("\tSobran %d baldosas de %d (un %.2f%%).",baldosassobrantes, nbaldosatotal, porcentajerestantes);

    return 0;
}
