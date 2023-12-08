//
// Created by Pablo on 07/12/2023.
//

// El juego del Tres en Raya escrito en C. Nada más que añadir.

// Librerías
#include <stdio.h>
#include <stdbool.h>

// Constantes
#define INTRO "\t\t¡Bienvenido al tres en raya!\n"
#define EMPATE "¡EMPATE!"
#define VICTORIAPARA "¡FIN DE LA PARTIDA VICTORIA DE "
#define CRUZ "LAS CRUCES!"
#define CIRCULO "LOS CÍRCULOS!"
#define QUECASILLAQUIERE "¿Que casilla quiere marcar? (filas, columnas): "
#define CASILLAINVALIDA "¡Introduzca una fila y columna válida! "
#define CASILLAOCUPADA "¡Casilla ya ocupada! "
#define TURNODE "Es el turno de "
#define LASCRUCES "las cruces. "
#define LOSCIRCULOS "los círculos. "


// Definiciones
typedef char RegTablero[3][3]; // Defino una matriz de 3 x 3 para crear tableros

// Definición funciones
void iniciarTablero(RegTablero tab); // Inicia el Tablero con espacios en blanco ' '

void imprimirTablero(RegTablero tab); // Imprime el estado actual del tablero

void turno(RegTablero tab, int jugador); // Turno de un jugador de marcar una casilla

void introducirCasilla(int *filcol); // Pedir por teclado filas y columnas

bool sigueLaPartida(RegTablero tab); // Comprobación de si el jugador ha ganado la partida.

// Main
int main() {
    // Declaro variables
    RegTablero Tablero; // Mi tablero
    int turnojugador = 1, nturnos; // Turno empieza en jugador 1 para que el primer turno sea el del 0. nturnos: turnos totales.
    bool partidaenjuego = true; // La partida está funcionando, para el bucle del juego
    bool empate = false; // Hay un empate?

    printf(INTRO); // Mensaje de introducción

    // Bucle del juego
    do {
        iniciarTablero(Tablero); // Se inicia un tablero en blanco
        imprimirTablero(Tablero); // Imprimo el tablero
        nturnos = 1; // Inicializo para el primer turno
        while (partidaenjuego) { // Comienza el juego
            turnojugador = (turnojugador + 1) % 2; // Rotación entre jugador 0 Cruz y jugador 1 Círculo
            turno(Tablero, turnojugador); // El jugador marca su casilla
            imprimirTablero(Tablero); // Se imprime el tablero
            // En los primeros turnos no hace falta comprobar
            if (nturnos >= 5) partidaenjuego = sigueLaPartida(Tablero); // Se comprueba si ha ganado la partida
            nturnos += 1; // Se suma un turno al contador
            if (nturnos > 9) { // En una partida de 3 en raya no puede haber más de 9 turnos
                empate = true; // Hay un empate
                partidaenjuego = false; // Para no llegar a un bucle en el que usuario no puede hacer nada se acaba la partida.
            }
        }
    } while (partidaenjuego); // El bucle sigue mientras la partida siga

    // MENSAJE FINAL
    if (empate) {
        printf(EMPATE);
    } else {
        printf(VICTORIAPARA);
        // El último valor del turno indica el ganador
        if (turnojugador == 0) printf(CRUZ);
        else printf(CIRCULO);
    }

    return 0;
}

// Declaración Funciones
void iniciarTablero(RegTablero tab) {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            tab[i][j] = ' '; // Cada casilla ahora tiene un espacio en blanco
        }
    }
}

void imprimirTablero(RegTablero tab) {
    for (int i = 0; i <= 2; i++) { // Filas
        printf("\t\t\t\t"); // Tabulada del formato
        // Bucle de impresión
        for (int j = 0; j <= 2; j++) { // Columnas
            printf(" %c ", tab[i][j]);
            if (j < 2)printf("│"); // Entre los dos primeros símbolos hay separadores
        }
        if (i < 2)printf("\n\t\t\t\t───┼───┼───"); // Entre las dos primeras fílas hay separadores
        printf("\n"); // Siguiente línea
    }
}

void turno(RegTablero tab, int jugador) {
    int aux[2];

    // Turno de
    printf(TURNODE);
    // Nombre del jugador
    if (jugador == 0) printf(LASCRUCES);
    else printf(LOSCIRCULOS);

    introducirCasilla(aux);
    // Comprobación de que la columna y fila es válida
    do {
        // ¿Está en el tablero?
        while (aux[0] < 0 || aux[0] > 2 || aux[1] > 2 || aux[1] < 0) {
            printf(CASILLAINVALIDA);
            introducirCasilla(aux);
        }
        // ¿Está ya ocupada?
        if(tab[aux[0]][aux[1]] != ' '){
            printf(CASILLAOCUPADA);
        }
        // Si la casilla está en el tablero, pero está ocupada el mensaje anterior se imprime y se vuelve al principio
    }while (tab[aux[0]][aux[1]] != ' ');

    // Marca según jugador
    if (jugador == 0) tab[aux[0]][aux[1]] = 'X';
    else tab[aux[0]][aux[1]] = 'O';
}

void introducirCasilla(int *filcol) {
    printf(QUECASILLAQUIERE);
    scanf("%d, %d", &filcol[0], &filcol[1]);
    while ((getchar()) != '\n'); // Limpio Buffer de Entrada
    // Las personas normales a la primera columna le llaman 1, aunque en el código sea 0, por eso le resto 1.
    filcol[0] -= 1;
    filcol[1] -= 1;
}

bool sigueLaPartida(RegTablero tab) {
    // Algoritmo para comprobar si se ha ganado la partida, esto es super ineficiente. Era lo mejor que se me ocurría.
    for (int i = 0; i < 3; i++)
        if (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] && tab[2][i] != ' ') return false;
    for (int i = 0; i < 3; i++)
        if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][2] != ' ') return false;
    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[2][2] != ' ') return false;
    if (tab[2][0] == tab[1][1] && tab[1][1] == tab[0][2] && tab[0][2] != ' ') return false;

    return true; // Si no hay tres en raya continúa la partida
}