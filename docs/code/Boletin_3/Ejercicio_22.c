//
// Created by santi on 28/11/2023.
//
#include <stdio.h>
int primo(int numero){
    int i;
    for(i=2;i<numero;i++){
        if(numero%i==0){
            printf("El numero %d no es primo",numero);
            return 0;
        }
    }
    printf("El numero %d es primo",numero);
}
int main(){
    int numero;
    printf("Introduzca el numero que desea evaluar:\n");
    scanf("%d",&numero);
    primo(numero);
}