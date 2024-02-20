// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

int main ()
{
    int decimal;
    int i = 0;
    printf("Dime el numero que quieres pasar a binario ");
    scanf("%d", &decimal);

    int dividendo = decimal;

    int array_dividendos[64] = {};

    while(dividendo != 0)
    {
        array_dividendos[i] =  dividendo;
        dividendo = dividendo / 2;
        i++;
    }

    for(i = 64; i >= 0 ; i--)
    {
        printf("%d", array_dividendos[i]%2);
    }
}