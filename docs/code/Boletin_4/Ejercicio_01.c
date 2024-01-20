//
// Created by Miguel Fraga on 06/12/2023.
//

/*
        Plantee e implemente un programa en lenguaje C, que utilizando
        exclusivamente subprogramas, solicite números enteros por teclado y vaya
        almacenándolos en un array de 10 elementos, mostrando a continuación por
        pantalla el contenido del array creado.
 */

#include <stdio.h>

void askNumbers(int *cadena)
{
    int i;
    printf("Dime un numero");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &cadena[i]);
        printf("Dime otro numero ");
    }
    printf("\n");
}

void printNumbers(int *cadena)
{
    int i;
    printf("La cadena es: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", cadena[i]);
    }
}

int main()
{
    int cadena[10];
    askNumbers(cadena);
    printNumbers(cadena);
    return 1;
}