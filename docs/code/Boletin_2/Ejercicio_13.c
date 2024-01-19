//
// Created by pablo on 25/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C para clasificar triángulos en
 *       función de las longitudes de sus lados, que se solicitarán por teclado, de forma
 *       que se indique por pantalla si el triángulo es equilátero (todos los lados iguales),
 *       isósceles (dos lados iguales) o escaleno (todos los lados diferentes).
 * in: TRES NÚMEROS ENTEROS
 * out: INPUT VÁLIDO, SE PUEDE FORMAR TRIÁNGULO, TIPO DEL TRIÁNGULO SEGÚN ÁNGULO Y LADOS.
 * NOTA1:
 */

// YA TENÍA EL CÓDIGO HECHO DE UNA PRÁCTICA QUE HICIMOS EN CLASE
#include <stdio.h>
# include <math.h> // HACER SENOS Y COSENOS SIN ESTO ES DIFÍCIL

# define PI 3.14159265358979323846

int main() {
    int a, b, c, continuar, correct, antiinf;
    int menor, medio, mayor;    // PARA EL APARTADO 2
    int clado, cangulo;         // PARA EL APARTADO 3
    float A, B, C;              // PARA EL APARTADO 3
    continuar = 1;
    antiinf = 1;

    while (continuar != 4) {
        // INPUT
        puts("Introduzca tres números enteros cualesquiera, serán utilizados para tratar\nde construir un tríangulo.");
        correct = 0;
        printf("\tTres números (a b c): ");
        correct = scanf("%d %d %d", &a, &b, &c); // A n se le asignaran el número de entradas válidas.
        // printf("%d valores correctos leídos.", correct);
        switch (continuar) {
            case 1: // 1) INPUT VÁLIDO
                if (correct != 3) {
                    printf("\n¡Input no válido, introduzca enteros! Número de valores correctos leídos: %d", correct);
                    continuar = 1;
                    break;
                } else {
                    if (a * b <= 0 || b * c <= 0) {
                        // Lo hago con dos bucles porque multiplicar valores incorrectos puede resultar en bucles infinitos.
                        printf("\n¡Input no válido, introduzca enteros! Recuerde que no hay triángulos de longitud negativa o 0.\n\n");
                        continuar = 1;
                        break;
                    } else {
                        //printf("\n\nX\n\n"); USADO PARA DEBUG EL CÓDIGO
                    }
                }
            case 2: // 2) Teorema de la existencia de los triángulos
                // | b - c | < a < b + c
                // Podría usar la biblioteca de matemáticas para hacer esto o reciclar mi código de organizar números de mayor a menor
                if (a < b) {
                    menor = a;
                    mayor = b;
                } else {
                    menor = b;
                    mayor = a;
                }
                if (c < menor) {
                    medio = menor;
                    menor = c;
                } else {
                    if (c < mayor) {
                        medio = c;
                    } else {
                        medio = mayor;
                        mayor = c;
                    }
                }
                if (menor + medio > mayor) {
                    //printf("\n\nY\n\n"); USADO PARA DEBUG EL CÓDIGO
                } else {
                    printf("\n¡Input no válido! No se puede construir un triangulo con esos valores.\n (Teorema de la existencia de los triángulos).\n\n");
                    continuar = 1;
                    break;
                }
            case 3: // 3) Clasificar el triángulo
                // printf("\n\nZ\n\n"); USADO PARA DEBUG EL CÓDIGO
                // CLASIFICACIÓN POR LADO
                // EQUILÁTERO:  1
                // ISÓSCELES:   2
                // ESCALENO:    3
                clado = 0;
                if (mayor == menor) {                       // EQUILÁTERO
                    clado = 1;
                } else {
                    if (mayor == medio || medio == menor) { // ISÓSCELES
                        clado = 2;
                    } else {                                // ESCALENO
                        clado = 3;
                    }
                }
                // CLASIFICACIÓN POR ÁNGULO
                // RECTÁNGULO   ( 90º): 1
                // ACUTÁNGULO   (<90º): 2
                // OBTUSÁNGULO  (>90º): 3
                cangulo = 0;
                // Usando la ley de los cosenos: c^2 = a^2 + b^2 - 2ab * cos(C)
                // Y los paso de radianes a grados
                C = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180 / PI;
                A = acos((pow(c, 2) + pow(b, 2) - pow(a, 2)) / (2 * c * b)) * 180 / PI;
                B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * c * a)) * 180 / PI;
                // printf("Ángulos: A: %.2fº B: %.2fº C: %.2fº", A, B, C); // Usado para debug del código
                if (A == 90 || B == 90 || C == 90) {        // RECTÁNGULO
                    cangulo = 1;
                } else {
                    if (A > 90 || B > 90 || C > 90) {       // OBTUSÁNGULO
                        cangulo = 3;
                    } else {                                // ACUTÁNGULO
                        cangulo = 2;
                    }
                }
                continuar = 4;
            default:

        }

        antiinf = antiinf + 1;
        if (antiinf > 100) {
            continuar = 4;
        } else {
            //printf("Repetición = %d\n",antiinf);
        }
    }

    if (antiinf > 100) {
        printf("¡Anti repeticiones infinitas activado!");
        // USO ESTO PORQUE A VECES ME CONFUNDÍA METÍA MAL UN DATO Y PASO DE QUE MI ORDENADOR SE SOBRECALIENTE
    } else {
        printf("El tríangulo introducido (a: %d b: %d c: %d), ",a,b,c);
        switch (clado) {
            case 1:
                printf("es un triángulo equilátero ");
                break;
            case 2:
                printf("es un triángulo isósceles ");
                break;
            case 3:
                printf("es un tríangulo escaleno ");
                break;
            default:

        }
        switch (cangulo) {
            case 1:
                printf("y rectángulo (A: %.2fº B: %.2fº C: %.2fº).",A,B,C);
                break;
            case 2:
                printf("y obtusángulo (A: %.2fº B: %.2fº C: %.2fº).",A,B,C);
                break;
            case 3:
                printf("y acutángulo (A: %.2fº B: %.2fº C: %.2fº).",A,B,C);
                break;
            default:

        }
    }
    return 0;
}