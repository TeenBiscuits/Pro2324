// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#define PI 3.14159265359 // APROXIMACIÓN DE PI
#define perimetro(x) (2 * PI * x) // PERIMETRO DEL CÍRCULO
#define area(x) (PI * x * x) // AREA DEL CÍRCULO

int main() {
    float r1, r2, r3;

    // INPUT
    printf("Introduzca los radios de los tres círculos (r1 r2 r3): ");
    scanf("%f %f %f", &r1, &r2, &r3);

    // OUTPUT
    printf("\nRADIO\t\t\tPERIMETRO\t\t\tAREA\n");
    printf("=====\t\t\t=========\t\t\t=====\n");
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r1, perimetro(r1), area(r1));
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r2, perimetro(r2), area(r2));
    printf("%.2f\t\t\t%.2f\t\t\t\t%.2f\n", r3, perimetro(r3), area(r3));

    return 0;
}
