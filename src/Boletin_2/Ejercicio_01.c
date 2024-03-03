// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

int main() {
    int n;

    // Input
    printf("Introduzca un número entero: ");
    scanf("%d",&n);

    // Output
    if (n > 0) {
        printf("El número %d es positivo.",n);
    } else {
        if (n == 0) {
            printf("El número es 0.");
        } else {
            printf("El número %d es negativo.",n);
        }
    }


    return 0;
}
