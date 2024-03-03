// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only
// Librerías
#include <stdio.h>
#include <stdbool.h>

// Constantes
typedef struct {
    int DD, MM, AAAA;
} tRegFecha;

// Definiciones
#define MENSAJE "Introduzca su fecha de nacimiento en el formato especificado (DD/MM/AAAA): "
#define FORMATO "%d / %d / %d"
#define FNOVALIDA "¡Fecha no válida!"
#define FERROR "Código de error: "
#define ERRORCODE0 "Debe ser una fecha válida del calendario gregoriano."
#define ERRORCODE1 "Introducido un día incorrecto en un mes de %d días."
#define ERRORCODE2 "Introducido un mes no válido."

// Definición funciones
tRegFecha introducirFecha();

bool esFechaCorrecta(tRegFecha fecha);

// Main
int main() {
    tRegFecha fecha;

    do fecha = introducirFecha();
    while (esFechaCorrecta(fecha) == false);

    return 0;
}

// Declaración Funciones
tRegFecha introducirFecha() {
    tRegFecha aux;

    printf("\n"MENSAJE);
    scanf(FORMATO, &aux.DD, &aux.MM, &aux.AAAA);
    while ((getchar()) != '\n');

    return aux;
}

bool esFechaCorrecta(tRegFecha fecha) {
    // ESTA SECCIÓN DEL CÓDIGO FUÉ ADAPTADA DEL EJERCICIO 8, BOLETÍN 2.

    if (0 < fecha.DD && 0 < fecha.MM && 1578 < fecha.AAAA) {
        // Tiene que ser un año de después del establecimiento del Calendario Gregoriano

        // CÁLCULO DE SI ES UN AÑO BISIESTO
        int FEBRERO;
        if (fecha.AAAA % 4 == 0) {
            if (fecha.AAAA % 100 == 0) {
                if (fecha.AAAA % 400 == 0) {
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

        // COMPROBACIÓN DE DÍAS DE CADA MES
        switch (fecha.MM) {
            // MESES CON 30 DÍAS (NOVIEMBRE, SEPTIEMBRE, JUNIO, ABRIL)
            case 11:
            case 6:
            case 4:
                if (0 < fecha.DD && fecha.DD <= 30) {
                    return true;
                } else { // TIENE UN DÍA NO VÁLIDO PARA ESE MES
                    printf(FNOVALIDA" ("FERROR ERRORCODE1")", 30);
                    return false;
                }
                // MESES CON 31 DÍAS (DICIEMBRE, OCTUBRE, AGOSTO, JULIO, MAYO, MARZO, ENERO)
            case 12:
            case 10:
            case 8:
            case 7:
            case 5:
            case 3:
            case 1:
                if (0 < fecha.DD && fecha.DD <= 31) {
                    return true;
                } else { // TIENE UN DÍA NO VÁLIDO PARA ESE MES
                    printf(FNOVALIDA" ("FERROR ERRORCODE1")", 31);
                    return false;
                }
                // FEBRERO Y LOS BISIESTOS
            case 2:
                if (0 < fecha.DD && fecha.DD <= FEBRERO) {
                    return true;
                } else { // FECHA NO VÁLIDA DD < DÍAS QUE TIENE FEBRERO ESE AÑO
                    printf(FNOVALIDA" ("FERROR ERRORCODE1")", FEBRERO);
                    return false;
                }
            default:
                printf(FNOVALIDA" ("FERROR ERRORCODE2")");
                return false;
        }

    } else {
        printf(FNOVALIDA" ("FERROR ERRORCODE0")");
        return false;
    }

}