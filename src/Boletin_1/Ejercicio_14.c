// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
#include <time.h> // PARA PONER LA FECHA ACTUAL

#define conversionfac(x) ((x - 32) * 5 / 9) // Fórmula de conversión de Fahrenheit a Grados Centígrados

int main() {
    char ciudad[25];
    int dia, mes, year; // USADO PARA LA FECHA
    float tmaxc, tminc, tmaxf, tminf; // T Máxima y Min. en ºC y en ºF

    // INPUT
    puts("Introduzca los datos solicitados para crear una tabla de temperaturas: ");
    printf("\tNombre de tu ciudad: ");
    scanf("%s", ciudad);
    printf("\t¡RECUERDE TEMPERATURAS EN FAHRENHEIT!\n");
    printf("\tTemperatura Máxima de Hoy: ");
    scanf("%f", &tmaxf);
    printf("\tTemperatura Mínima de Hoy: ");
    scanf("%f", &tminf);

    // OBTENER EL TIEMPO ACTUAL
    time_t now; // TIEMPO ARITMÉTICO
    time(&now); // OBTENER TIEMPO DEL RELOJ DEL SISTEMA
    struct tm *local = localtime(&now); // CONVERTIR A TIEMPO LOCAL
    dia = local->tm_mday;            // Día del mes (1 a 31)
    mes = local->tm_mon + 1;      // Mes del año (0 a 11)
    year = local->tm_year + 1900;   // Años desde 1900

    // CONVERSIÓN DE ºF A ºC
    tmaxc = conversionfac(tmaxf);
    tminc = conversionfac(tminf);

    // OUTPUT
    printf("-------------------------------------------------- %s %02d/%02d/%4d --------------------------------------------------\n",
           ciudad, dia, mes, year);
    printf("\t\t\t\t\t\t\t\t\tTMax ºF\t\tTMin ºF\t\tTMax ºC\t\tTMin ºC\n");
    printf("\t\t\t\t\t\t\t\t\t%.1f ºF\t\t%.1f ºF\t\t%.1f ºC\t\t%.1f ºC\t\t\n", tmaxf, tminf, tmaxc, tminc);
    printf("---------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
