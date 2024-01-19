//
// Created by Miguel Fraga on 16/10/2023.
//
#include <stdio.h>

int main ()
{
    float nota;
    float acumulado;
    int asignaturas;
    float media;
    int mediaint;
    int noPresentado = 1;


    for(asignaturas = 1; asignaturas < 4; asignaturas++)
    {
        printf("Introduzca calificacion asignatura %d (formato X.X, 0 para No Presentado): ", asignaturas);
        scanf("%f", &nota);
        if(nota >= 0 && nota <= 10)
        {
            if(nota != 0)
            {
                acumulado = acumulado + nota;
            }
            else
            {
                noPresentado++;
            }
        }
        else
        {
            printf("Nota no valida");
            break;
        }
    }

    media = acumulado / (asignaturas - noPresentado);
    mediaint = media;

    switch(mediaint)
    {
        case 1:
            printf("La media es: suspenso %f", media);
            break;
        case 2:
            printf("La media es: suspenso %f", media);
            break;
        case 3:
            printf("La media es: suspenso %f", media);
            break;
        case 4:
            printf("La media es: suspenso %f", media);
            break;
        case 5:
            printf("La media es: suficiente %f", media);
        case 6:
            printf("La media es: suficiente %f", media);
        case 7:
            printf("La media es: notable %f", media);
        case 8:
            printf("La media es: notable %f", media);
        case 9:
            printf("La media es: sobresaliente %f", media);
        case 10:
            printf("La media es: sobresaliente %f", media);
    }
}
