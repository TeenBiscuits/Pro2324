//
// Created by Miguel Fraga on 09/12/2023.
//

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
    int indiceMejorNota;
    for(int i = 0; i < 3; i++)
    {
        if (notaMax < alumnos[i].nota)
        {
            notaMax = alumnos[i].nota;
            indiceMejorNota = i;
        }
    }
    printf("El alumno %s tiene la mejor calificiacion.\n", alumnos[indiceMejorNota].nombre);
}

void imprimirAlumno(struct alumno a)
{
    printf("El nombre del nombre es: %s\n", a.nombre);
    printf("El nota del alumno es: %d\n", a.nota);
}

int main()
{
    struct alumno alumnos[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Introduciendo alumno %d:\n",i);
        introducirAlumno(&alumnos[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Imprimiendo alumno %d:\n",i);
        imprimirAlumno(alumnos[i]);
    }
    notaMasAlta(alumnos);
}
