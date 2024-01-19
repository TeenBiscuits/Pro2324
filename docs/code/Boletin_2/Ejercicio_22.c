//
// Created by santi on 16/10/2023.
//
#include <stdio.h>
int main(){
    int suma1;
    int suma2;
    int numero;
    int numerop;
    int numeroi;

    numero=0;
    numerop=0;
    numeroi=-1;

    while(numero<=200) {
        numero++;
        if(numero%2!=0){
            numeroi=numeroi+2;
            suma1+=numeroi;
        }
        else{
            numerop=numerop+2;
            suma2+=numerop;
        }
    }

    printf("%d\n",suma1);
    printf("%d",suma2);

    return 0;
}