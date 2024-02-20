// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <math.h>
float nPotencia(float n,float numero){
    return pow(numero,n);
}
int main(){
    float n;
    float numero;
    printf("Introduzca el numero que desee elevar:\n ");
    scanf("%f",&numero);
    printf("Introduzca a que potencia entera desea elevarlo:\n");
    scanf("%f",&n);
    printf("El resultado es %.3f", nPotencia(n,numero));
}