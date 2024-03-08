// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

void askNumbers(int *cadena)
{
    int i;
    printf("Dime un numero");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &cadena[i]);
        printf("Dime otro numero ");
    }
    printf("\n");
}

void printNumbers(int *cadena)
{
    int i;
    printf("La cadena es: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", cadena[i]);
    }
}

int main()
{
    int cadena[10];
    askNumbers(cadena);
    printNumbers(cadena);
    return 1;
}