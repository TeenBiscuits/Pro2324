//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
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
