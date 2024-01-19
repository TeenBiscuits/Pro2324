//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Un camión transporta T kilogramos de baldosas; se sabe que cada baldosa pesa
 *       B kilogramos. Las baldosas se van a utilizar para recubrir una superficie
 *       rectangular. Plantee e implemente un programa en Lenguaje C que indique el
 *       número de baldosas que habría en un lado del mayor cuadrado que se pueda
 *       recubrir con ésas baldosas, sin romperlas.
 * in: Kilogramos de Baldosas en Total y Kilogramos por Baldosa
 * out: Número de baldosas que hay en un lado del cuadrado de mayor tamaño.
 * NOTA1:
 */
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
