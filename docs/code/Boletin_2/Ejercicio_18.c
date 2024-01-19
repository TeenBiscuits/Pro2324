//
// Created by Miguel Fraga on 16/10/2023.
//
#include <stdio.h>

int main ()
{
    int x;
    printf("Introduzca un numero" );
    scanf("%d", &x);

    if (x%2 == 0) // 2 4 6 8
    {
        switch(x/5*10)
        {
            case 4: printf("2");
                break;
            case 8: printf("4");
                break;
            case 12: printf("6");
                break;
            case 16: printf("8");
                break;
        }
    }
    else
    {
        switch(x/5)
        {
            case 2: printf("1");
                break;
            case 6: printf("3");
                break;
            case 1: printf("5");
                break;
            case 14: printf("7");
                break;
            case 18: printf("9");
                break;
        }
    }
}