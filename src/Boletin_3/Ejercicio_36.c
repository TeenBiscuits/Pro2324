//
// Created by santi on 20/11/2023.
//
#include <stdio.h>
void uno(float* real1, float* img1, float* real2, float* img2){
    printf("Introduzca el primer numero imaginario en forma binomica:\n");
    scanf("%f %f",real1,img1);
    printf("Introduzca el primer numero imaginario en forma binomica:\n");
    scanf("%f %f",real2,img2);
}
void printMenu(){
    printf("0.- Salir\n"
           "1.- Introducir dos numeros complejos en forma binómica por teclado\n"
           "2.- Introducir dos numeros complejos en forma módulo-argumental por teclado\n"
           "3.- Sumar dos numeros complejos\n"
           "4.- Restar dos numeros complejos\n"
           "5.- Multiplicar dos numeros complejos\n");
}
void menu(){
    int opcion;
    float real1, real2, img1, img2;
    do {
       printMenu();
       scanf("%d",&opcion);
        switch (opcion){
            case 0:
                printf("Saliendo del programa...");
                break;
            case 1:
                uno(&real1,&img1,&real2,&img2);
                printf("Los numeros introduciod han sido:\n *%.2f +%.2fi \n*%.2f +%.2fi\n",real1,img1,real2,img2);
                break;
            default:
                printf("Opcion no valida\n");
        }

    }while(opcion);
}
int main(){
    menu();
}
