// SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>

#define IRPF 0.15
// SINTETIZO LA FÓRMULA DEL ENUNCIADO x: sueldo y: hijos
#define descuentohijos(x,y) (x * IRPF * (y * 0.10))

int main() {
    int nhijosmenores;
    float sueldoanualbruto, descuentoirpf;

    // INPUT
    puts("Calculador de descuento de del IRPF");
    printf("Introduzca su salario anual bruto (en euros): ");
    scanf(" %f", &sueldoanualbruto);
    printf("Introduzca el número de hijos/as mayores de 18 años a su cargo: ");
    scanf(" %d", &nhijosmenores);

    // OUTPUT
    printf("IRPF (15%%): %.2f€\n", sueldoanualbruto * IRPF);
    switch (nhijosmenores) {
        case 0: // VOY A SUPONER QUE EL USURARIO NO VA A INTRODUCIR HIJOS NEGATIVOS
            descuentoirpf = 0;
            printf("Carece de reducción del IRPF por hijos/as a su cargo.\n");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            descuentoirpf = descuentohijos(sueldoanualbruto,nhijosmenores);
            printf("Reducción debida a hijos/as a cargo: %.2f€\n",descuentoirpf);
            break;
        default: // SÍ TIENE MÁS DE 4 O MÁS HIJOS
            descuentoirpf = descuentohijos(sueldoanualbruto,5); // DESCUENTO MÁXIMO (5 HIJOS)
            printf("Reducción debida a hijos/as a cargo: %.2f€\n",descuentoirpf);
    }
    printf("Total anual a pagar: %.2f€\n", sueldoanualbruto * IRPF - descuentoirpf);

    return 0;
}