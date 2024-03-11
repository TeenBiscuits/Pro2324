// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

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
