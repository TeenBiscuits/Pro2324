// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(){
    int n;
    int resultado;
    int n2;

    printf("Introduzca un numero entero mayor que 0:\n");
    scanf("%d",&n2);

    if(n2<=0){
        printf("Introduzca un valor valido");
    }
    else{
        for(n=0;n<=n2;n++){
            resultado+= fibonacci(n);
        }
        printf("El resultado de la suma de los %d primeros numeros de la sucesion de Fibonacci es %d",n2,resultado);
    }

    return 0;
}