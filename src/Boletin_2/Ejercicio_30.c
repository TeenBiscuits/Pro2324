// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    int numero;
    int suma_pares;
    int suma_impares;

    while(numero!=0){
        printf("Introduzca un numero entero:\n");
        scanf("%d",&numero);
        if (numero%2==0){
            suma_pares+=numero;
        }
        else if(numero%2!=0){
            suma_impares+=numero;
        }
        else{
            printf("Introduzca un valor valido");
            break;
        }
    }

    printf("Suma de los pares:%d\n",suma_pares);
    printf("Suma de los impares:%d\n",suma_impares);

    return 0;
}