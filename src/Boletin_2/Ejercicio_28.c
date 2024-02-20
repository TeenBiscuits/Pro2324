// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>

int main() {
    int a, b;

    printf("A continuación introduzca los números enteros de los que desee calcular la suma\nseparados por espacios:\n");

    do{
        scanf(" %d",&b);
        a += b;
    } while (b != 0);

    printf("La suma de los números introducidos es %d",a);

    return 0;
}