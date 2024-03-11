// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
void Esdigito(char caracter){
    switch (caracter) {
        case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
            printf("El caracter %c es un digito",caracter);
            break;
        default:
            printf("El caracter %c no es un digito",caracter);
    }
}
int main(){
    char caracter;
    printf("Introduzca el caracter que desea evaluar:\n");
    scanf("%c",&caracter);
    Esdigito(caracter);
}