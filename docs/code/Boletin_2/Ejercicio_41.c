//
// Created by santi on 29/10/2023.
//
#include <stdio.h>
#include <math.h>

int main() {
    int contador = 0;
    int x, y, z;

    for (x = 1; contador < 1000; x++) {
        for (y = 1; y <= x; y++) {
            z = x * x + y * y;
            int sqrt_z = sqrt(z);

            if (sqrt_z * sqrt_z == z) {
                printf("(%d, %d, %d)\n", x, y, sqrt_z);
                contador++;
            }
        }
    }

    return 0;
}
