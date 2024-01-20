//
// Created by santi on 16/10/2023.
//
#include <stdio.h>
int main(){
    int multiplicando;
    int producto;

    multiplicando=-1;

    while(multiplicando<10){
        multiplicando=multiplicando+1;
        producto= 7*multiplicando;
        printf("7 X %d= %d\n",multiplicando,producto);
    }

    return 0;
}