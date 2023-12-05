//
// Created by Pablo on 16/11/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un subprograma en Lenguaje C para escribir N líneas en
 *       blanco por pantalla. Además del subprograma, implemente un programa
 *       principal para probar su funcionamiento.
 * in: Número de Lineas en Blanco
 * out: Lineas en Blanco
 * NOTA1:
 */
#include <stdio.h>
void imprimeLBlanco(int nlineas);
int main() {
    int n;
    printf("¿Cuantas líneas en blanco quieres que imprima? ");
    scanf("%d",&n);
    imprimeLBlanco(n);
    return 0;
}
void imprimeLBlanco(int nlineas){
    for(nlineas; nlineas > 0; nlineas--) printf("\n");
}
