// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

/* Enunciado: Plantee e implemente, mediante funciones y procedimientos, un programa en Lenguaje C gestionado por menú en el que se presenten opciones para realizar las siguientes operaciones sobre números enteros:
 *
 * - Salir del programa
 * - Tres opciones de entre las siguientes:
 *	 - Conocer el número de vocales sin acentuar existentes en un texto que el usuario escribe mientras no aparezca el carácter *.
 *	 - Calcular la potencia de un número b elevado a e, sin utilizar los operadores de exponenciación.
 *	 - Mostrar por pantalla el factorial del menor de dos números enteros positivos que introduzca por teclado el usuario.
 *	 - Visualizar una tabla con los cuadrados y los cubos de los números contenidos en un intervalo de enteros indicado por el usuario.
 *	 - Dibujar un cuadrado, aproximadamente centrado, en pantalla con el carácter y longitud del lado que indique el usuario.
 *	 - Mostrar el área y el perímetro del rectángulo de menor área. El usuario debe indicar las longitudes de los lados de los dos rectángulos.
 *	 - Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de aquellos números contenidos en un intervalo de enteros indicado por el usuario.
 *	 - Calcular el máximo, el mínimo y la media de una serie de números enteros que el usuario introduce por teclado. Finaliza la serie cuando el número introducido es múltiplo de 10.
 *	 - Mostrar por pantalla los divisores de un número entero que indique el usuario.
 *	 - Dibujar un triángulo equilátero, aproximadamente centrado, en pantalla con el carácter y longitud del lado que indique el usuario.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <errno.h>


enum Operaciones {
	SALIR,
	VOCALES,
	POTENCIA,
	FACTORIAL,
	CUBOS,
	CUADRADO,
	RECTANGULO,
	TABLA,
	MAXIMO,
	DIVISORES,
	EQUILATERO
};

void vocales() {
	char c;
	int n = 0;

	printf("Introduzca el texto. Introduzca «*» y pulse intro para terminar: ");
	do {
		c = getc(stdin);
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				n++;
				break;
		}
	} while(c != EOF && c != '*');

	printf("%d vocales\n", n);
}

int potencia(int base, int exponente) {
	int n;

	//Para no usar las funciones de exponenciación, se hace un simple bucle
	for(n = 1; exponente > 0; exponente--) {
		n *= base;
	}

	return n;
}

int factorial(int n) {
	if(n <= 1) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

void cuadradosYCubos(int de, int hasta) {
	printf("%5s  Cuadrado  Cubo\n", "");
	for(int i = de; i <= hasta; i++) {
		printf("%5d  %8d  %8d\n", i, i*i, i*i*i);
	}
}

void dibujarCuadrado(int lado, char caracter) {
	int i;
	//Primera línea
	for(i = 0; i < lado; i++) {
		putchar(caracter);
	}
	putchar('\n');
	//Siguientes líneas
	for(i = 1; i < lado - 1; i++) {
		putchar(caracter);
		for(int j = 1; j < lado - 1; j++) {
			putchar(' ');
		}
		putchar(caracter);
		putchar('\n');
	}
	//Línea final
	for(i = 0; i < lado; i++) {
		putchar(caracter);
	}
}

void areaRectangulo(int largoA, int cortoA, int largoB, int cortoB) {
	int areaA, areaB, perimetroA, perimetroB;

	areaA = largoA * cortoA;
	perimetroA = (largoA + cortoA)*2;

	areaB = largoB * cortoB;
	perimetroB = (largoB + cortoB)*2;

	if(areaA < areaB) {
		printf("Rectángulo %d %d: Área %d Perímetro %d\n", largoA, cortoA, areaA, perimetroA);
	} else {
		printf("Rectángulo %d %d: Área %d Perímetro %d\n", largoB, cortoB, areaB, perimetroB);
	}
}

void raices(int de, int hasta) {
	printf("%5s  Cuadrado  Raiz cuadrada\n", "");
	for(int i = de; i <= hasta; i++) {
		printf("%5d  %8d  %e\n", i, i*i, sqrt(i));
	}
}

void maximo() {
	long *numeros, tmp, max, i;
	char *entrada, *continuar, *entradaTmp;
	size_t tamEntrada = sizeof(char);

	long maximo, minimo;
	float media;


	//Inicializar la cadena que contendrá la entrada
	entrada = malloc(sizeof(char));
	printf("Introduzca los números separados por espacios. Termine con un salto de línea: ");
	getline(&entrada, &tamEntrada, stdin);
	entradaTmp = entrada;
	continuar = entrada;

	//Inicializar el vector de números
	numeros = calloc(tamEntrada / 2 + 1, sizeof(int));
	//Si el número es múltiplo de 10, se para
	for (i = 0; (tmp = strtol(continuar, &entradaTmp, 10)) % 10 != 0; i++ ) {
		//Si continuar es igual a entradaTmp no se han introducido
		// números. Si entradaTmp es igual a '\0' es que se ha
		// leido toda la entrada.
		if(continuar == entradaTmp || *entradaTmp == '\0') {
			break;
		} else {
			//En cada vuelta, strtol coje un número de continuar, y
			// apunta al siguiente en la variable entradaTmp
			continuar = entradaTmp;
		}
		numeros[i] = tmp;
	}

	//Calcular la media, máximo y mínimo
	max = i;
	maximo = LONG_MIN;
	minimo = LONG_MAX;
	for(i = 0, tmp = 0; i < max; i++) {
		tmp += numeros[i];
		if(numeros[i] > maximo) {
			maximo = numeros[i];
		}
		if(numeros[i] < minimo) {
			minimo = numeros[i];
		}
	}
	media = (float)tmp / max;

	printf("Máximo: %ld\nMínimo: %ld\nMedia: %f\n", maximo, minimo, media);

	free(numeros);
	free(entrada);
}

void divisores(int num) {
	printf("Divisores de %d: ", num);
	for(int i = 2; i < num; i++) {
		if(num % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void triangulo(int lado, char caracter) {
	int i;

	int espacioAntes, espacioEntre;

	if(lado % 2 == 0) {
		espacioAntes = (lado - 2) / 2;
		espacioEntre = 2;
	} else {
		espacioAntes = lado / 2;
		espacioEntre = 1;
	}

	//Punta del triángulo
	//Si lado es par, 2 asteriscos
	//Si impar, 1 asterisco
	for(i = 0; i < espacioAntes; i++) {
		putchar(' ');
	}
	putchar(caracter);
	if(lado % 2 == 0) {
		putchar(caracter);
	}
	putchar('\n');

	//Dibujar los lados
	// El espacio anterior se reduce un caracter de cada vez
	// El espacio interior se reduce de 2 en 2
	for(espacioAntes-- ; espacioAntes > 0; espacioAntes--, espacioEntre += 2) {
		//Dibujar espacios antes
		for(i = 0; i < espacioAntes; i++) {
			putchar(' ');
		}
		putchar(caracter);
		//Dibujar espacios entre
		for(i = 0; i < espacioEntre; i++) {
			putchar(' ');
		}
		putchar(caracter);
		putchar('\n');
	}

	//Dibujar el lado inferior
	for(i = 0; i < lado; i++) {
		putchar(caracter);
	}
	putchar('\n');
}


//Función auxiliar con gets que lee un número por pantalla
//Equivalente a scanf("%d")
int leerNumero() {
	size_t n;
	char *str;

	str = calloc(10, sizeof(char));
	getline(&str, &n, stdin);

	return strtol(str, NULL, 10);
}

void menu() {
	int op, tmpA, tmpB, tmpC, tmpD;
	size_t len;
	char *c;

	c = calloc(10, sizeof(char));

	do {
printf(" 0 - Salir del programa\n");
printf(" 1 - Conocer el número de vocales sin acentuar existentes en un texto que el usuario escribe mientras no aparezca el carácter *\n");
printf(" 2 - Calcular la potencia de un número b elevado a e, sin utilizar los operadores de exponenciación\n");
printf(" 3 - Mostrar por pantalla el factorial del menor de dos números enteros positivos que introduzca por teclado el usuario\n");
printf(" 4 - Visualizar una tabla con los cuadrados y los cubos de los números contenidos en un intervalo de enteros indicado por el usuario\n");
printf(" 5 - Dibujar un cuadrado, aproximadamente centrado, en pantalla con el carácter y longitud del lado que indique el usuario\n");
printf(" 6 - Mostrar el área y el perímetro del rectángulo de menor área. El usuario debe indicar las longitudes de los lados de los dos rectángulos\n");
printf(" 7 - Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de aquellos números contenidos en un intervalo de enteros indicado por el usuario\n");
printf(" 8 - Calcular el máximo, el mínimo y la media de una serie de números enteros que el usuario introduce por teclado. Finaliza la serie cuando el número introducido es múltiplo de 10\n");
printf(" 9 - Mostrar por pantalla los divisores de un número entero que indique el usuario\n");
printf("10 - Dibujar un triángulo equilátero, aproximadamente centrado, en pantalla con el carácter y longitud del lado que indique el usuario\n");
		printf("Introduzca el nº de operación: ");
		op = leerNumero();
		if(op == SALIR) {
			continue;
		}
		printf("\n");
		switch(op) {
			case VOCALES:
				vocales();
				break;

			case POTENCIA:
				printf("Base: ");
				tmpA = leerNumero();
				printf("Exponente: ");
				tmpB = leerNumero();
				printf("Resultado %d ** %d: %d", tmpA, tmpB, potencia(tmpA, tmpB));
				break;

			case FACTORIAL:
				printf("Primer número: ");
				tmpA = leerNumero();
				printf("Segundo número: ");
				tmpB = leerNumero();
				if(tmpA > tmpB) {
					printf("Factorial de %d: %d\n", tmpB, factorial(tmpB));
				} else {
					printf("Factorial de %d: %d\n", tmpA, factorial(tmpA));
				}
				break;

			case CUBOS:
				printf("De: ");
				tmpA = leerNumero();
				printf("Hasta: ");
				tmpB = leerNumero();
				cuadradosYCubos(tmpA, tmpB);
				break;

			case CUADRADO:
				printf("Caracter: ");
				getline(&c, &len, stdin);
				printf("Tamaño: ");
				tmpA = leerNumero();
				dibujarCuadrado(tmpA, c[0]);
				break;

			case RECTANGULO:
				printf("Longitudes de los lados largo y ancho del primer rectángulo, separados por espacios: ");
				getline(&c, &len, stdin);
				sscanf("%d %d", c, &tmpA, &tmpB);
				printf("Longitudes de los lados largo y ancho del segundo rectángulo, separados por espacios: ");
				getline(&c, &len, stdin);
				sscanf("%d %d", c, &tmpC, &tmpD);
				areaRectangulo(tmpA, tmpB, tmpC, tmpD);
				break;

			case TABLA:
				printf("De: ");
				tmpA = leerNumero();
				printf("Hasta: ");
				tmpB = leerNumero();
				raices(tmpA, tmpB);
				break;

			case MAXIMO:
				maximo();
				break;

			case DIVISORES:
				printf("Introduca el número: ");
				tmpA = leerNumero();
				divisores(tmpA);
				break;

			case EQUILATERO:
				printf("Caracter: ");
				getline(&c, &len, stdin);
				printf("Tamaño: ");
				tmpA = leerNumero();
				triangulo(tmpA, c[0]);
				break;

			default:
				printf("Opción incorrecta");
		};
		printf("\n");
	} while(op);

	free(c);
}

int main() {
	menu();
	return 0;
}
