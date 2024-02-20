// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <math.h>

void escanearDatos(int *numeros,int tamano)
{
    int i;
    for(i = 0 ;i < tamano; i++)
    {
        printf("Introduzca un valor:\n");
        scanf("%d",&numeros[i]);
    }
}
void imprimirDatos (int *numeros, int tamano){
    int i;
    for(i = 0 ;i < tamano; i++)
    {
        printf("%d, ",numeros[i]);
    }
}
void modificarArray(int *numeros,int tamano){
    int i;
    for(i = 0; i < tamano; i++)
    {
        if(numeros[i]%2==0)
        {
            numeros[i]=pow(numeros[i],2);
        }
        else if(numeros[i] % 2 != 0)
        {
            numeros[i] = trunc(sqrt(abs(numeros[i])));
        }
    }
}
int main(){
    int tamano;
    printf("Introduzca cuantos numeros va a proprocionar:\n");
    scanf("%d",&tamano);
    if(tamano<=0 || tamano>20)
    {
        printf("Introduzca un tamano valido");
        return 2;
    }
    int numeros[tamano];
    escanearDatos(numeros,tamano);
    imprimirDatos(numeros,tamano);
    printf("\n");
    modificarArray(numeros,tamano);
    printf("\n");
    imprimirDatos(numeros,tamano);
    return 0;
}