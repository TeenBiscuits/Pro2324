// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
void Esmayuscula(char caracter){
    if (65<= (int)caracter && (int)caracter<=90) {
            printf("El caracter %c esta en mayuscula",caracter);
    }
    else if(97<=(int)caracter && (int)caracter<=122){
        printf("El caracter %c esta en minuscula",caracter);
    }
    else{
        printf("El caracter %c no es una letra",caracter);
    }
}
int main(){
    char caracter;
    printf("Introduzca el caracter que desea evaluar:\n");
    scanf("%c",&caracter);
    Esmayuscula(caracter);
}