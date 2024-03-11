// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
int Esmayuscula(char caracter){
    if (65<= (int)caracter && (int)caracter<=90) {
        return 1;
    }
    else{
        return 0;
    }
}
int Esminuscula(char caracter){
    if(97<=(int)caracter && (int)caracter<=122){
        return 1;
    }
    else{
        return 0;
    }
}
int Esdigito(char caracter){
    switch (caracter) {
        case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
            return 1;
        default:
            return 0;
    }
}
int contador(char* frase,int longitud){
    int i;
    int mayusculas;
    int minusculas;
    int digitos;
    for(i=0;i<longitud;i++){
        if(Esmayuscula(frase[i])==1){
            mayusculas++;
        }
        else if(Esminuscula(frase[i])==1){
            minusculas++;
        }
        else if(Esdigito(frase[i])==1){
            digitos++;
        }
    }
    printf("El numero de mayusculas es: %d\nEl numero de minusculas es: %d\nEl numero de digitos es:%d",mayusculas,minusculas,digitos);
}
int main(){
    char frase[50];
    int longitud;
    printf("Introduzca la frase que desee sin espacios:\n");
    gets(&frase);
    printf("Introduzca la longitud de la frase:\n");
    scanf("%d",&longitud);
    contador(frase,longitud);
}