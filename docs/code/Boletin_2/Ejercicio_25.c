//
// Created by santi on 17/10/2023.
//
#include <stdio.h>
int main(){
    int tabla;
    int multiplicando;
    int producto;

    multiplicando=-1;
    tabla=0;

    while(tabla<5){
        tabla=tabla+1;
        while(multiplicando<10) {
            multiplicando = multiplicando + 1;
          producto = tabla * multiplicando;
          printf("%d X %d= %d\n", tabla, multiplicando, producto);
      }
      multiplicando=-1;
    }

    return 0;
}