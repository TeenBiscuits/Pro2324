//
// Created by Pablo on 08/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en lenguaje C que almacene en memoria las
 *       horas de estudio que dedica un alumno a una asignatura determinada durante
 *       una semana. Solicite los datos apropiadamente al usuario y calcule y muestre la
 *       media de horas diarias empleadas en esa asignatura, asimismo indique el día en
 *       el que ha estado más aplicado (mayor número de horas estudiando) y más vago
 *       (menor número de horas estudiando).
 * in: Horas de estudio dedicada cada día
 * out: Medía de horas, el día de más horas y el de menos.
 */

// Librerías
#include <stdio.h>

// Definiciones
typedef struct {
    int horas;
    char nombre[10];
} tRegdiasemana;

typedef tRegdiasemana vHorasSemana[7];

// Definición funciones
void introducirHoras(vHorasSemana horas);

void imprimirMediaYMostrarDias(vHorasSemana horas);

void ordenarDeMayorAMenor(vHorasSemana horas);

// Main
int main() {
    // Inicializo el Registro para cada día de la semana
    vHorasSemana horasestudio = {{0, "Lunes"},
                                 {0, "Martes"},
                                 {0, "Miércoles"},
                                 {0, "Jueves"},
                                 {0, "Viernes"},
                                 {0,"Sábado"},
                                 {0,"Domingo"}};
    introducirHoras(horasestudio);
    imprimirMediaYMostrarDias(horasestudio);
    return 0;
}

// Declaración Funciones
void introducirHoras(vHorasSemana horas) {
    printf("Introduzca las horas de estudio que le ha dedicado a Pro 1: \n");
    for (int i = 0; i < 7; i++) {
        printf("%s: ",horas[i].nombre);
        scanf("%d", &horas[i].horas);
        while ((getchar()) != '\n'); // Limpio Buffer
    }

}

void imprimirMediaYMostrarDias(vHorasSemana horas) {
    int media = 0;
    for (int i = 0; i < 7; i++) media += horas[i].horas;
    media = media / 7;
    printf("La media de horas diarias: %d\n", media);
    ordenarDeMayorAMenor(horas);
    printf("El día que más horas estudiaste fué el %s (%d horas) y el que menos %s (%d horas).",horas[6].nombre,horas[6].horas,horas[0].nombre,horas[0].horas);
}

void ordenarDeMayorAMenor(vHorasSemana horas){
    vHorasSemana aux;
    for(int j = 1; j < 6; j++) {
        for (int i = 0; i < 7-j; i++) {
            if (horas[i].horas > horas[i + 1].horas) {
                aux[i] = horas[i]; // Movemos al aux
                horas[i] = horas[i + 1]; // Movemos el segundo al primer hueco
                horas[i + 1] = aux[i]; // Copiamos el valor del primero al segundo hueco
            }
        }
    }
}