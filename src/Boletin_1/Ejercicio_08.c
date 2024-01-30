//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

int main() {
    int edad;
    char nombre[20];
    float gcanas, gtransp, gtotal;

    // INPUT

    puts("Indique a continuación los datos solicitados: ");
    printf("Nombre y Edad (Nombre Edad): ");
    scanf("%s %d", nombre, &edad);
    printf("Gasto en Cañas y Gasto en Transporte (G.Cañas G.Transp.): ");
    scanf("%f %f", &gcanas, &gtransp);

    // CÁLCULO RIDÍCULO
    gtotal = gcanas + gtransp,

    // OUTPUT
    printf("\nSu nombre es %s, tiene %d años.\nEl informe de gastos de esta semana es el siguiente:\n\tGasto en Cañas:\t\t\t%.2f €\n\tGasto en Transporte:\t%.2f €\n\t-------------------------------\n\tTotal:\t\t\t\t\t%.2f €",
           nombre, edad, gcanas, gtransp, gtotal);


    return 0;
}
