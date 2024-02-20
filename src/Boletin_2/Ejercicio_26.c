// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    int multiplicando;
    int producto;
    int numero;

    printf("Introduzca un numero entero positivo: ");
    scanf("%d",&numero);

    multiplicando=-1;

    if(numero>=0){
        while(multiplicando<10){
            multiplicando=multiplicando+1;
            producto= numero*multiplicando;
            printf("%d X %d= %d\n",numero,multiplicando,producto);
        }
    }
    else{
        printf("El numero introducido no es positivo");
    }

    return 0;
}