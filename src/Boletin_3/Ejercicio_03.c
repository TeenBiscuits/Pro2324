// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
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