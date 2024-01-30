//
// Created by Miguel Fraga on 10/12/2023.
//

#include <stdio.h>
#include <string.h>

void invertirCadena(char cadena[])
{
    int longitud = strlen(cadena);
    int i, j;

    for (i = 0, j = longitud - 1; i < j; i++, j--)
    {
        char temp = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temp;
    }
}

int main()
{
    printf("Introduce una oracion o frase\n");
    char cadenaOriginal[50];
    gets(&cadenaOriginal);

    invertirCadena(cadenaOriginal);

    printf("Cadena invertida: %s\n", cadenaOriginal);

    return 0;
}