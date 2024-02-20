// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    char caracter;

    printf("Introduzca un caracter (R,C,P o A):\n");
    scanf("%c",&caracter);

    while(caracter!='A')
        switch (caracter) {
        case 'R':case 'r':
            printf("Ahora dibujaria un rectangulo\n");
            printf("Introduzca un caracter (R,C,P o A):\n");
            scanf(" %c",&caracter);
            break;
        case 'C':case 'c':
            printf("Ahora dibujaria un cuadrado\n");
            printf("Introduzca un caracter (R,C,P o A):\n");
            scanf(" %c",&caracter);
            break;
        case 'P':case 'p':
            printf("Ahora dibujaria un pentagono\n");
            printf("Introduzca un caracter (R,C,P o A):\n");
            scanf(" %c",&caracter);
            break;
        default:
            printf("Introduzca un caracter valido:\n");
            scanf(" %c",&caracter);
    }
    if (caracter='A'){
        printf("Ahora se acabo el programa");
    }
}