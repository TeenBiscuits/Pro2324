//
// Created by santi on 20/10/2023.
//
#include <stdio.h>
int main(){
    int i;
    int numero;
    int factorial;

    factorial=1;
    printf("Introduzca el numero del que quiere calcular el factorial:\n");
    scanf("%d",&numero);

    if(numero>=0){
        for(i=1;i<=numero;i++){
            factorial=factorial*i;
        }

    }

    printf("%d",factorial);

    return 0;
}



