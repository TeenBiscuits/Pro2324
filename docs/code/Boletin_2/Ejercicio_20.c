// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main() {

    char nombre[50];
    int peso;
    int altura;
    float alturametros;
    float IMC;
    printf("Introduce tu nombre: ");
    scanf("%s", &nombre);
    printf("\nIntroduce tu peso en kg: ");
    scanf("%d", &peso);
    printf("\nIntroduce tu altura en cm: ");
    scanf("%d", &altura);

    alturametros = altura%2;
    printf("\n%d", alturametros);
    IMC = peso / (alturametros * alturametros);
    printf("\n%d", IMC);
/*
    if (IMC < 18.5)
    {
        printf("%s, segun el indice de masa corporal (IMC= %.2f), está usted por debajo de su peso de salud", nombre, IMC);

    } else if (IMC >= 18.5 && IMC < 25)
    {
        printf("%s, segun el indice de masa corporal (IMC= %.2f), su peso es normal para su estatura", nombre, IMC);
    } else if (IMC >= 25 && IMC < 27)
    {
        printf("%s, segun el indice de masa corporal (IMC= %.2f), tiene usted sobrepeso de grado 1", nombre, IMC);
    }
    else if (IMC >= 27 && IMC < 30)
    {
        printf("%s, segun el indice de masa corporal (IMC= %.2f), tiene usted sobrepeso de grado 2", nombre, IMC);
    }
    else
    {
        printf("%s, segun  el indice de masa corporal (IMC= %.2f), tiene usted obesidad", nombre,IMC);
    }
    */
}