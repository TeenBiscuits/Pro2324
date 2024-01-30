//
// Created by Pablo on 01/12/2023.
//
// Librerías
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Constantes de mensajes
#define MENSAJE "Introduzca las constantes solicitadas de una ecuación de segundo grado (Ax^2+Bx+C=0):"
#define SOLUCION "La solución a la ecuación es: "
#define NOSOLUCION "La ecuación no tiene una solución real."

// Definiciones
typedef struct {
    float A, B, C;
} Coeficientes;

typedef float sol[2];

// Definición funciones
Coeficientes pedirCoef();

void resolverEq(Coeficientes coef, sol x);

bool comprobacionEq(Coeficientes coef, sol x);

// Main
int main() {
    Coeficientes coef;
    sol x;

    puts(MENSAJE);
    coef = pedirCoef();
    resolverEq(coef, x);

    if (comprobacionEq(coef, x)) printf(SOLUCION"%.2f y/o %.2f", x[0], x[1]);
    else printf(NOSOLUCION);

    return 0;
}

// Declaración Funciones
Coeficientes pedirCoef() {
    Coeficientes aux;

    printf("A: ");
    scanf("%f", &aux.A);
    printf("B: ");
    scanf("%f", &aux.B);
    printf("C: ");
    scanf("%f", &aux.C);

    return aux;
}

void resolverEq(Coeficientes coef, sol x) {
    float raiz;

    raiz = sqrtf(powf(coef.B, 2) - 4 * coef.A * coef.C);
    x[0] = (-coef.B + raiz) / (2 * coef.A);
    x[1] = (-coef.B - raiz) / (2 * coef.A);
}

bool comprobacionEq(Coeficientes coef, sol x) {
    if (coef.A * powf(x[0], 2) + coef.B * x[0] + coef.C == 0 &&
        coef.A * powf(x[1], 2) + coef.B * x[1] + coef.C == 0)
        return true;
    else return false;
}
