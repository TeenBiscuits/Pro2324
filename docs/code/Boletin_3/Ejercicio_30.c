// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

// Enunciado: Plantee e implemente una función recursiva que devuelva la suma de las cifras de un número entero > 0. Por ejemplo si el número es 721 devuelve 10. Además de la función, implemente la función apropiada para probar su funcionamiento, activándola desde el programa principal.

#include <stdio.h>

int sumaCifras(int num) {
	//Caso base de la recursión: num es menor que 10
	if(num < 10) {
		return num;
	} else {
		//Recursión: Se elimina la última cifra
		return sumaCifras(num / 10) + (num % 10);
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

	printf("Suma: %d\n", sumaCifras(num));
}

int main() {
	probarSuma();
	return 0;
}
