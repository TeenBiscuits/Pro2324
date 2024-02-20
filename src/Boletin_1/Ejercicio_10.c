// SPDX-FileCopyrightText: 2023 Pablo Portas López
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>

#define productoescalar(vx1,vy1,vz1,vx2,vy2,vz2) ((vx1*vx2)+(vy1*vy2)+(vz1*vz2))

int main() {
    int x1, y1, z1, x2, y2, z2; // VOY A SUPONER QUE SOLO PUEDE HABER COORDENADAS ENTERAS

    // INPUT

    puts("Introduzca las coordenadas de los vectores para calcular el producto escalar\nde ambos:");
    printf("\tCoordenadas del primer vector (x y z): ");
    scanf("%d %d %d",&x1,&y1,&z1);
    printf("\tCoordenadas del segundo vector (x y z): ");
    scanf("%d %d %d",&x2,&y2,&z2);

    // OUTPUT
    printf("\nEl producto escalar de los vectores dados es: %d", productoescalar(x1,y1,z1,x2,y2,z2));

    return 0;
}
