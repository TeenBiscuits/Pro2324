// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#define superficie3(x, y) ((x*y)/2) // Defino la fórmula del area del triángulo

int main() {
    float base, altura;

    // INPUT

    puts("En la siguiente linea indique los datos solicitados de su triángulo (en metros): ");
    printf("\t\tBase: ");
    scanf("%f", &base);
    printf("\t\tAltura: ");
    scanf("%f", &altura);

    // OUTPUT
    printf("\nLa superficie del triángulo de base %.2f m y altura %.2f m es %.2f m.", base, altura,
           superficie3(base, altura));

    return 0;
}
