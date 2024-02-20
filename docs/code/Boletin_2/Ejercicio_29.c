// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <math.h>
int main(){
    float valor;
    float media;
    float suma;
    float n;

    n=0;
    printf("Introduzca los numero de los que quiere calcular la media separados por espacios:\n");

    do{
        scanf("%f",&valor);
        n=n+1;
        suma += valor;
    }while(valor!='\n');

    media= suma/n;
    printf("%.2f\n",suma);
    printf("%.2f\n",n);
    printf("%.2f\n",media);

    return 0;

}