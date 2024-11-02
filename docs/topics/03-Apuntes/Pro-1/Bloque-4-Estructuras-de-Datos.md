<!--
SPDX-FileCopyrightText: 2024 Daniel Feito Pin

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Estos apuntes también están en: [Pásame el Código](https://pc.pablopl.dev/prouno/apuntes/b4-estructuras-de-datos/)

</procedure>

<tip>Copyright © 2024 Daniel Feito Pin</tip>

# Bloque 4 - Estructuras de Datos

<tldr id="tldr">

Arrays, registros, cadenas de caracteres y algoritmos de búsqueda y ordenación.

</tldr>

## Tipos Estructurados

Las estructuras de datos pueden ser:

- Estáticas: estructuras de datos cuyo tamaño se conoce en tiempo de compilación.
    - Arreglos.
    - Registros.
- Dinámicas: estructuras de datos cuyo tamaño cambia en
  tiempo de ejecución.
    - Ficheros.
    - Listas.
    - Pilas.
    - Colas.
    - Árboles.
    - Grafos.

### Arreglos

#### Sobre los arreglos

Un arreglo o "**array**" es un tipo de datos estructurado que está formado por un número **finito** de elementos todos
del **mismo tipo** que están situados en **posiciones consecutivas** en memoria y que se asocian con un **único
identificador**.

- Todos los elementos comparten un tipo común: el tipo base del array.
- La posición que cada elemento ocupa en el grupo de datos se indica mediante el tipo índice.

#### Declaración de arreglos

Para declarar un array se deben especificar:

- El **tipo** de los elementos del array.
    - Puede ser cualquier tipo.
- El **número** de elementos.
    - Puede ser cualquier expresión constante entera.

Es habitual usar una macro para definir la longitud de una array.

```c
#define N 10

/* ... */

int array[N];
```

Como cualquier otra variable, pueden recibir un valor
inicial en el momento en que se declara.

La forma más común es una lista de expresiones constantes entre llaves y separadas por comas:

```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

Si la inicialización es más corta que el tamaño del array, a los elementos restantes les asigna el valor 0:

```c
int a [10] = {1, 2, 3, 4, 5, 6};
/* El valor inicial de a es {1, 2, 3, 4, 5, 6, 0, 0, 0, 0} */
```

Usando esta característica, se puede inicializar fácilmente con todas las posiciones a cero:

```c
int a[10] ={0};
```

En una inicialización en declaración, la longitud de la matriz se puede omitir:

```c
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

A menudo solo unos pocos elementos de una matriz deben inicializarse explícitamente, los otros elementos pueden tener
valores por defecto.

```c
int a[15] ={0, 0, 29, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 48};
```

En el compilador `C99` se pueden usar la definición siguiente:

```c
int a[15] = { [2]=29, [9]=7, [14]=48 };
```

Los restantes se inicializan a cero.

El orden de inicialización no se tiene en cuenta:

```c
int a[15] = { [14]=48, [9]=7, [2]=29};
```

Si no se expecifica el tamño, se deducirá a partir del último elemento especificado:

```c
int a[] = {[5]=10, [23]=13, [11]=36, [15]=29};
/* Este array tendrá 24 elementos */
```

##### Arreglos constantes

Una arreglo se puede hacer constante al comenzar su declaración con la palabra `const`:

```c
const int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

Un arreglo que se haya declarado constante no debe ser modificada por el programa.

#### Indexación de arreglos

Para acceder a un elemento del array, se escribe el nombre del array seguido de un valor entero entre corchetes.

- Esto se conoce como subíndice o indexación del array.
    - Puede ser cualquier expresión entera.
- Los elementos de un array de longitud `n` se indexan de `0` a `n-1`.

Los arrays son una estructura de **acceso aleatorio**, se
caracterizan porque se puede acceder de forma **directa**, y con el **mismo esfuerzo**, a cada uno de sus elementos
utilizando el nombre de la variable de tipo array seguida de un índice.

El compilador de C no realiza la comprobación de los límites de los subíndices: si un subíndice se sale del rango, el
comportamiento del programa no está definido.

#### Obtención del tamaño de un arreglo

La función `sizeof()` permite determinar el tamaño de un array
en _bytes_.

> Si `a` es una matriz de 10 enteros, entonces `sizeof(a)` suele ser 40 (asumiendo que cada entero requiere cuatro
_bytes_).

Al dividir el tamaño de la matriz por el tamaño del elemento, se obtiene la longitud de la matriz:

```c
sizeof(a) / sizeof(a[0])
```

#### Arreglos de varias dimensiones

Un arreglo puede tener cualquier número de dimensiones.

```c
/* Matriz bidimensional */
int m[5][9];
/* m tiene 5 filas y 9 columnas */
```

C almacena las matrices como valores consecutivos en orden de fila mayor, esto es, con la fila 0 primero, luego la fila
1, y así sucesivamente.

#### Arreglos en funciones

Cuando un parámetro de función es un array unidimensional, la longitud de la matriz se puede dejar sin especificar:

```c
void funcion(int array[]) {
    /* ... */
}
```

C no proporciona ninguna forma fácil para que una función determine la longitud de un array que se le pase.

- En su lugar, hay que proporcionar la longitud como un argumento.

```c
void funcion(int array[], int n) {
    /* ... */
}
```

Al llamar a la funcion se indica solo el nombre del array (sin corchetes):

```c
funcion(a, 10);
```

Si un parámetro es una matriz multidimensional, solo se puede omitir la longitud de la primera dimensión:

```c
#define LEN 10

void funcion(int array[][LEN], int n) {
    /* ... */
}
```

### Cadenas de caracteres

#### Sobre las cadenas de caracteres

En C, una cadena de caracteres o "**string**" se representa como un array de caracteres.

El valor de una cadena se escribe entre dobles comillas `""`.

Todas las cadenas en C terminan con el carácter nulo `\0`.

> La cadena `"Hola"` se corresponde con: `{'H','o','l','a','\0'}`

#### Declaración e inicialización de cadenas de caracteres

Una cadena de caracteres se puede definir como:

```c
char cadena[] = "Hola";
char * cadena = "Hola"; /* definición a partir de punteros */
char cadena[5] = "Hola"; /* 4 caracteres y '/0' " 
```

#### Indexación de cadenas de caracteres

Se puede acceder a cualquier elemento de una cadena como un array.

#### Escritura y lectura de cadenas de caracteres

La escritura y lectura de cadenas se puede realizar con `printf()` y `scanf()`, usando el especificador de
conversión: `%s`.

> `scanf()` deja de buscar cuando encuentra un espacio en blanco.
>
> Al hacer `scanf("%s", cadena)` e introducir: `Hola mundo`, cadena lee solo `Hola`.

C permite utilizar funciones específicas de lectura y escritura de strings:

- `gets()` lee una línea completa, incluyendo espacios en blanco, hasta que encuentra un salto de línea.
    - Devuelve `NULL` si ha habido errores.
- `puts()` escribe la cadena de caracteres junto con el carácter retorno de línea:

```c
printf("Esto se ve como una línea\n");
puts("Esto se ve como una línea también");
```

C también tiene definidas funciones específicas de lectura y escritura de caracteres:

- `getchar()` lee caracteres hasta que encuentra el final de fichero `EOF` (_End of File_).
    - `EOF` es un macro `<stdio.h>`.
- `putchar()` escribe el carácter del argumento.

### Registros

#### Sobre los registros

Un registro, estructura o "**struct**" es un tipo de datos estructurado que está formado por un número finito de
elementos que pueden ser de **distinto tipo** y que se asocian con un **único identificador**.

Los distintos componentes de un struct denominan habitualmente "**campos**".

Una estructura es una opción lógica para almacenar una colección de elementos de datos relacionados.

#### Declaración e inicialización de registros

En la declaración de un `struct` se deben especificar el nombre y el tipo de cada campo.

Las propiedades de una registro son diferentes de las de un array.

- Los miembros de un registro pueden tener distinto tipo.
- Los miembros de un registro tienen nombre.

Para inicializar una estructura se siguen reglas similares a las de los arrays.

- No se tienen que inicializar todos los campos.
- Cualquier miembro sobrante recibe 0 como su valor inicial.

```c
struct {
    int numero;
    char nombre[LongNbre];
    int disponibles;
} part1 = {528, "Disco duro", 10}, part2 = {914, "Cable red", 5};
```

#### Acceso a los miembros de un registro

Para seleccionar un miembro en particular, se especifica su nombre, no su posición.

Se escribe el nombre de la estructura, luego un punto y luego el nombre del campo: `registro.miembro`.

- El punto `.` utilizado para acceder a un miembro de la estructura es en realidad un operador de C.
- Tiene prioridad sobre casi todos los demás operadores.

#### Copia de registros

La asignación de un registro a otro (`registro1 = registro2`) copia los valores miembro a miembro.

- El operador `=` solo se puede utilizar con estructuras de tipos compatibles.

Aparte de la asignación, C no proporciona operaciones en estructuras completas.

- En particular, los operadores `==` y `!=` no pueden utilizarse con estructuras.

#### Nombramiento de registros

Existen dos formas de nombrar una estructura:

- Declarar una etiqueta de estructura (`struct`).
- Utilizar `typedef` para definir un nombre de tipo (un tipo nuevo).

```c
struct etiqueta_registro {
    /* Miembros */
};
```

La etiqueta se puede utilizar para declarar el tipo de variables:

```c
etiqueta_registro registro1;
```

#### Registros en funciones

Las funciones pueden tener estructuras como parámetros y valores de retorno.

```c
etiqueta_registro funcion(struct etiqueta_registro) {
  /* ... */
}
```

#### Registros anidados

Se puede incluir una estructura como miembro de otra estructura.

Para acceder a los miembros de la estructura interior se requieren dos aplicaciones del
operador `.`: `registro1.registro2.miembro`.

## Algoritmos de Búsqueda y Ordenación

### Algoritmos de Búsqueda

#### Búsqueda Secuencial

La **búsqueda secuencial** consiste en comparar secuencialmente el elemento buscado con los valores contenidos en las
posiciones `min..max` del array hasta que:

- Bien se le encuentre en la posición índice `i`.
- O bien se legue al final del array sin encontrarlo.
    - Concluyendo por tanto que no está en él.

```c
#include <stdio.h>
#define N 20
int main() {
    int A[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int buscado, indice = 0;

    printf("Introduzca el dato a buscar: ");
    scanf("%d", &buscado);
    
    while (buscado != A[indice] && indice < N) indice++;
    if (indice <= N-1)
        printf("'%d' está en la posición: %d\n", buscado, indice+1);
    else
        printf("'%d' no está en el array\n",buscado);
    return 0;
}
```

#### Búsqueda Secuencial con Centinela

Al algoritmo de búsqueda secuencial se le añade en la posición n+1 el valor buscado (el centinela).

De esta forma en la condición de terminación del bucle se
ahorra una comparación.

```c
#include <stdio.h>
#define N 21 /* 1 más que el tamaño del array */
int main() {
    int A[N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int buscado, indice = 0;

    printf("Introduzca el dato a buscar: ");
    scanf("%d", &buscado);

    A[N-1] = buscado; /* Inserción del centinela */
    
    while (buscado != A[indice]) indice++;
    if (indice < N-1)
        printf("'%d' está en la posición: %d\n", buscado, indice+1);
    else
        printf("'%d' no está en el array\n",buscado);
    return 0;
}
```

<!--
Cambios:


```diff
...
- #define N 20
+ #define N 21 /* 1 más que el tamaño del array */
...
    scanf("%d", &buscado);

+   A[N-1] = buscado; /* Inserción del centinela */
+
-   while (buscado != A[indice] && indice < N) indice++;
+   while (buscado != A[indice]) indice++;
-   if (indice <= N-1)
+   if (indice < N-1)
...
```
-->

#### Búsqueda Binaria

La **búsqueda binaria** se basa en la comparación del
elemento buscado con el **elemento central** del array.

Si el elemento central del array es el elemento buscado,
la búsqueda ha finalizado.

En caso contrario, según sea buscado **menor o mayor** que
ese elemento central se buscará en la **primera o segunda
mitad** del array, respectivamente.

De nuevo se comparará el elemento buscado con el **elemento central** del subarray seleccionado y así **sucesivamente**
hasta que o bien se encuentre el valor buscado o bien se
pueda concluir que el elemento buscado no está en el
array (porque el subarray de búsqueda ha quedado **vacío**).

> Para que este algoritmo funcione, el array tiene que estar ordenado.

```c
#include <stdio.h>
#include <stdlib.h>
#define N 20
int main() {
    int A[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int izq, der, mit, buscado;

    printf("Introduzca el dato a buscar: ");
    scanf("%d",&buscado);
    
    izq = 0;
    der = N-1;
    mit = (izq+der)/2;
    while (izq <= der && buscado != A[mit]) {
        if (A[mit] < buscado) izq = mit+1;
        else der = mit-1;
        mit = (izq+der)/2;
    }

    if (izq <= der)
        printf("'%d' está en la posición: %d\n", buscado, mit+1);
    else
        printf("'%d' no está en el array\n", buscado);
    return 0;
}
```

### Algoritmos de Ordenación

#### Ordenación Burbuja

El método de ordenación de la burbuja (**_Bubble sort_**) se basa en la comparación e intercambio de posiciones
consecutivas.

```c
#define N /* Tamaño */
int main() {
    int A[N] = { /* ... */ };
    int i, j, temp=0;
    for (i = 1; i < N; i++) {
        for (j = 0; j < N-1; j++) {
            if (A[j] > A[j+1]) {
              temp = A[j];
              A[j] = A[j+1];
              A[j+1] = temp;
            }
        }
    }
}
```

#### Ordenación Rápida

El algoritmo de ordenación rápida (**_Quicksort_**), se describe como:

1. Elegir un elemento de matriz `e` (el elemento de partición) y luego reorganizar la matriz de modo que:
    - Los elementos `1, ..., i-1` sean menores o iguales que `e`.
    - El elemento `i` contiene `e`.
    - Los elementos `i+1, ..., n` son mayores o iguales a `e`.
1. Ordenar los elementos `1, ..., i-1` utilizando Quicksort de forma recursiva.
2. Ordenar los elementos `i+1, ..., n` utilizando Quicksort de forma recursiva.

```c
#define N /* Tamaño */

int split(int a[], int low, int high) {
    /* ... */
}

void quicksort(int a[], int low, int high) {
    int middle;
    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}
```
