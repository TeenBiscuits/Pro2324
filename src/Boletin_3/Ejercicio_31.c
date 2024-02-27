// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

// Enunciado:  Plantee e implemente una función recursiva en Lenguaje C para resolver el problema de las torres de Hanoi. Además de la función, implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.

#include <stdio.h>
#include <stdlib.h>

//Para agilizar, se va a implementar una simple pila
typedef struct {
	unsigned int libre;
	unsigned int base;
	unsigned int *pila;
} Pila;

//Función auxiliar para inicializar una pila
void crearPila(Pila *p, int tamano) {
	p->libre = 0;
	p->base = 0;
	p->pila = malloc(tamano * sizeof(unsigned int));
}

//Función auxiliar para mover un disco de una torre a otra
// Precondición: torreOrigen no está vacía y torreDestino no está llena
// Precondición: El disco de origen es más pequeño que el de destino
void mover(Pila *torreOrigen, Pila *torreDestino) {
	int valor;

	valor = torreOrigen->pila[torreOrigen->libre - 1];
	torreDestino->pila[torreDestino->libre] = valor;

	torreOrigen->libre--;
	torreDestino->libre++;
}

void torresHanoi(Pila *origen, Pila *auxiliar, Pila *destino) {
	//Caso base: La torre origen solo tiene un elemento
	if(origen->libre == origen->base + 1) {
		//Se mueve este elemento al destino y se acaba
		mover(origen, destino);
	} else {
		//Se mueven todos los discos, excepto el más grande,
		// a la torre auxiliar
		origen->base++;
		torresHanoi(origen, destino, auxiliar);
		origen->base--;
		//Mover la ficha que queda a la torre destino
		mover(origen, destino);
		//Mover las fichas restantes de auxiliar a destino
		torresHanoi(auxiliar, origen, destino);
	}
}

//Función auxiliar para mostrar las torres
void imprimirTorre(const char *nombre, Pila *torre, int longitud) {
	printf("%s: ", nombre);
	for(int i = 0; i < longitud; i++) {
		printf("%d ", torre->pila[i]);
	}
	printf("\n");
}

void ejecutar(int numDiscos) {
	Pila origen, destino, auxiliar;

	//Crear las 3 torres. Las torres se definen como pilas de
	// enteros, siendo pila[0] la parte inferior de la torre.
	crearPila(&origen, numDiscos);
	crearPila(&destino, numDiscos);
	crearPila(&auxiliar, numDiscos);

	//La torre de origen está ordenada
	for(int i = 0; i < numDiscos; i++) {
		origen.pila[i] = numDiscos - i;
	}
	origen.libre = 4;

	imprimirTorre("Origen", &origen, numDiscos);
	imprimirTorre("Auxiliar", &auxiliar, numDiscos);
	imprimirTorre("Destino", &destino, numDiscos);

	//Se pasan los valores iniciales
	torresHanoi(&origen, &auxiliar, &destino);

	imprimirTorre("Origen", &origen, numDiscos);
	imprimirTorre("Auxiliar", &auxiliar, numDiscos);
	imprimirTorre("Destino", &destino, numDiscos);

	//Se elimina la memoria
	free(origen.pila);
	free(destino.pila);
	free(auxiliar.pila);
}

int main() {
	int numDiscos;

	while(1) {
		printf("Introduzca el numero de discos: ");
		scanf("%d", &numDiscos);
		if(numDiscos <= 0) {
			printf("Debe haber 1 o más discos\n");
		} else {
			break;
		}
	}

	ejecutar(numDiscos);

	return 0;
}
