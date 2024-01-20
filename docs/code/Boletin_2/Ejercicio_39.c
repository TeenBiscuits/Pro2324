//
// Created by pablo on 25/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C de generación de quinielas
 *       de forma aleatoria. El programa deberá mostrar en pantalla tantas quinielas
 *       como desee el usuario; se considera que todos los resultados son igualmente
 *       probables. El número máximo de quinielas generables simultáneamente es de
 *       10. Las quinielas se mostrarán en pantalla del modo habitual, esto es, ordenadas
 *       por filas (partidos) y columnas (resultados). Las opciones del programa serán:
 *       I)ndicar número de quinielas, M)ostrar quinielas, S)alir.
 *       No se podrán mostrar las quinielas sin haber indicado previamente el número
 *       de quinielas deseado.
 * in: Opción del menú, Número de Quinielas
 * out:
 * NOTA1:
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int semillaaleatori();

int imprimirquinielas(int nq);


int main() { // Función principal del código, menú, inputs, outputs...
    char op, v = ' '; // Opción Menú y espacio vacío
    bool nocontinuar = true;
    int nq, n; // nq: Número de Quinielas n: Número de inputs válido aleatori: Semilla para generar quinielas
    nq = -1; // Este valor no podrá ser nunca introducido por el usuario, y se usa para saber que no ha pasado por el menú 'I'

    do {
        printf("\n[\t\tGenerador de quinielas\t\t]\n[\tI) Indicar número de Quinielas\t]\n[\tM) Mostrar Quinielas\t\t\t]\n[\tS) Salir%24c]\n[\t¿Que opción quieres?\t{ ",v); // HOLA :)
        gets(&op);
        switch (op) {
            case 'I': // Indicar número de quinielas
            case 'i':
                printf("\nIntroduzca un número de Quinielas: ");
                n = scanf("%d",&nq);
                while((getchar()) != '\n'); // Limpio buffer que luego da errores tontos
                if (n == 1 && nq > 0 && nq <= 10) { // Con esto se comprueba in input válido (entero) y comprendido entre 1 y 10.
                    semillaaleatori(); // SI SE VUELVE A ELEGIR I Y SE DA UN INPUT CORRECTO SE VUELVE A GENERAR UN N ALEATORIO
                    // PENDIENTE CREAR SISTEMA QUE LE PREGUNTE AL USUARIO SI QUIERE SOBREESCRIBIR SUS QUINIELAS
                    printf("\nInput correcto, generadas %2d quinielas.\n",nq);
                    printf("Puede mostrar las quinielas en el apartado 'M' del menú...\n");
                } else {
                    printf("\nError: Input nó valido, el número de Quinielas debe estar comprendido entre 1 y 10.\n");
                }
                break;
            case 'M': // Mostrar Quinielas
            case 'm':
                if (nq == -1) { // No ha pasado por la opción 'I'
                    printf("\n¡Primero introduzca un número de quinielas a generar!\n");
                } else {
                    imprimirquinielas(nq);
                    printf("\n\n¿Quieres volver al menú? S/n ");
                    gets(&op); // Reciclo esta variable por ahorrar
                    switch (op) {
                        case 'S':
                        case 's':
                            break;
                        case 'N':
                        case 'n':
                            nocontinuar = false;
                            break;
                    }
                }
                break;
            case 'S': // Salida
            case 's':
                nocontinuar = false;
                break;
            default: // Input No Esperado
                printf("\n¡Input no válido!\n");
                break;

        }
    }while(nocontinuar);
    printf("\nGracias por usar nuestro Software. :)\n"); // Nada que añadir soy el mejor
    printf("\nBy Pablo Portas ;)\n"); // Eliminar esta línea de código hará que el programa no funcione
    // NO TIENES PRUEBAS PERO TAMPOCO DUDAS

    return 0;
}

int semillaaleatori() { // La única utilidad de esta función es generar un número random.
    int aleatori;
    srandom(time(NULL));
    aleatori = random();
    // printf("\n%d\n",aleatori); // USADO PARA DEBUG
    return aleatori;
};

int imprimirquinielas(int nq) { // Usado para imprimir las quinielas
    /* MI IMPLEMENTACIÓN, EXPLICACIÓN (Borrador)
     * Empleando la semilla (aleatori) la divido entre 12 y cojo el resto (módulo de 12)
     * esto dará un número del 0 al 11 dependiendo del valor de aleatori, pero nunca fuera
     * de ese dominio de enteros [0,11] con lo cual existen 12 posibles resultados. Este
     * número se guardará en la variable 'apst'.
     * Cada vez que se quiera imprimir una apuesta en la quiniela se repetirá el proceso
     * de impresión. Para eso usaré la variable 'rimp' que será igual al número de quinielas
     * solicitadas por el usuario 'nq'.
     * En cuanto a los resultados de cada partido a 'apst' le hago módulo 3 y según que salga
     * pués ganan empatan o pierden.
     */
    int apst, r;
    apst = random() % 12;
    printf("\n[ Nº |\tPartido \t\t\t\t\t\t | Resultado ]\n");
    for (r = 1; r < nq + 1; r++) {
        printf("[ %2d ",r);
        switch (apst) { // Partidos VOY A USAR EQUIPOS DE LA KINGS LEAGUE PORQUE NO SE NADA DE FUTBOL
            case 11:
                printf("| 1K FC vs xBuyer Team              ");
                break;
            case 10:
                printf("| Aniquiladores FC vs PIO FC        ");
                break;
            case 9:
                printf("| El Barrio vs Ultimate Móstoles    ");
                break;
            case 8:
                printf("| Jijantes FC vs Saiyans FC         ");
                break;
            case 7:
                printf("| Kunisports vs Rayo de Barcelona   ");
                break;
            case 6:
                printf("| Los Troncos FC vs Porcinos FC     ");
                break;
            case 5:
                printf("| PIO FC vs 1K FC                   ");
                break;
            case 4:
                printf("| xBuyer Team vs El Barrio          ");
                break;
            case 3:
                printf("| Jijantes FC vs Los Troncos FC     ");
                break;
            case 2:
                printf("| El Barrio vs PIO FC               ");
                break;
            case 1:
                printf("| Saiyans FC vs Porcinos FC         ");
                break;
            default:
                printf("| Kunisports vs PIO FC              ");
                break;
        }
        switch (apst % 3) { // Apuesta
            case 2:
                printf("|     2     ]");
                break;
            case 1:
                printf("|     1     ]");
                break;
            default:
                printf("|     X     ]");
                break;
        }
        printf("\n"); // Saltamos de Línea
        apst = random() % 12; // Cambiamos el valor de apst
    }
}