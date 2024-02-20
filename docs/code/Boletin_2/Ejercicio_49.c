// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <math.h>

int main()
{
    int menu = 0;
    int intervalo1;
    int intervalo2;
    int numentero;
    int cuadrado;
    float numeroactual;
    float raiz;
    do
    {
        printf("Escriba 1 para visualizar una tabla de los numeros, los cuadrados y las raices cuadradas de los numeros contenidos en un intervalo de numeros enteros indicado por usted\n ");
        printf("Escriba 2 para mostrar por pantalla los divisores de un numero entero que indique usted\n ");
        printf("Escriba 3 para salir del programa\n ");

        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                printf("Digame el intervalo de numeros enteros que desea ");
                scanf("%d %d", &intervalo1, &intervalo2);

                for(; intervalo1 != intervalo2; intervalo1++)
                {
                    numeroactual = intervalo1;
                    raiz = sqrtf(numeroactual);
                    cuadrado = intervalo1 * intervalo1;

                    printf("%d al cuadrado: ", intervalo1);
                    printf("%d", cuadrado);
                    printf(" raiz cuadrada de %d : ", intervalo1);
                    printf("%f\n", raiz);
                }
                break;

            case 2:
                printf("Digame un numero ");
                scanf("%d", &numentero);

                for(int i = 1; i < numentero; i++)
                {
                    if(numentero%i == 0)
                    {
                        printf("%d", i);
                    }
                }
                break;

            case 3: break;

        }
    } while (menu > 3 || menu < 1);
}