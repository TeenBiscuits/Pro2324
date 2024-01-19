//
// Created by Pablo on 30/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que admita un carácter
 *       (introducido por teclado) y muestre por pantalla si es una vocal, una
 *       consonante, un dígito o un carácter especial.
 * in:
 * out:
 * NOTA1:
 */
#include <stdio.h>

int main() {
    char c;

    printf("Introduzca un carácter: ");
    scanf("%c", &c);

    // printf("%c\n",c); // USADO PARA DEBUG
    //c = (int) c; // CONVERSIÓN A ENTERO DE LA TABLA ASCII
    // printf("%d\n",c); // USADO PARA DEBUG

    if ((65 <= (int) c && (int) c <= 90) || (97 <= (int) c && (int) c <= 122)) { // LETRA
        switch ((int) c) {
            case 65: // A
            case 97: // a
            case 69: // E
            case 101: // e
            case 73: // I
            case 105: // i
            case 79: // O
            case 111: // o
            case 85: // U
            case 117: // u
                printf("\t\t\t%c es una vocal", c);
                break;
            default:
                printf("\t\t\t%c es una consonante", c);
                break;
        }
    } else {
        if (48 <= (int) c && (int) c <= 57) { // DÍGITO
            printf("\t\t\t%c es un dígito", c);
        } else { // CARÁCTER ESPECIAL
            printf("\t\t\t%c es un carácter especial", c);
        }
    }

    return 0;
}