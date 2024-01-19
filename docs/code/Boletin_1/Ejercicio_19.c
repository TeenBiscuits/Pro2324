//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en LENGUAJE C para controlar la compra
 *       diaria. El programa debe pedir los kilos de patatas comprados y su precio sin
 *       IVA, los kilos de manzanas comprados y su precio sin IVA y cuánto ha pagado
 *       por un libro que se ha comprado, sin IVA. Suponga que el IVA de los productos
 *       alimenticios es del 21% y de los productos de cultura 10%. Muestre por pantalla
 *       el importe de cada producto y el importe total de la compra según se indica en
 *       el ejemplo:
 * in: KILOS DE MANZANA Y DE PATATA, PRECIO (KILO) SIN IVA DE MANZANA, PATATA Y PRECIO SIN IVA LIBRO
 * out:
 *
 * --------------------------------------------------------------------------------------- Ticket 1/1
 * Patatas              7 kg                0.69€               4.83€               5.84€   (IVA 21%)
 * Manzanas             4 kg                1.23€               4.92€               5.95€   (IVA 21%)
 * Libro                1                   19€                 19€                 20.90€  (IVA 10%)
 * --------------------------------------------------------------------------------------------------
 * TOTAL                                                                                       32.69€
 *
 * NOTA1:
 */
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
