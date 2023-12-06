//
// Created by santi on 29/10/2023.
//
#include <stdio.h>
int main(){
    int limite;
    int n;
    int valor;

    n=0;
    valor=0;

    printf("Introduzca el limite:\n");
    scanf("%d",&limite);

    while(valor<=limite){
        n++;
        valor+=n;
    }

    printf("El numero de terminos necesarios en la serie para satisfacer la desigualdad son: %d",n);

    return 0;
}