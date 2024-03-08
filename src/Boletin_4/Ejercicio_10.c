// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

// Librerías
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Definiciones
typedef int array50[50], array100[100];

// Definición funciones
void crearArrayAleatorio(array50 array);

void fusiondedosArrays(array50 array1, array50 array2, array100 arraydesalida);

void bubblesort(array100 array);

void imprimirArray(array100 array);

// Main
int main() {
    array50 array1, array2;
    array100 arrayfinal;

    srand(time(NULL)); // Así solo se declara una vez
    crearArrayAleatorio(array1);
    crearArrayAleatorio(array2);

    fusiondedosArrays(array1, array2, arrayfinal);

    bubblesort(arrayfinal);

    imprimirArray(arrayfinal);

    return 0;
}

// Declaración Funciones
void crearArrayAleatorio(array50 array) {
    for (int i = 0; i < 50; i++) {
        array[i] = rand() % 1000; // Para evitar números gigantes, prefiero un array de números menores a 1000;
    }
}

void fusiondedosArrays(array50 array1, array50 array2, array100 arraydesalida) {
    for (int i = 0; i < 50; i++) { // El primer array en los elementos del 0 - 49
        arraydesalida[i] = array1[i];
    }
    for (int i = 0; i < 50; i++) { // El segundo array en los elementos del 50 - 99
        arraydesalida[i + 50] = array2[i];
    }
}

void bubblesort(array100 array) { // Algoritmo BubbleSort https://es.wikipedia.org/wiki/Ordenamiento_de_burbuja
    int aux;
    for (int j = 1; j < 99; j++) {
        for (int i = 0; i < 100 - j; i++) {
            if (array[i] > array[i + 1]) {
                aux = array[i]; // Movemos al aux
                array[i] = array[i + 1]; // Movemos el segundo al primer hueco
                array[i + 1] = aux; // Copiamos el valor del primero al segundo hueco
            }
        }
    }
}

void imprimirArray(array100 array) {
    printf("El array ordenado:\n %d", array[0]);
    for (int i = 1; i < 100; i++) {
        printf(", "); // Colocando la coma aquí conseguimos que el último elemento no tenga y así sea un punto.
        if (i % 20 == 0) printf("\n"); // Para que sea más legible en terminal.
        printf("%3d", array[i]); // El formato hace que queden en cuadrícula
    }
    printf("."); // El punto en cuestión
}