//
// Created by angie on 11/12/2023.
//
#include <stdio.h>
#define N 3

typedef struct empleado{
    char nombre[50];
    int edad;
    float salario;
}nempleado;
nempleado adquirirEmpleado(nempleado * aEmp){
    printf("Nombre:\n");
    scanf("%s",&aEmp->nombre);
    printf("Edad:\n");
    scanf("%d",&aEmp->edad);
    printf("Salario:\n");
    scanf("%f",&aEmp->salario);
}


int main(){
    nempleado trabajadores[N];
    int joven=0;
    adquirirEmpleado(&trabajadores[0]);
    for(int i=1;i<N;i++)
    {
        adquirirEmpleado(&trabajadores[i]);
        if(trabajadores[i].edad<trabajadores[joven].edad)joven=i;

    }
    printf("El trabajador mas joven es %s  %d ", trabajadores[joven].nombre, trabajadores[joven].edad);
}