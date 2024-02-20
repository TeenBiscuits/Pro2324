// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#define superficie2(x, y) (x*y) // DECLARO LA FÓRMULA DE LA SUPERFICIE DE UN RECTÁNGULO

int main() {
    float base, altura;

    //INPUT
    puts("Introduzca, en la siguiente linea, los datos solicitados sobre su rectángulo:");
    printf("\t\tBase: ");
    scanf("%f", &base);
    printf("\t\tAltura: ");
    scanf("%f", &altura);

    //OUTPUT
    printf("\nSiendo la base del rectángulo %.2f m y su altura %.2f m, el area del rectángulo es %.2f m.", base, altura,
           superficie2(base, altura));

    return 0;
}

