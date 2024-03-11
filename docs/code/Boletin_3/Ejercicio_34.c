// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum Operaciones {
	SALIR,
	CONTAR_CIFRAS,
	SUMAR_CIFRAS,
	CIFRA_SIGNIFICATIVA,
	IMAGEN,
	PRIMO,
	MCD,
	TABLA
};

int numCifras(int num) {
	int n;
	//Bucle for, en cada paso dividimos num entre 10 y sumamos 1
	for(n = 1; num /= 10; n++);
	return n;
	//Otra opción sería hacer
	// #include <math.h>
	// return (int)log10(num) + 1;
}

int sumaCifras(int num) {
	//Caso base de la recursión: num es menor que 10
	if(num < 10) {
		return num;
	} else {
		//Recursión: Se elimina la última cifra
		return sumaCifras(num / 10) + (num % 10);
	}
}

int cifraSignificativa(int num, int i) {
	//Se coje la i-ésima cifra, empezando por el final.
	for(; i > 1; i--) {
		num /= 10;
	}

	return num % 10;
}

int imagen(int num) {
	int x;
	for(x = 0; num > 0; num /= 10) {
		x = x*10 + (num % 10);
	}
	return x;
}

bool primo(int n) {
	//Este algoritmo usa el método de Eratóstenes,
	// eliminando números hasta la raíz cuadrada de n
	//Indica si el i-ésimo número no es primo
	bool *no_primos;

	no_primos = calloc(n, sizeof(bool));

	//Recorremos los números enteros hasta la raiz de n
	for(int i = 2; i*i <= n; i++) {
		if(no_primos[i]) {
			//Si ya se comprobó, saltar
			continue;
		} else {
			if(n % i == 0) {
				//No es primo
				return false;
			} else {
				//Si es primo. Marcamos todos sus múltiplos
				for(int j = i + 1; j*j <= n; j++) {
					no_primos[i] = n % j == 0;
				}
			}
		}
	}

	free(no_primos);

	return true;
}

int mcd(int a, int b) {
	//Algoritmo de Euclides recursivo
	int tmp;

	if(b == 0) {
		//Caso base
		return a;
	} else {
		if(a > b) {
			tmp = a % b;
		} else {
			tmp = b % a;
		}
		return mcd(b, tmp);
	}
}

void tabla(int num) {
	printf("   SUMA RESTA MULT  DIV\n");
	for(int i = 1; i <= 10; i++) {
		printf("%2d %4d %5d %4d %4d\n", i, num + i, num - i, num * i, num / i);
	}
}

void menu() {
	int op, num, i;

	do {
		printf("0 - Salir\n");
		printf("1 - Calcular el número de cifras de un entero\n");
		printf("2 - Sumar las cifras de un entero\n");
		printf("3 - Indicar la cifra i-ésima menos significativa de un entero\n");
		printf("4 - Calcular la imagen especular de un entero\n");
		printf("5 - Comprobar si un entero es primo\n");
		printf("6 - Calcula el MCD (mínimo común divisor) de dos números enteros\n");
		printf("7 - Presentar la tabla de sumar, restar, multiplicar y dividir (hasta 10) de un número entero\n");
		printf("Introduzca el nº de operación: ");
		scanf("%d", &op);
		if(op == SALIR) {
			continue;
		}
		printf("Introduza el número: ");
		scanf("%d", &num);
		if(op == CIFRA_SIGNIFICATIVA || op == MCD) {
			printf("Introduzca el segundo número: ");
			scanf("%d", &i);
		}
		printf("\n");
		switch(op) {
			case CONTAR_CIFRAS:
				printf("%d cifras\n", numCifras(num));
				break;
			case SUMAR_CIFRAS:
				printf("Total: %d\n", sumaCifras(num));
				break;
			case CIFRA_SIGNIFICATIVA:
				printf("Cifra: %d\n", cifraSignificativa(num, i));
				break;
			case IMAGEN:
				printf("%d -> %d\n", num, imagen(num));
				break;
			case PRIMO:
				printf("%d %s primo\n", num, primo(num) ? "es" : "no es");
				break;
			case MCD:
				printf("mcd(%d, %d) = %d\n", num, i, mcd(num, i));
				break;
			case TABLA:
				tabla(num);
				break;
			default:
				printf("Opción incorrecta");
		};
		printf("\n");
	} while(op);
}

int main() {
	menu();
	return 0;
}
