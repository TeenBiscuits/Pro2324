// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

//Para usar bool
#include <stdbool.h>
//Para usar pow
#include <math.h>
//Para usar scanf y printf
#include <stdio.h>

//Precondición: num es positivo
bool determinarSiCapicua(int num) {
	int a, b;
	//Variables auxiliares
	int reducido, posFinal;

	if(num < 10) {
		//Caso base de la recursión: Solo queda un dígito
		return true;
	} else {
		//Extraer el primer y último dígito
		// posFinal ayudará a saber en que posición está «a»
		for(a = num, posFinal = 0;
			a >= 10 || a <= -10;
			posFinal++, a /= 10);
		b = num % 10;

		//Comprobar si son iguales. Si sí, recursión; si no, se devuelve falso y esto sube por la pila de llamadas
		if(a == b) {
			//Quitamos a y b de num
			reducido = num / 10;
			reducido -= a * (int)pow(10, posFinal);

			return determinarSiCapicua(reducido);
		} else {
			return false;
		}
	}
}

void probarSiCapicua() {
	int num;

	printf("Introduzca el número natural: ");
	scanf("%d", &num);
	if(num < 0) {
		num = -num;
	}

	if(determinarSiCapicua(num)) {
		printf("%d es capicua\n", num);
	} else {
		printf("%d no es capicua\n", num);
	}
}

int main() {
	probarSiCapicua();

	return 0;
}
