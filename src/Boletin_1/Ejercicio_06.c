// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
# define PI 3.14159265359
# define area(x) (4 * PI * x * x)
# define volumen(x) ((4/(float)3) * PI * x * x * x)

int main() {
    // PI = 3.14159265359
    //double volumen, area;
    float radio;

    // ENTRADA
    puts("Introduzca los valores solicitados:");
    printf("\t\tEl radio de su esfera: ");
    scanf("%f", &radio); // Para double usar &lf

    // PROCESO

    // ANTES DE CONOCER EL DEFINE
    //    // No usar 4 / 3, ya que es impreciso. Preferiblemente 4 / 3.0 o 4 / (float)3
    // volumen = (4 / (float) 3) * PI * r * r * r;
    // area = 4 * PI * r * r;

    // SALIDA
    printf("\nEl valor del area %.3f m^2 y el volumen %.3f m^3.\n", area(radio), volumen(radio));
    printf("Redondeando PI a 3.14159265359");

    return 0;
}
