//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que empleando expresiones,
 *       convierta un tiempo expresado en segundos al formato horas : minutos :
 *       segundos.
 * in: SEGUNDOS
 * out: HORAS:MINUTOS:SEGUNDOS
 * NOTA1:
 */

int main() {
    int total, horas, minutos, segundos, resto;

    // INPUT
    printf("Introduzca el tiempo en segundos que desea convertir al formato \"HH:MM:SS\": ");
    scanf("%d", &total);

    // CÁLCULO

    horas = total / 3600; // DIVISIÓN DE ENTEROS, SIN RESTOS
    minutos = total / 60 - horas * 60;
    segundos = total - minutos * 60 - horas * 3600;

    /* // otra opción, la acabo de dar en clase
    horas = total / 3600;
    resto = total % 3600; // Acarreo el resto de la división, es decir, el módulo :)
    minutos = resto / 60;
    segundos = resto % 60;
    */

    // OUTPUT
    printf("El tiempo, en el nuevo formato, es el siguiente: %02dh:%02dm:%02ds",horas,minutos,segundos);

    return 0;
}
