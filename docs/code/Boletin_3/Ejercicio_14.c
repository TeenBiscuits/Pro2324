//
// Created by Pablo on 10/12/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente en Lenguaje C un programa que calcule la impedancia
 *       (Z) en ohmios de un circuito LC en serie. Tenga en cuenta que Z = XL - XC .
 *       Donde XC es la reactancia capacitiva y XL la reactancia inductiva. Implemente
 *       las funciones apropiadas para los cálculos, y pruebe su funcionamiento,
 *       activándolas desde el programa principal. Pídale al usuario el valor del
 *       condensador en faradios, el valor de la inductancia en henrios y el valor de la
 *       frecuencia en hertzios para los cálculos de las reactancias.
 * in: Inductancia en henrios, condensador en faradios, frecuencia en hercios
 * out: Reactancia Inductiva (XL), Reactancia Capacitiva (XC) e Impedancia (Z)
 */

// PARA HACER ESTE EJERCICIO HACEN FALTA CONOCIMIENTOS EN ELECTRÓNICA BÁSICA!!!

// Librerías
#include <stdio.h>

// Constantes
#define PI 3.141592

// Definición funciones
void pedirDatosPorTeclado(float *inductancia, float *capacidad, float *frecuencia);

float calcularXL(float inductancia, float frecuencia);

float calcularXC(float capacidad, float frecuencia);

float calcularImpedancia(float XL, float XC);

void mostrarDatosPorPantalla(float XL, float XC, float Impedancia);


// Main
int main() {
    float inductancia, capacidad, frecuencia;
    pedirDatosPorTeclado(&inductancia, &capacidad, &frecuencia);

    mostrarDatosPorPantalla(calcularXL(inductancia, frecuencia), calcularXC(capacidad, frecuencia),
                            calcularImpedancia(calcularXL(inductancia, frecuencia), calcularXC(capacidad, frecuencia)));
    return 0;
}

// Declaración Funciones
void pedirDatosPorTeclado(float *inductancia, float *capacidad, float *frecuencia) {
    printf("Ingrese el valor de la inductancia en henrios: ");
    scanf("%f", inductancia);
    printf("Ingrese el valor del condensador en faradios: ");
    scanf("%f", capacidad);
    printf("Ingrese el valor de la frecuencia en hertzios: ");
    scanf("%f", frecuencia);
}

// Función para calcular la reactancia inductiva (XL)
float calcularXL(float inductancia, float frecuencia) {
    float aux = 2 * PI * frecuencia * inductancia;
    return aux;
}

// Función para calcular la reactancia capacitiva (XC)
float calcularXC(float capacidad, float frecuencia) {
    float aux = 1 / (2 * PI * frecuencia * capacidad);
    return aux;
}

// Función para calcular la impedancia (Z)
float calcularImpedancia(float XL, float XC) {
    float aux = XL - XC;
    return aux;
}

void mostrarDatosPorPantalla(float XL, float XC, float impedancia) {
    printf("\nSolución\n");
    printf("Reactancia Inductiva (XL): %.2f ohmios\n", XL);
    printf("Reactancia Capacitiva (XC): %.2f ohmios\n", XC);
    printf("Impedancia (Z): %.2f ohmios\n", impedancia);
}