//
// Created by Miguel Fraga on 07/12/2023.
//

#include <stdio.h>
#include <stdlib.h>
// codigo de fibonacci de @sneiira de https://github.com/TeenBiscuits/Pro2324/blob/main/src/Boletin_2/Ejercicio_34.c

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int test;
    int resultado;
    int n;

    printf("Quieres comprobar el funcionamiento del codigo? 1 = si 0 = no");
    scanf("%d", &test);
    if(test)
    {
        int i = 0;
        while(i < 10)
        {
            n = rand() % 30;
            resultado = fibonacci(n);
            printf("El numero %d de la sucesion de Fibonacci es %d \n",n,resultado);
            i++;
        }
    }
    else
    {
        printf("Introduzca un valor N mayor que 0:\n");
        scanf("%d",&n);

        if(n<=0)
        {
            printf("Introduzca un valor valido.");
        }
        else
        {
            resultado = fibonacci(n);
            printf("El numero %d de la sucesion de Fibonacci es %d",n,resultado);
        }
        return 0;
    }
}