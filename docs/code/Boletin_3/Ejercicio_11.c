// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <stdlib.h>

void reverseNumeros(int limite_izq, int limite_der)
{
    int i;
    for (i = limite_der; i >= limite_izq; i--)
    {
        printf("%d ", i);
    }
}

void testScript()
{
    int limite_izq = rand() % 3;
    int limite_der = (rand() % 100);
    int i;
    printf("%d\n",limite_izq);
    printf("%d\n", limite_der);
    for (; limite_der > limite_izq; limite_der--)
    {
        printf("%d ", limite_der);
    }
}

int main()
{
    int test;
    int limite_izq;
    int limite_der;
    printf("Quieres probar el funcionamiento del programa con numeros aleatorios? 1 = si; 0 = no ");
    scanf("%d", &test);
    if(test)
    {
        testScript();
    }
    else
    {
        printf("Dime el limite izquierdo del intervalo");
        scanf("%d", &limite_izq);
        printf("Dime el limite derecho del intervalo");
        scanf("%d", &limite_der);
    }
    reverseNumeros(limite_izq, limite_der);
}