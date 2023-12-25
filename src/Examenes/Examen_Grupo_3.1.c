/*
Una solución al Examen empleando un Menú Iterativo.
Solución propuesta por CARMEN BÓVEDA ÁLVAREZ
2º parcial. Sesión P14 de PRO1. Curso 2023/2024

Realiza un programa propio en lenguaje C gestionado por un menú iterativo que muestre, en pantalla, y permita insertar
 por teclado una letra para elegir entre tres opciones:

        A) Procedimiento.
        B) Función.
        C) Salir.

Cuando la opción elegida por el usuario sea una de las dos primeras, tras la ejecución de las acciones correspondientes,
 el programa deberá volver a mostrar el menú y permitir de nuevo elegir entre las tres posibles opciones.

En el programa debes utilizar como estructura de datos una matriz de N x N enteros que iniciarás con valores aleatorios
 múltiplos de 5 dentro del intervalo [10, 100].

La opción P) Mostrará en primer lugar el contenido inicial de la matriz. Después solicitará por teclado al usuario un
 valor del intervalo abierto (1, 10), y una posición en la matriz donde insertarlo. Y por último deberá mostrar los
 valores que contiene la matriz tras la modificación.

La opción F) Permitirá mostrar por pantalla cuantos valores múltiplos de 5 hay en la matriz

La opción T) permitirá terminar el programa, mostrando los créditos.

Específicamente se pide y se valora:

1.  La gestión y uso de subrutinas en el Menú iterativo. (3 puntos)

2.  La declaración del prototipo, activación y definición de un procedimiento que devuelve tres parámetros enteros que
 indicaran la posición a modificar y el valor entero que contendrá. (3.5 puntos)

3.  La declaración del prototipo, activación y definición de una función qué recibe como parámetro una matriz de
 enteros y dicha función retorna cuantos valores son múltiplos de cinco en la estructura recibida. (3.5 puntos)


NOTA 1: declara, activa y define, además de las dos subrutinas exigidas (en los puntos 2 y 3), todas las funciones
 (y/o procedimientos) que consideres necesarias para el correcto funcionamiento del programa.

NOTA 2: Recuerda que no está permitido el uso de variables globales, y que para la comunicación de datos entre
 subrutinas solo debes emplear la lista de parámetros de las funciones y/o procedimientos.
*/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define OP1 'A'
#define OP2 'B'
#define SALIR 'C'

#define N 5
#define M 5
#define INF_INTER 10
#define SUP_INTER 100
#define FACTOR 5 // múltiplos de 5

typedef int tMatriz[N][M];

int valoresContados(const tMatriz matriz); // prototipo de la función pedida

void pedirPosicionyValor(int *pFila, int *pColumna, int *pValor); // prototipo del procedimiento pedido

void gestionarMenu();

int alea(int ini, int fin);

void mostrarMenu();

char opcionSeleccionada();

void modificar(tMatriz matriz);

int numeroPedido(const char mensaje[], int inf, int sup);

void iniciarMatriz(tMatriz matriz);

void mostrarCalculo(const tMatriz matriz);

void mostrar(const tMatriz matriz);

char mayuscula(char caracter);


int main() {
    srand(time(NULL));
    gestionarMenu();
    return 0;
}

void gestionarMenu() {
    bool seguir = true;
    tMatriz matriz;
    iniciarMatriz(matriz);
    do {
        mostrarMenu();
        switch (mayuscula(opcionSeleccionada())) {
            case OP1:
                mostrar(matriz);
                modificar(matriz);
                mostrar(matriz);
                break;
            case OP2:
                mostrarCalculo(matriz);
                break;
            case SALIR:
                seguir = false;
                puts("FIN del PROGRAMA de EVALUACION de PRACTICAS");
                puts("------------------------------------------------");
                break;
            default:
                printf("\tERROR: Opcion no válida (elija %c, %c, %c)", OP1, OP2, SALIR);
                break;
        }
    } while (seguir);
}

/*
 * Definición de la función qué recibe como parámetro una matriz de enteros y dicha función retorna
 * cuantos valores pares hay en la estructura recibida.
 */
int valoresContados(const tMatriz matriz) {
    int contador = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (matriz[i][j] % FACTOR == 0) contador++;
    return contador;
}

/*
 * Definición del procedimiento que devuelve tres parámetros enteros que indicaran la posición a modificar
 * y el valor entero que contendrá.
 * POSTCONDICIONES:
 * el valor € (INF_INTER/10, SUP_INTER/10)
 * la fila € [1, N]
 * la columna € [1, N]
 */
void pedirPosicionyValor(int *pFila, int *pColumna, int *pValor) {
    *pValor = numeroPedido("Nuevo valor", INF_INTER / 10 + 1, SUP_INTER / 10 - 1);
    *pFila = numeroPedido("para la Fila", 1, N);
    *pColumna = numeroPedido("para la Columna ", 1, N);
}

void modificar(tMatriz matriz) {
    int f, c, numero;
    pedirPosicionyValor(&f, &c, &numero); // POSTCond: f y c € [1,N], número € (INF_INTER/10, SUP_INTER/10)
    matriz[f - 1][c - 1] = numero; // por las postcondiciones del procedimiento ajusta la posición a modificar
}

int alea(int ini, int fin) {
    int aux = rand() % (fin - ini + 1) + ini;
    return aux;
}

char mayuscula(char caracter) {
    char aux = caracter;
    if (caracter <= 'z' && caracter >= 'a') aux = (char) ((int) caracter - 'a' + 'A');
    return aux;
}

int numeroPedido(const char mensaje[], int inf, int sup) {
    int dato;
    do {
        printf("\t%s entre [%d, %d]: ", mensaje, inf, sup);
        scanf("%d", &dato);
    } while (dato < inf || dato > sup);
    return dato;
}

void iniciarMatriz(tMatriz matriz) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            matriz[i][j] = FACTOR * alea(INF_INTER / FACTOR, SUP_INTER / FACTOR);// mtiplo5 € [INF_INTER,SUP_INTER]
}

void mostrarCalculo(const tMatriz matriz) {
    printf("Multiplos de 5 contenidos en la matriz: %d.\n", valoresContados(matriz));
}

void mostrar(const tMatriz matriz){
    puts("La matriz es: ");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++)
            printf("%10d", matriz[i][j]);
        puts("");
    }
}

char opcionSeleccionada() {
    char opcion;
    printf("Seleccione una opción (%c, %c y/o %c): ", OP1, OP2, SALIR);
    scanf("%c", &opcion);
    while(getchar() != '\n');
    return opcion;
}

void mostrarMenu() {
    puts("\n________________________________________________");
    printf("MATRIZ DE %d x %d ELEMENTOS\n", N, M);
    printf("%c) Activar Procedimiento.\n", OP1);
    printf("%c) Activar Funcion\n", OP2);
    printf("%c) Salir\n", SALIR);
}