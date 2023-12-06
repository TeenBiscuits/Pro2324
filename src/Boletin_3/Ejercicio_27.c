//
// Created by santi on 29/11/2023.
//
#include <stdio.h>
void invertirNumero(int numero[50],int n){
    int i;
    for(i=n;i>=0;i--){
        printf("%d",numero[i]);
    }
}
int main(){
    int numero[50]={};
    int n;
    printf("Introduca un numero:\n");
    scanf("%d",numero);
    printf("Introduzca el numero de cifras del numero:\n");
    scanf("%d",n);
    invertirNumero(numero,n);
}