// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

// Librerías
#include <stdio.h>

// Constantes
#define N 4 // Número de notas (exámenes) a valorar
#define MAX 25 // Máximo de letras de un nombre y apellido
#define FORMATO "%25[^\n]" // Formato para mostrar los nombres
#define CLASE 4 // Número de alumnos por clase

// Definiciones
typedef struct {
    char NombreApellidos[MAX + 1]; // Cadena para nombres y apellidos
    int Notas[N]; // Vector para almacenar las Notas
    float Media; // Media aritmética de las notas del alumno
} tRegAlumno; // Registro para el nombre y notas de cada alumno

typedef tRegAlumno tVAlumno[CLASE]; // Definición de tipo del vector de la estructura dada.

typedef char puntuacion;

typedef float Media;

// Definición de Funciones
tRegAlumno pedirNota(); // Pedir las notas de cada Alumno
void introducirNotasAlumnos(tVAlumno v); // Función para Introducir Notas de los alumnos
puntuacion calculaPuntuacion(Media m); // Recibiendo la nota media devolver la letra de la puntuación
void mostrarMedias(const tVAlumno v); // Muestra los nombres, la nota y la nota media de cada alumno

// Main Por si no era evidente
int main() {
    tVAlumno vAlumnos; // Vector en el que guardaremos notas y nombres de todos los alumnos de la clase

    puts("Bienvenida profesor/a del grupo D. Vamos introducir esas notas.");
    introducirNotasAlumnos(vAlumnos);
    mostrarMedias(vAlumnos);

    return 0;
}

// Declaración de funciones
tRegAlumno pedirNota() {
    tRegAlumno aux; // Vector Auxiliar
    int sum = 0; // Sumatorio de Notas para la media

    printf("Nombre y apellidos del alumno/a: ");
    scanf(FORMATO, aux.NombreApellidos);

    for (int i = 0; i < N; i++) {
        do {
            printf("Nota de la asignatura %2d: ", i + 1);
            scanf("%d", &aux.Notas[i]);
        } while (aux.Notas[i] < 0 || aux.Notas[i] > 100);
        sum += aux.Notas[i];
        while ((getchar()) != '\n'); // Limpio Buffer estilo profe Carmen
    }

    aux.Media = (float)(sum)/(float)N;

    return aux;
}

void introducirNotasAlumnos(tVAlumno v) {
    for (int i = 0; i < CLASE; i++) {
        printf("Notas alumno/a Nº %2d:\n", i + 1);
        v[i] = pedirNota();
    }
}

puntuacion calculaPuntuacion(const Media m) {
    puntuacion Letra;
    if (m >= 70) {
        if (m >= 80) {
            if (m >= 90) Letra = 'A';
            else Letra = 'B';
        } else Letra = 'C';
    } else {
        if (m >= 60) Letra = 'D';
        else Letra = 'E';
    }
    return Letra;
}

void mostrarMedias(const tVAlumno v) {
    puts("\nMostrando medias...\n");
    for (int i = 0; i < N; i++)
        printf("%s\t\t\t%.2f\t\t%c\n", v[i].NombreApellidos, v[i].Media, calculaPuntuacion(v[i].Media));
}