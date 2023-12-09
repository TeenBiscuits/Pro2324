//
// Created by Miguel Fraga on 09/12/2023.
//

/*

        Diseñe la estructura para almacenar en memoria la información de los
        trabajadores de un taller de 20 empleados. Si el empleado es oficinista tendrá un
        número de teléfono; si es conductor tendrá asignado el número de matrícula de
        un vehículo; y si es técnico tendrá asignado el código de barras de un
        ordenador. Se debe conocer el nombre, la fecha de nacimiento, tipo de puesto
        de trabajo y el nivel de estudios de todos los trabajadores.

*/

#include <stdio.h>

struct empleados
{
    char puesto[50]; //oficinista   conductor   técnico
    char nivelEstudios[50];
    char fechaNacimiento[50];
    char nombre[50];
};

void introducirEmpleado(struct empleados *e)
{
    printf("Cual es el nombre del empleado?");
    gets(&e->nombre);
    printf("Que puesto le corresponde al empleado?");
    gets(&e->puesto);
    printf("Cual es la fecha de nacimiento del empleado? dd/mm/aaaa");
    gets(&e->fechaNacimiento);
    printf("Cual es el nivel de estudios del empleado? ");
    gets(&e->nivelEstudios);
}

void imprimirempleado(struct empleados e)
{
    printf("El nombre del empleado es: %s\n", e.nombre);
    printf("La fecha de nacimiento del empleado es: %s\n", e.fechaNacimiento);
    printf("El nivel de estudios del empleado es: %s\n", e.nivelEstudios);
    printf("El puesto del empleado es: %s\n", e.puesto);
}


int main()
{
    struct empleados empleados[20];

    for(int i = 0; i < 20; i++)
    {
        printf("Introduciendo alumno %d:\n",i);
        introducirEmpleado(&empleados[i]);
    }
    for(int i = 0; i < 20; i++)
    {
        printf("Imprimiendo alumno %d:\n",i);
        imprimirempleado(empleados[i]);
    }
}