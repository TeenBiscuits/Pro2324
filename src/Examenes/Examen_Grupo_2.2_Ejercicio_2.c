//
// Created by angie on 11/12/2023.
//
#include <stdio.h>
void SolicitarEnteroPositivo(int *numeroPositivo)
{
    do{
        printf("Introduzca un numero entero positivo para saber el tamaño de la matriz:\n");
        scanf("%d",numeroPositivo);
    }while(numeroPositivo<=0);

}

void imprimirTableroAjedrez(int numeroPositvo)
{
    int i;
    int j;
    for(j=0;j<numeroPositvo;j++)
    {
        for(i=0;i<numeroPositvo;i++)
        {
            if ((i + j) % 2 != 0)
            {
                printf(" ");
            } else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}int main()
{
    int numeroPositivo;

    SolicitarEnteroPositivo(&numeroPositivo);
    imprimirTableroAjedrez(numeroPositivo);

    return 0;
}