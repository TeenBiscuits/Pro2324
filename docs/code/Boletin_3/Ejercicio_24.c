//
// Created by santi on 28/11/2023.
//
#include <stdio.h>
int factorial(int numero){
    int factorial,i;
    factorial=1;
    if(numero>=0){
        for(i=1;i<=numero;i++){
            factorial=factorial*i;
        }

    }
    return factorial;
}
int main(){
    int numero;
    printf("Introduzca el numero del que quiere calcular el factorial:\n");
    scanf("%d",&numero);
    printf("%d",factorial(numero));
    return 0;
}