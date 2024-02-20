// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    char nombre[50];
    char apellido1[50];
    char apellido2[50];
    int edad;

    printf("Nombre: ");
    scanf("%s %s %s",&nombre,&apellido1,&apellido2);

    printf("Introduzca su edad: ");
    scanf("%d",&edad);

    if (edad<32){
        printf("%s %s %s es joven",nombre,apellido1,apellido2);
    }
    else if(edad>=32 && edad<75){
        printf("%s %s %s es Adulto/a",nombre,apellido1,apellido2);
    }
    else if(edad>=75){
        printf("%s %s %s es Anciano/a",nombre,apellido1,apellido2);
    }

    return 0;
}