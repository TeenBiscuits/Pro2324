//
// Created by santi on 16/10/2023.
//
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