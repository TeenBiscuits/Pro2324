// SPDX-FileCopyrightText: 2023 Miguel Fraga Pico
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    char nombre[40];
    int nota;
};

void introducirAlumno(struct alumno *a)
{
    printf("Nombre: ");
    gets(&a->nombre);
    printf("Nota: ");
    char nota[20];
    gets(nota);
    a->nota = atoi(nota);
}

void notaMasAlta(struct alumno *alumnos)
{
    int notaMax = 0;
    int notaMin = 0;
    int indiceMejorNota;
    int indicePeorNota;
    int j = 0;
    for(int i = 0; i < 15; i++)
    {
        if (notaMax < alumnos[i].nota)
        {
            notaMax = alumnos[i].nota;
            indiceMejorNota = i;
        }
        if(notaMin > alumnos[i].nota)
        {
            notaMin = alumnos[i].nota;
            indicePeorNota = j;
        }
        j++;
        printf("%d", notaMax);
        printf("%d", notaMin);
    }
    printf("El alumno %s tiene la mejor calificiacion.\n", alumnos[indiceMejorNota].nombre);
    printf("El alumno %s tiene la peor calificiacion.\n", alumnos[indicePeorNota].nombre);
}

void imprimirAlumno(struct alumno a)
{
    printf("El nombre del alumno es: %s\n", a.nombre);
    printf("El nota del alumno es: %d\n", a.nota);
}

int main()
{
    struct alumno alumnos[15];
    for(int i = 0; i < 15; i++)
    {
        printf("Introduciendo alumno %d:\n",i + 1);
        introducirAlumno(&alumnos[i]);
    }
    for(int i = 0; i < 15; i++)
    {
        printf("Imprimiendo alumno %d:\n",i + 1);
        imprimirAlumno(alumnos[i]);
    }
    notaMasAlta(alumnos);
}
