// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#define N 20

int main() {
    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int izq, der, mit, buscado;

    printf("Introduzca el dato a buscar: ");
    scanf("%d", &buscado);

    izq = 0;
    der = N - 1;
    mit = (izq + der) / 2;
    while (izq <= der && buscado != A[mit]) {
        if (A[mit] < buscado) izq = mit + 1;
        else der = mit - 1;
        mit = (izq + der) / 2;
    }

    if (izq <= der)
        printf("'%d' está en la posición: %d\n", buscado, mit + 1);
    else
        printf("'%d' no está en el array\n", buscado);
    return 0;
}