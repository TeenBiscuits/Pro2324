// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

// Enunciado: Plantee e implemente una función recursiva en Lenguaje C que calcule la suma de los términos de la sucesión de Fibonacci hasta el término indicado por el usuario a través del teclado. Además de la función, implemente la función apropiada para probar su funcionamiento, activando está último desde el programa principal.

#include <stdio.h>

int sumaFib(int limite, int a, int b) {
	int siguiente;

	siguiente = a + b;
	printf("%d %d = %d %d\n", a, b, siguiente, limite);
	//Caso base de la recursión: se llegó al límite
	if(siguiente == limite) {
		return siguiente;
	} else {
		return sumaFib(limite, b, siguiente) + siguiente;
	}
}

void probarSuma() {
	int num;

	while(1) {
		printf("Introduzca el número: ");
		scanf("%d", &num);
		if(num <= 0) {
			printf("%d tiene que ser mayor que 0\n", num);
		} else {
			break;
		}
	}

	printf("Suma: %d\n", sumaFib(num, 1, 1) + 2); //El 2 representa la suma de los 1 iniciales
}

int main() {
	probarSuma();
	return 0;
}
