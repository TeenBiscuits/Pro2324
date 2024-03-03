// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

#define IVA 0.21
#define IVAC 0.10
#define precioiva(x) (x * (1+IVA))
#define precioivac(x) (x * (1+IVAC))

int main() {
    float kilospatata, preciopatata, totalpreciopatata, kilosmanzana, preciomanzana, totalpreciomanzana, preciolibro, total;

    // INPUT
    puts("Introduzca a continuación los datos solicitados para realizar el ticket de la compra: ");
    printf("\tLos kilos de patata que ha comprado y el precio actual del kilo de patata (sin IVA): ");
    scanf("%f %f", &kilospatata, &preciopatata);
    printf("\tLos kilos de manzana que ha comprado y el precio actual del kilo de manzana (sin IVA): ");
    scanf("%f %f", &kilosmanzana, &preciomanzana);
    printf("\tEl precio del libro que ha comprado (sin IVA): ");
    scanf("%f", &preciolibro);

    // CALCULO
    totalpreciomanzana = preciomanzana * kilosmanzana;
    totalpreciopatata = preciopatata * kilospatata;
    total = precioiva(totalpreciopatata) + precioiva(totalpreciomanzana) + precioivac(preciolibro);
    // USO UNA FUNCIÓN PORQUE ME DA PEREZA DECLARAR TRES VARIABLES MÁS Y ESTO YA LO TENÍA ESCRITO

    // OUTPUT
    printf("\n--------------------------------------------------------------------------------------- Ticket 1/1\n");
    printf("Patatas\t\t\t\t%.1f kg\t\t\t\t%.2f€\t\t\t\t%.2f€\t\t\t\t%.2f€\t (IVA 21%%)\n", kilospatata, preciopatata,
           totalpreciopatata,
           precioiva(totalpreciopatata));
    printf("Manzanas\t\t\t%.1f kg\t\t\t\t%.2f€\t\t\t\t%.2f€\t\t\t\t%.2f€\t (IVA 21%%)\n", kilosmanzana, preciomanzana,
           totalpreciomanzana,
           precioiva(totalpreciomanzana));
    printf("Libro\t\t\t\t1\t\t\t\t\t%.2f€\t\t\t\t%.2f€\t\t\t\t%.2f€\t (IVA 10%%)\n", preciolibro, preciolibro,
           precioivac(preciolibro));
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("TOTAL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%.2f€\n", total);


    return 0;
}
