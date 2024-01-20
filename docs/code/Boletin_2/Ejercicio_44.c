//
// Created by santi on 29/10/2023.
//
#include <stdio.h>
int main(){
    int n1;
    int n2;
    int i;
    int divisor;
    int suma;
    int resto;

    printf("Introduzca un numero entero positivo:\n");
    scanf("%d",&n1);

    printf("Introduzca un numero entero positivo mayor:\n");
    scanf("%d",&n2);

    for(i=n1;i<=n2;i++){
        suma=0;
        for(divisor=1;divisor< i;divisor++) {
            resto = i % divisor;
            if (resto == 0) {
                suma += divisor;
            }
        }
        if(suma<i){
            printf("El numero %d es deficiente\n",i);
        }
        else if(suma==i){
            printf("El numero %d es perfecto\n",i);
        }
        else{
            printf("El numero %d es abundante\n",i);
        }

    }

    return 0;

}