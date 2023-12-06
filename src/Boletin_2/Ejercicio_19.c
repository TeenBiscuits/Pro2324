//
// Created by Miguel Fraga on 16/10/2023.
//
#include <stdio.h>

int main ()
{
    int mes;
    char r[2];
    printf("Introduzca un mes en numero" );
    scanf("%d", &mes);

    switch (mes)
    {
        case 1: printf("31");
            break;
        case 2:
            printf("Si el ano es bisiesto 29, sino 28 ");
            break;
        case 3: printf("31");
            break;
        case 4: printf("30");
            break;
        case 5: printf("31");
            break;
        case 6: printf("30");
            break;
        case 7: printf("31");
            break;
        case 8: printf("31");
            break;
        case 9: printf("30");
            break;
        case 10: printf("31");
            break;
        case 11: printf("30");
            break;
        case 12: printf("31");
            break;
    }
    return 0;
}