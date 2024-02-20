// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
// i = fila
// j = columna
void crearMatriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i;
    int j;
    for(j = 0; j < tamanho; j++)
    {
        for(i = 0; i < tamanho; i++)
        {
            printf("Posicion %d, %d \n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i;
    int j;
    for(j = 0; j < tamanho; j++)
    {
        for(i = 0; i < tamanho; i++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirTraspuesta(int tamanho, int matriz[tamanho][tamanho])
{
    int i;
    int j;
    for(j = 0; j < tamanho; j++)
    {
        for(i = 0; i < tamanho; i++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int tamanho;
    int traspuesta;

    printf("De que tamanho quieres la matriz");
    scanf("%d", &tamanho);


    printf("Quieres la traspuesta? 1 = si, 0 = no");
    scanf("%d", &traspuesta);

    int matriz[tamanho][tamanho];

    crearMatriz(tamanho, matriz);

    if(traspuesta)
    {
        imprimirTraspuesta(tamanho, matriz);
    }
    else
    {
        imprimirMatriz(tamanho, matriz);
    }
}