// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

/* Enunciado: Implemente un programa en Lenguaje C para trabajar con números complejos. Las opciones que debe tener son:
1. Introducir dos números complejos en forma binómica por teclado
2. Introducir dos números complejos en forma módulo-argumental por teclado
3. Sumar dos números complejos
4. Restar dos números complejos
5. Multiplicar dos números complejos
0. Salir
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

enum Operaciones {
	SALIR,
	BINOMICA,
	MODULO,
	SUMAR,
	RESTAR,
	MULTIPLICAR
};

typedef struct  {
	double real;
	double imaginario;
} Binomica;

typedef struct  {
	double modulo;
	double argumento;
} ModuloArg;


typedef struct {
	bool binomico;
	union {
		Binomica b;
		ModuloArg m;
	};
} Numero;

void binomicaAModulo(Binomica *origen, ModuloArg *destino) {
	destino->modulo = sqrt(origen->real*origen->real + origen->imaginario*origen->imaginario);
	destino->argumento = atan(origen->imaginario);
}

void moduloABinomica(ModuloArg *origen, Binomica *destino) {
	destino->imaginario = tan(origen->argumento);
	destino->real = sqrt(origen->modulo*origen->modulo - destino->imaginario*destino->imaginario);
}

void escribirNumero(Numero *n, const char *nombre) {
	printf("%s ", nombre);

	if(n->binomico) {
		printf("(binomico):  z = %e + i*%e", n->b.real, n->b.imaginario);
	} else {
		printf("(módulo-argumental): |%e|_%e ", n->m.modulo, n->m.argumento);
	}

	printf("\n");
}

void sumaBinomico(Binomica *x, Binomica *y, Binomica *z) {
	z->real = x->real + y->real;
	z->imaginario = x->imaginario + y->imaginario;
}

void restaBinomico(Binomica *x, Binomica *y, Binomica *z) {
	z->real = x->real - y->real;
	z->imaginario = x->imaginario - y->imaginario;
}

void multBinomico(Binomica *x, Binomica *y, Binomica *z) {
	z->real = x->real*y->real - x->imaginario*y->imaginario;
	z->imaginario = x->imaginario*y->real + x->real*y->imaginario;
}

void menu() {
	int op;
	double tmpA, tmpB;
	Numero x, y, z;
	Binomica tempA, tempB;
	ModuloArg tempC;

	do {
		printf(" 1. Introducir dos números complejos en forma binómica por teclado\n");
		printf(" 2. Introducir dos números complejos en forma módulo-argumental por teclado\n");
		printf(" 3. Sumar dos números complejos\n");
		printf(" 4. Restar dos números complejos\n");
		printf(" 5. Multiplicar dos números complejos\n");
		printf(" 0. Salir\n");
		printf("Escoja una opción: ");
		scanf("%d", &op);
		if(op == SALIR) {
			continue;
		}
		printf("\n");
		switch(op) {
			case BINOMICA:
				printf("Introduzca los números, con la parte real e imaginaria separados por espacios.\n");
				printf("X: ");
				scanf("%lf %lf", &tmpA, &tmpB);
				x.binomico = true;
				x.b.real = tmpA;
				x.b.imaginario = tmpB;
				printf("Y: ");
				scanf("%lf %lf", &tmpA, &tmpB);
				y.binomico = true;
				y.b.real = tmpA;
				y.b.imaginario = tmpB;
				break;

			case MODULO:
				printf("Introduzca los números, con el módulo y argumento separados por espacios.\n");
				printf("X: ");
				scanf("%lf %lf", &tmpA, &tmpB);
				x.binomico = false;
				x.m.modulo = tmpA;
				x.m.argumento = tmpB;
				printf("Y: ");
				scanf("%lf %lf", &tmpA, &tmpB);
				y.binomico = false;
				y.m.modulo = tmpA;
				y.m.argumento = tmpB;
				break;

			case SUMAR:
				if(x.binomico && y.binomico) {
					sumaBinomico(&x.b, &y.b, &(z.b));
				} else {
					moduloABinomica(&x.m, &tempA);
					moduloABinomica(&y.m, &tempB);
					sumaBinomico(&tempA, &tempB, &(z.b));
				}
				z.binomico = true;
				escribirNumero(&z, "Z");

				z.binomico = false;
				binomicaAModulo(&z.b, &tempC);
				z.m = tempC;
				escribirNumero(&z, "Z");
				break;

			case RESTAR:
				if(x.binomico && y.binomico) {
					restaBinomico(&x.b, &y.b, &(z.b));
				} else {
					moduloABinomica(&x.m, &tempA);
					moduloABinomica(&y.m, &tempB);
					restaBinomico(&tempA, &tempB, &(z.b));
				}
				z.binomico = true;
				escribirNumero(&z, "Z");

				z.binomico = false;
				binomicaAModulo(&z.b, &tempC);
				z.m = tempC;
				escribirNumero(&z, "Z");
				break;

			case MULTIPLICAR:
				if(x.binomico && y.binomico) {
					multBinomico(&x.b, &y.b, &(z.b));
				} else {
					moduloABinomica(&x.m, &tempA);
					moduloABinomica(&y.m, &tempB);
					multBinomico(&tempA, &tempB, &(z.b));
				}
				z.binomico = true;
				escribirNumero(&z, "Z");

				z.binomico = false;
				binomicaAModulo(&z.b, &tempC);
				z.m = tempC;
				escribirNumero(&z, "Z");
				break;

			default:
				printf("Opción incorrecta");
		};
		printf("\n");
		printf("Números cargados:\n");
		escribirNumero(&x, "X");
		escribirNumero(&y, "Y");
	} while(op);
}

int main() {
	menu();
	return 0;
}
