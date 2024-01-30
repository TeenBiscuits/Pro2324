//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h
#define MAX 20 // SE DECLARA EL TAMAÑO MÁXIMO Y SE ASIGNA POSTERIORMENTE EN nombre[MAX]
// NUNCA SOBREESCRIBIR EL LIMITE, YA QUE SERÍA UN MEMORY OVERFLOW Y ESO ES GRAVISIMO 0 :(
int main() {
    char letra = 'A';
    char nombre[MAX] = "Ana";
    int edad;
    // Entrada de Valores
    puts("Escribe tu nombre en la siguiente linea: ");
    gets(nombre);
    printf("Escribe tu edad a continuación: ");
    scanf("%d", &edad);
    // Salida en Pantalla
    printf("Hola %s, eres guapisim@ para tener %d años.",nombre,edad);

    return 0;
}

