// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    float dinero_euros;
    float dinero_dolares;

    printf("Introduzca la cantidad de euros que quiere cambiar:\n");
    scanf("%f",&dinero_euros);

    while(dinero_euros<0 || dinero_euros>10000000){
        printf("Cantidad no valida introduzca una cantidad valida(0-10000000):\n");
        scanf("%f",&dinero_euros);
    }

    dinero_dolares= dinero_euros * 1.06;
    printf("%.2f euros son %.2f dolares",dinero_euros,dinero_dolares);

    return 0;
}