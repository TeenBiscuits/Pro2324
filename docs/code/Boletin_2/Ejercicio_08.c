//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
#include <stdbool.h>

int main() {
    int DD, MM, AAAA, dias, FEBRERO, diasano;
    bool incorrecto = true;
    // INPUT
    // INICIALIZO VARIABLES
    dias = 0;
    FEBRERO = 28;
    diasano = 365;
    // BUCLE DE INPUT
    do {
        printf("\nIntroduzca la fecha actual en el formato especificado (DD/MM/AAAA): ");
        scanf("%d / %d / %d", &DD, &MM, &AAAA);
        if (0 < DD && 0 < MM &&
            1578 < AAAA) { // Tiene que ser un año de después del establecimiento del Calendario Gregoriano

            // CÁLCULO DE SI ES UN AÑO BISIESTO
            if (AAAA % 4 == 0) {
                if (AAAA % 100 == 0) {
                    if (AAAA % 400 == 0) {
                        FEBRERO = 29;
                        diasano = 366;
                    } else {
                        FEBRERO = 28;
                        diasano = 365;
                    }
                } else {
                    FEBRERO = 29;
                    diasano = 366;
                }
            } else {
                FEBRERO = 28;
                diasano = 365;
            }

            switch (MM) { // COMPROBACIÓN DE DÍAS DE CADA MES
                // MESES CON 30 DÍAS (NOVIEMBRE, SEPTIEMBRE, JUNIO, ABRIL)
                case 11:
                case 6:
                case 4:
                    if (0 < DD && DD <= 30) {
                        incorrecto = false;
                    } else { // TIENE UN DÍA NO VÁLIDO PARA ESE MES
                        printf("¡Fecha no válida! (Código de error: Introducido un día incorrecto en un mes de 30 días.)");
                    }
                    break;
                    // MESES CON 31 DÍAS (DICIEMBRE, OCTUBRE, AGOSTO, JULIO, MAYO, MARZO, ENERO)
                case 12:
                case 10:
                case 8:
                case 7:
                case 5:
                case 3:
                case 1:
                    if (0 < DD && DD <= 31) {
                        incorrecto = false;
                    } else { // TIENE UN DÍA NO VÁLIDO PARA ESE MES
                        printf("¡Fecha no válida! (Código de error: Introducido un día incorrecto en un mes de 31 días.)");
                    }
                    break;
                    // FEBRERO Y LOS BISIESTOS
                case 2:
                    if (0 < DD && DD <= FEBRERO) {
                        incorrecto = false;
                    } else { // FECHA NO VÁLIDA DD < DÍAS QUE TIENE FEBRERO ESE AÑO
                        printf("¡Fecha no válida! (Código de error: Introducido un día incorrecto en un mes de %d días.)",
                               FEBRERO);
                    }
                    break;
                default:
                    printf("¡Fecha no válida! (Código de error: Introducido un mes no válido.)");
            }
        } else {
            printf("¡Fecha no válida! (Código de error: Debe ser una fecha válida del calendario gregoriano.)");
        }
    } while (incorrecto);

    // CÁLCULO
    // CÁLCULO DE DÍAS POR MES
    switch (MM) {
        case 12:    // NOVIEMBRE 30
            dias = dias + 30;
        case 11:    // OCTUBRE 31
            dias = dias + 31;
        case 10:     // SEPTIEMBRE 30
            dias = dias + 30;
        case 9:     // AGOSTO 31
            dias = dias + 31;
        case 8:     // JULIO 31
            dias = dias + 31;
        case 7:     // JUNIO 30
            dias = dias + 30;
        case 6:     // MAYO 31
            dias = dias + 31;
        case 5:     // ABRIL 30
            dias = dias + 30;
        case 4:     // MARZO 31
            dias = dias + 31;
        case 3:     // FEBRERO 28/29
            dias = dias + FEBRERO;
        case 2:     // ENERO 31
            dias = dias + 31;
        default:
    }

    // SUMO LOS DÍAS DEL MES EN CURSO AL TOTAL
    dias = dias + DD;

    // OUTPUT
    printf("La fecha introducida corresponde al día %d del año en curso. (Levamos un %.2f%% del año en curso %d/%d)",
           dias, (dias / (float) diasano * 100), dias, diasano);

    return 0;
}
