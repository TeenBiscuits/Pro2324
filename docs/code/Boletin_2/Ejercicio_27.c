// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    int numero_w;
    int numero_dw;
    int numero_f;
    int suma_while = 0;
    int suma_do_while = 0;
    int suma_for;

    numero_w=0;
    numero_dw=0;

    while(numero_w<100){
        numero_w=numero_w+1;
        suma_while += numero_w;
    }
    do {
        numero_dw=numero_dw+1;
        suma_do_while += numero_dw;
    } while(numero_dw<100);
    for(numero_f=0; numero_f<=100;numero_f++){
        suma_for += numero_f;
    }

    printf("%d\n",suma_while);
    printf("%d\n",suma_while);
    printf("%d",suma_for);

    return 0;
}