//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que solicite el precio de un
 *       producto (sin IVA) y proporcione por pantalla el importe total del producto con
 *       IVA incluido. Suponga un IVA constante del 24% para todos los productos.
 * in: PRECIO DEL PRODUCTO SIN IVA
 * out: PRODUCTO CON IVA
 * NOTA1:
 */
# define IVA 0.24

int main() {
    float precioi, preciof;
    // INPUT
    printf("Indique a continuación el precio sin IVA de su producto: ");
    scanf("%f", &precioi);

    // CÁLCULO
    preciof = precioi * (1 + IVA);

    // OUTPUT
    printf("El precio de su producto con IVA es %.2f €.", preciof);

    return 0;
}
