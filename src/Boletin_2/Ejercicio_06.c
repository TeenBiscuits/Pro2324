//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

#define porcentaje(x, y) ( x / (float) y * 100)

int main() {
    int total, correctas;

    // INPUT
    puts("Conteste a las siguiente preguntas sobre el test realizado:");
    printf("\tCantidad total de preguntas: ");
    scanf("%d", &total);
    printf("\tCantidad de preguntas contestadas correctamente: ");
    scanf("%d", &correctas);

    // OUTPUT
    printf("Tiene usted ");
    if (porcentaje(correctas, total) >= 90) {
        printf("un Nivel Máximo.");
    } else {
        if (porcentaje(correctas, total) >= 75) {
            printf("un Nivel Medio.");
        } else {
            if (porcentaje(correctas, total) >= 50) {
                printf("un Nivel Regular.");
            } else {
                if (porcentaje(correctas, total) < 50) {
                    printf("un Nivel Insuficiente.");
                }
            }
        }
    }
    printf("\n");


    return 0;
}
