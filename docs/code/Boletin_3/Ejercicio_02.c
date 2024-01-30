//
// Created by Pablo on 30/11/2023.
//
#include <stdio.h>
#include <string.h>

void inicialSemana(char I);

int main() {
    char I; // Inicial
    printf("Introduzca la inicial de un día de la semana: ");
    scanf("%c",&I);
    inicialSemana(I);
    return 0;
}

void inicialSemana(char I){
    switch (I) {
        case 'L':
        case 'l':
            printf("Lunes");
            break;
        case 'M':
        case 'm':
            printf("Martes");
            break;
        case 'X':
        case 'x':
            printf("Miércoles");
            break;
        case 'J':
        case 'j':
            printf("Jueves");
            break;
        case 'V':
        case 'v':
            printf("Viernes");
            break;
        case 'S':
        case 's':
            printf("Sábado");
            break;
        case 'D':
        case 'd':
            printf("Domingo");
            break;
        default:
            printf("Error");
            break;
    }
}