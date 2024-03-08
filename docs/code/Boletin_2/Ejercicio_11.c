// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <math.h>

int main () {
    // Este ejercicio es literalmente el mismo que el Ejercicio 7, así que Ctrl + C y Ctrl + V
    float a, b, c;
    float radicando, raiz1, raiz2, parteentera, parteimaginaria;
    int caso;

    // IN
    puts("Programa para resolver ecuaciones de segundo grado:");
    printf("Introduzca las constantes de la función, tal que: a*x^2 + b*x + c = 0 (a,b,c): ");
    scanf(" %f %f %f", &a, &b, &c);


    // CÁLCULO
    // (-b +- sqrt(b**2 - 4 * a * c)) / (2 * a)
    radicando = powf(b, 2) - 4 * a * c;
    // CADA CASO
    // caso = 0 raíz de cero (raíz real doble)
    // caso = 1 raíz de un positivo (dos raíces reales y distintas)
    // caso = 2 raíz de un negativo (compleja conjugada)
    if (radicando == 0) {
        caso = 0;
    } else {
        if (radicando > 0) {
            caso = 1;
        } else {
            caso = 2;
        }
    }

    switch (caso) {
        case 0:     // RAÍZ REAL DOBLE
            raiz1 = (-b+sqrtf(radicando))/(2*a*b);
            printf("La función tiene dos raíces reales dobles por lo tanto ambas valen %.210f",raiz1);
            break;
        case 1:     // DOS RAÍCES REALES Y DISTINTAS
            raiz1 = (-b+sqrtf(radicando))/(2*a*b);
            raiz2 = (-b-sqrtf(radicando))/(2*a*b);
            printf("La función tiene dos raíces reales y distintas. Un de ellas vale %.2f y la otra %.2f",raiz1,raiz2);
            break;
        case 2:     // COMPLEJA CONJUGADA
            // PARTO LA FUNCIÓN EN PARTE REAL E IMAGINARIA
            parteentera = (-b/(2*a*b));
            parteimaginaria = (sqrtf(-radicando)/(2*a*b));
            printf("La función tiene dos raíces complejas conjugadas. Una de ellas vale %.2f + %.2fi y la otra %.2f - %.2fi.",parteentera,parteimaginaria,parteentera,parteimaginaria);
            break;
        default:

    }


    return 0;
}