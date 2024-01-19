//
// Created by Nuria Gómez on 08/12/2023.
//
#include <stdio.h>
#include <string.h>//Librería añadida para poder utilizar strcmp

int main() {
    char mes[12];
    int año;


    printf("Introduzca el nombre del mes del que quiere calcular los dias: ");
    scanf("%s", &mes);
    //strcmp devuelve 0 cuando dos palabras son iguales
    if((strcmp("Enero", mes)== 0)||(strcmp("Marzo", mes)== 0)||(strcmp("Mayo", mes)== 0)||(strcmp("Julio", mes)== 0)||(strcmp("Agosto", mes)== 0)||(strcmp("Octubre", mes)== 0)||(strcmp("Diciembre", mes)== 0)){//strcmp devuelve 0 si son iguales
        printf("El mes de %s tiene 31 dias", mes);
    }else if((strcmp("Abril", mes)== 0)||(strcmp("Junio", mes)== 0)||(strcmp("Septiembre", mes)== 0)||(strcmp("Noviembre", mes)== 0)){
        printf("El mes de %s tiene 30 dias", mes);
    }else if (strcmp("Febrero", mes)== 0){
        printf("Introduzca el año: ");
        scanf("%d", &año);

        if((año%100 != 0)|| ((año%100 == 0)&&(año%400 ==0))){//Comprobación de si un año es bisiesto
            printf("El mes de %s del año %d tiene 29 dias",mes, año);
        }else{
            printf("El mes de %s del año %d tiene 28 dias", mes, año);
        }

    }
}