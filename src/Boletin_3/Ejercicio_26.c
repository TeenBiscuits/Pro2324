// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
int suma(int n){
    int i,suma=0;
    for(i=0;i<=n;i++){
        suma+=i;
    }
    return suma;
}
int main(){
    int n;
    printf("Introduzca el numero que desee:\n");
    scanf("%d",&n);
    printf("La suma de enteros posistivos hasta %d es:\n%d",n, suma(n));
}