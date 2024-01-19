//
// Created by santi on 27/11/2023.
//
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