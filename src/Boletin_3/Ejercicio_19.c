// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only

#include <stdio.h>
int Esminuscula(char caracter){
    if(97<=(int)caracter && (int)caracter<=122){
        return 1;
    }
    else{
        return 0;
    }
}
void pasaramayusculas(char* frase,int longitud){
    int i;
    for(i=0;i<longitud;i++){
        if(Esminuscula(frase[i])==1){
            printf("%c",(int)frase[i]-32);
        }
        else{
           printf("%c",frase[i]);
        }
    }
}
int main(){
    char frase[100];
    int longitud;
    printf("Introduzca la frase que desee :\n");
    gets(&frase);
    printf("Introduzca la longitud de la frase contando los espacios:\n");
    scanf("%d",&longitud);
    pasaramayusculas(frase,longitud);
}