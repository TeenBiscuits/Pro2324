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

    printf("Introduzca un valor N mayor que 0:\n");
    scanf("%d",&n);

    if(n<=0){
        printf("Introduzca un valor valido.");
    }
    else{
        resultado= fibonacci(n);
        printf("El numero %d de la sucesion de Fibonacci es %d",n,resultado);
    }

    return 0;

}