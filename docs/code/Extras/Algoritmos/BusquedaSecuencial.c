// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

#define N 20

int main() {
    int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int buscado, indice = 0;

    printf("Introduzca el dato a buscar: ");
    scanf("%d", &buscado);

    while (buscado != A[indice] && indice < N) indice++;
    if (indice <= N - 1)
        printf("'%d' está en la posición: %d\n", buscado, indice + 1);
    else
        printf("'%d' no está en el array\n", buscado);
    return 0;
}