//
// Created by santi on 28/11/2023.
//
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(){
    int n;
    printf("Introduzca un valor N mayor que 0:\n");
    scanf("%d",&n);

    if(n<=0){
        printf("Introduzca un valor valido.");
    }
    else{
        printf("El numero %d de la sucesion de Fibonacci es %d",n, fibonacci(n));
    }

    return 0;

}