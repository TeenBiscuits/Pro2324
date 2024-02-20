// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>

int main() {
    int n;

    // INPUT
    printf("Introduzca un número entero: ");
    scanf("%d",&n);

    // OUTPUT
    if (n == 0) {
        printf("El número es 0.");
    } else {
        if (n % 2 == 0) {
            printf("El número %d es par.",n);
        } else {
            printf("El número %d es impar.",n);
        }
    }

    return 0;
}
