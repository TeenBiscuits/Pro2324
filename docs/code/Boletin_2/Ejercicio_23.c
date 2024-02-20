// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    int numero;

    numero=0;

    while(numero<20 || numero>30){
        printf("Introduzca un numero del 20 al 30 ambos icluidos:");
        scanf("%d",&numero);
    }

    printf("Exito");

    return 0;
}