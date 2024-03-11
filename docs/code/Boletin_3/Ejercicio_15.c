// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
void Esvocal(char caracter){
    switch (caracter) {
        case'A':case'a':case'E':case'e':case'I':case'i':case'O':case'o':case'U':case'u':
            printf("El caracter %c es una vocal",caracter);
            break;
        default:
            printf("El caracter %c no es una vocal",caracter);
    }
}
int main(){
    char caracter;
    printf("Introduzca el caracter que desea evaluar:\n");
    scanf("%c",&caracter);
    Esvocal(caracter);
}