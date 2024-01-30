//
// Created by Pablo on 30/11/2023.
//
#include <stdio.h>

int mayorDiv(int n);

int main() {
    int n, maxDiv;
    printf("Introduzca un número entero: ");
    scanf("%d",&n);
    maxDiv = mayorDiv(n);
    printf("%d",maxDiv);
    return 0;
}

int mayorDiv(int n){
    int maxDiv;
    for (int i = 1; i != n; i++){
        if(n % i == 0) maxDiv = i;
        else;
    }
    return maxDiv;
}