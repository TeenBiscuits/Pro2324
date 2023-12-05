//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que calcule el producto
 *       escalar de dos vectores en el espacio euclídeo.
 *       NOTA: Pruebe durante la ejecución a introducir los valores numéricos separados por
 *       el carácter tabulador, por la barra espaciadora y/o por el carácter <enter>, y observe
 *       que ocurre.
 * in: COORDENADAS DEL PRIMER VECTOR, COORDENADAS DEL SEGUNDO VECTOR
 * out: RESULTADO DEL PRODUCTO ESCALAR
 * NOTA1:
 */
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
