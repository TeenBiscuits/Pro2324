// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    char caracter;
    int error;

    printf("Introduzca los caracteres separados por espacios:\n");
    scanf("%c",&caracter);

    while(caracter!='\n'){
        scanf("%c",&caracter);
       if (32<(int)caracter && (int)caracter<48 || 57<(int)caracter && caracter <65 || 90<caracter && caracter<97 || 122<caracter && caracter<=127) {
          error++;
        }
    }

    printf("La cantidad de errores es: %d",error);

    return 0;
}
