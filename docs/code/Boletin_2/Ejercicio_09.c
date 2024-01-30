//
// Created by pablo on 20/10/2023.
//
#include <stdio.h>
#include <stdbool.h>
#include <time.h> // PARA OBTENER EL TIEMPO ACTUAL

int main() {
    int DD, MM, AAAA, FEBRERO; // PARA FECHA DE NACIMIENTO
    int diaactual, mesactual, anoactual; // PARA FECHA ACTUAL
    int edad; // LA EDAD
    bool incorrecto = true;
    // CONSEGUIR LOCAL TIME
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    anoactual = tm.tm_year + 1900; // AÑOS TRANSCURRIDOS DESDE EL 1900
    mesactual = tm.tm_mon + 1; // ENERO ES EL MES CERO
    diaactual = tm.tm_mday; // DÍA

    // USADO PARA DEBUG
    //printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    //printf("ahora: %d/%d/%d\n",anoactual,mesactual,diaactual);

    // INPUT
    puts("\t\t\t\t\t\t[ Calculadora de edad ]");

    // ESTA SECCIÓN DEL CÓDIGO ESTÁ COPIADA DEL EJERCICIO 8
    // INICIALIZO VARIABLE
    FEBRERO = 28;
    // BUCLE DE INPUT
    do {
        printf("\nIntroduzca su fecha de nacimiento en el formato especificado (DD/MM/AAAA): ");
        scanf("%d / %d / %d", &DD, &MM, &AAAA);
        if (0 < DD && 0 < MM && 1578 < AAAA) {
            // Tiene que ser un año de después del establecimiento del Calendario Gregoriano

            // CÁLCULO DE SI ES UN AÑO BISIESTO
            if (AAAA % 4 == 0) {
                if (AAAA % 100 == 0) {
                    if (AAAA % 400 == 0) {
                        FEBRERO = 29;
                    } else {
                        FEBRERO = 28;
                    }
                } else {
                    FEBRERO = 29;
                }
            } else {
                FEBRERO = 28;
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
        if (AAAA > anoactual || AAAA == anoactual && ((MM > mesactual) || (MM == mesactual && DD > diaactual))) {
            // SI LA FECHA ES EN EL FUTURO, SENTENCIA LÓGICA BASTANTE LARGA, EVITAR QUE SE SALGA DEL BUCLE
            printf("¿Naciste en el futuro o que lo que?"); // Me hacía gracia :)
            incorrecto = true;
        }
    } while (incorrecto);

    edad = anoactual - AAAA - 1; // RESTAMOS EL AÑO DE NACIMIENTO AL ACTUAL - 1

    // COMPROBAMOS SI YA HA SIDO SU CUMPLEAÑOS
    if ((MM < mesactual) || (MM == mesactual && DD < diaactual)) {
        edad = edad + 1; // SUMAMOS YA QUE YA FUÉ SU CUMPLEAÑOS
        if (MM == mesactual && DD == diaactual) { // SI COINCIDE LA FECHA FELICITAR CUMPLEAÑOS
            printf("\n¡Feliz Cumpleaños! Tienes %d años.", edad);
        } else {
            printf("Tienes %d años.", edad);
        }
    } else {
        printf("Tienes %d años.", edad);
    }

    return 0;
}
