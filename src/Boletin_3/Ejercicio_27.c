//
// Created by santi on 29/11/2023.
//
//
// Created by santi on 29/11/2023.
//
#include <stdio.h>

void invertirNumero(int numero, int n){
    int cifras[50];
    int aux;
    aux = numero;
    for (int i = n; i > 0; i--) {
        cifras[i] = aux % 10;
        aux /= 10;
        printf("%d",cifras[i]);
    }

}
int main(){
    int numero;
    int n;

    printf("\nIntroduzca un numero: ");
    scanf("%d", &numero);

    printf("\nIntroduzca el numero de cifras: ");
    scanf("%d", &n);

    invertirNumero(numero,n);
}