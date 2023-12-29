//
// Created by Pablo on 29/12/2023.
//
#include <stdio.h>
#define N 15 /* Tamaño */

int main() {
    int A[N] = {1,3,2,4,5,6,7,6,4,3,9,9,8,7,10 };
    for(int i = 0; i < N; i++) printf(" %d ",A[i]);
    int i, j, aux=0;
    for (i = 1; i < N; i++) {
        for (j = 0; j < N-1; j++) {
            if (A[j] > A[j+1]) {
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < N; i++) printf(" %d ",A[i]);
}