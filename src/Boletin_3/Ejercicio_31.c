// SPDX-FileCopyrightText: 2024 Pablo R. <p.rperez@udc.gal>
//
// SPDX-License-Identifier: GPL-3.0-only

// Enunciado:  Plantee e implemente una función recursiva en Lenguaje C para resolver el problema de las torres de Hanoi. Además de la función, implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.

#include <stdio.h>
#include <stdlib.h>


//Función auxiliar para mover un disco de una torre a otra
void mover(int n, char *origen, char *destino) {
	printf("Mover %d de %s a %s\n", n, origen, destino);
}

void torresHanoi(int disco, char *origen, char *auxiliar, char *destino){
	if(disco == 1){
		mover(disco, origen, destino);
	} else{
		torresHanoi(disco - 1,origen,destino,auxiliar);
		mover(disco, origen, destino);
		torresHanoi(disco - 1,auxiliar,origen,destino);
	}
}

void ejecutar(int numDiscos) {
	//Ejecutar el algorimo
	torresHanoi(numDiscos, "Origen", "Auxiliar", "Destino");
}

int main() {
	int numDiscos;

	while(1) {
		printf("Introduzca el numero de discos: ");
		scanf("%d", &numDiscos);
		if(numDiscos <= 0) {
			printf("Debe haber 1 o más discos\n");
		} else {
			break;
		}
	}

	ejecutar(numDiscos);

	return 0;
}
