// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particion(int arr[], int bajo, int alto) {
    int pivote = arr[alto];
    int i = (bajo - 1);

    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] < pivote) {
            i++;
            intercambiar(&arr[i], &arr[j]);
        }
    }

    intercambiar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);

        quickSort(arr, bajo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

void imprimirArray(int arr[], int tamano) {
    for (int i = 0; i < tamano; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    imprimirArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array ordenado:\n");
    imprimirArray(arr, n);

    return 0;
}
