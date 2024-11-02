<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

# Boletín 3

<!-- VERSIÓN CON ENUNCIADOS -->

<tldr id="tldr">

Funciones, recursividad y retorno de datos.

</tldr>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Este boletín también está en: [Pásame el Código](https://pc.pablopl.dev/prouno/boletines/b3-boletin-3/)

</procedure>

### Ejercicio 1

Plantee e implemente un subprograma en Lenguaje C para escribir N líneas en blanco por pantalla. Además del subprograma,
implemente un programa principal para probar su funcionamiento.

<code-block src="./Boletin_3/Ejercicio_01.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 2

Plantee e implemente un subprograma en Lenguaje C que a partir de la inicial de un día de la semana (L, M, X, J, V, S,
D) introducida mediante el teclado, devuelva y muestre por pantalla el nombre del día en cuestión. Además del
subprograma, implemente la función apropiada para probar su funcionamiento.

<code-block src="./Boletin_3/Ejercicio_02.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 3

Escribir un programa, empleando funciones de usuario, que pida un número entero y muestre por pantalla el mayor entero
que lo divide exceptuando el mismo.

<code-block src="./Boletin_3/Ejercicio_03.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 4

Plantee e implemente un subprograma en Lenguaje C para resolver una ecuación de segundo grado Ax2+Bx+C=0 a partir de sus
coeficientes A, B y C. Además del subprograma, implemente la función apropiada para probar su funcionamiento, activando
este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_04.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 5

Plantee e implemente un subprograma en Lenguaje C para mostrar por pantalla el triángulo de Floyd hasta un número entero
introducido por teclado. Además del subprograma, implemente la función apropiada para probar su funcionamiento,
activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_05.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 6

Plantee e implemente un subprograma en Lenguaje C para mostrar por pantalla N filas del triángulo de Floyd. Incluya la
función para obtener del usuario un número de filas correcto (N>0). Además del subprograma, implemente la función
apropiada para probar su funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_06.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 7

Plantee e implemente un programa en Lenguaje C que mediante una serie de subprogramas determine si una fecha introducida
por teclado es o no correcta, teniendo en cuenta para ello los años bisiestos.

<procedure>
<title>Ejemplo de Ejecución</title>
<p><b>Introduzca una fecha</b> 29/02/2011<br/></p>
<p>La fecha introducida no es correcta</p>
</procedure>

<code-block src="./Boletin_3/Ejercicio_07.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 8

Plantee e implemente una función en Lenguaje C que reciba un valor que representa un mes y devuelva el siguiente mes,
utilizando para ello la siguiente interface:

``MesSiguiente(mes:integer): integer;``

**NOTA:** Téngase en cuenta que el mes siguiente a 12 es 1.

<code-block src="./Boletin_3/Ejercicio_08.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 9

De nuevo plantee e implemente una función en Lenguaje C que reciba un valor que representa un mes y devuelva el
siguiente mes, utilizando para ello la siguiente interface:

``MesSiguiente(mes:tMes): tMes;``

<code-block src="./Boletin_3/Ejercicio_09.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 10

Plantee e implemente una función en Lenguaje C que tenga un argumento de tipo entero y que devuelva la letra P si el
número es positivo o N si el número es negativo. Además del subprograma, implemente la función apropiada para probar su
funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_10.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 11

Plantee e implemente una función en Lenguaje C para leer un entero dentro de un intervalo, cuyos límites inferior y
superior los proporcione el usuario por teclado. Además de la función, implemente la función apropiada para probar su
funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_11.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 12

Plantee e implemente una función en Lenguaje C que reciba un entero N y calcule 1+2+3+...+N, devolviendo dicho valor.
Además de la función, implemente la función apropiada para probar su funcionamiento, activando este último desde el
programa principal..

<code-block src="./Boletin_3/Ejercicio_12.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 13

Plantee e implemente en Lenguaje C una función que calcule el valor del siguiente polinomio: 3x5 + 2x4 – 5x3 – x2 + 7x -
6 Además del subprograma, implemente la función apropiada para probar su funcionamiento preguntándole al usuario el
valor de x, y activando esta última desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_13.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 14

Plantee e implemente en Lenguaje C un programa que calcule la impedancia (Z) en ohmios de un circuito LC en serie. Tenga
en cuenta que Z = X<sub>L</sub> - X<sub>C</sub>. Donde X<sub>C</sub> es la reactancia capacitiva y X<sub>L</sub> la
reactancia inductiva. Implemente las funciones apropiadas para los cálculos, y pruebe su funcionamiento, activándolas
desde el programa principal. Pídale al usuario el valor del condensador en faradios, el valor de la inductancia en
henrios y el valor de la frecuencia en hertzios para los cálculos de las reactancias.


<code-block src="./Boletin_3/Ejercicio_14.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 15

Plantee e implemente en Lenguaje C la función EsVocal (c: char) que recibe un carácter e indica si es vocal o no (sin
diferenciar entre mayúsculas y minúsculas). Además de la función, implemente la función apropiada para probar su
funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_15.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 16

Plantee e implemente una función en Lenguaje C para saber si un carácter es o no un dígito. Además de la función,
implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_16.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 17

Plantee e implemente una función en Lenguaje C que compruebe si un carácter está en mayúsculas o en minúsculas. Además
de la subrutina, implemente otra función para probar su funcionamiento, tal que lea un carácter de teclado e indique si
es una letra (mayúscula o minúscula).

<code-block src="./Boletin_3/Ejercicio_17.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 18

Plantee e implemente una subrutina en Lenguaje C que, utilizando las funciones desarrolladas en los dos ejercicios
anteriores, lea una frase completa del teclado (terminada en ENTER) y muestre por pantalla el número de letras (
mayúsculas y minúsculas) y dígitos que incluye.

<code-block src="./Boletin_3/Ejercicio_18.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 19

Plantee e implemente una función en Lenguaje C para cambiar a mayúsculas un carácter (entre la a y la z). Además de esta
función, implemente la función apropiada para probar su funcionamiento, tal que lea una frase de teclado (hasta que se
pulse enter) y la muestre por pantalla cambiada a mayúsculas.

<code-block src="./Boletin_3/Ejercicio_19.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 20

Plantee e implemente una función en Lenguaje C que devuelva el factorial de un número n (n!). Además del subprograma,
implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_20.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 21

Plantee e implemente un subprograma en Lenguaje C que calcule el término N de la sucesión de Fibonacci. Además del
subprograma, implemente la función apropiada para probar su funcionamiento, activando esta última desde el programa
principal.

<code-block src="./Boletin_3/Ejercicio_21.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 22

Plantee e implemente un subprograma en Lenguaje C que indique si un número entero es o no un número primo. Además del
subprograma, implemente la función apropiada para probar su funcionamiento, activando esta última desde el programa
principal.

<code-block src="./Boletin_3/Ejercicio_22.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 23

Plantee e implemente un programa en Lenguaje C para calcular la media de cuatro puntuaciones de un estudiante de un
curso de informática (representadas por 4 enteros entre 0 y 100) introducidas por teclado. Debe incluir obligatoriamente
los siguientes elementos:

- Procedimiento pedirNota: solicita un entero por teclado entre 0 y 100, si no es correcto lo sigue pidiendo hasta que
  lo sea.
- Función calculaPuntuacion: recibe un real y devuelve la letra de la nota media en función a la siguiente tabla.

| Media     | Puntuación |
|-----------|------------|
| [90, 100] | A          |
| [80, 90]  | B          |
| [70, 80]  | C          |
| [60, 70]  | D          |
| [0, 60]   | E          |

- Procedimiento que solicita al usuario cuatro notas (usando pedirNota) y calcula la media aritmética de las mismas,
  llamando además a calculaPuntuacion para obtener la letra de la puntuación que luego se debe mostrar en pantalla.

<code-block src="./Boletin_3/Ejercicio_23.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 24

Plantee e implemente una función recursiva en Lenguaje C para calcular el factorial de un número entero. Además de la
función implemente la función apropiada para probar su funcionamiento, activando este último desde el programa
principal.


<code-block src="./Boletin_3/Ejercicio_24.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 25

Plantee e implemente una función recursiva en Lenguaje C para calcular la N- ésima potencia de un número entero. Además
de dicha función, implemente la función apropiada para probar su funcionamiento, activando esta último desde el programa
principal.

<code-block src="./Boletin_3/Ejercicio_25.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 26

Plantee e implemente una función recursiva en Lenguaje C que sume los números enteros positivos hasta un entero dado.
Además de la función, implemente la función apropiada para probar su funcionamiento, activando este último desde el
programa principal.

<code-block src="./Boletin_3/Ejercicio_26.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 27

Plantee e implemente una función recursiva en Lenguaje C para invertir un número entero. Además de la función,
implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_27.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 28

Plantee e implemente una función recursiva en Lenguaje C que calcule y muestre la tabla de multiplicar de un número
entero a partir de dicho número y el máximo multiplicador. Además de la función, implemente la función apropiada para
probar su funcionamiento.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Introduzca un número entero:</b> 12<br/>
    <b>Introduzca el máximo multiplicador:</b> 7
</p>
<p>
12 x 1 = 12<br/>
12 x 2 = 24<br/>
12 x 3 = 36<br/>
12 x 4 = 48<br/>
12 x 5 = 60<br/>
12 x 6 = 72<br/>
12 x 7 = 84
</p>
</procedure>


<code-block src="./Boletin_3/Ejercicio_28.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>


### Ejercicio 29

Plantee e implemente una función recursiva en Lenguaje C para determinar si un número natural es capicúa. Además,
implemente otra función apropiada para probar su funcionamiento, activando esta última desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_29.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>


### Ejercicio 30

Plantee e implemente una función recursiva que devuelva la suma de las cifras de un número entero > 0. Por ejemplo si el
número es 721 devuelve 10. Además de la función, implemente la función apropiada para probar su funcionamiento,
activándola desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_30.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>


### Ejercicio 31

Plantee e implemente una función recursiva en Lenguaje C para resolver el problema de las torres de Hanoi. Además de la
función, implemente la función apropiada para probar su funcionamiento, activando este último desde el programa
principal.

<code-block src="./Boletin_3/Ejercicio_31.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/> -->


### Ejercicio 32

Plantee e implemente una función recursiva en Lenguaje C para determinar el término N de la sucesión de Fibonacci.
Además de la función, implemente otra función apropiada para probar su funcionamiento.

<code-block src="./Boletin_3/Ejercicio_32.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>


### Ejercicio 33

Plantee e implemente una función recursiva en Lenguaje C que calcule la suma de los términos de la sucesión de Fibonacci
hasta el término indicado por el usuario a través del teclado. Además de la función, implemente la función apropiada
para probar su funcionamiento, activando está último desde el programa principal.

<code-block src="./Boletin_3/Ejercicio_33.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 34

Plantee e implemente, mediante funciones y procedimientos, un programa en Lenguaje C gestionado por menú en el que se
presenten opciones para realizar las siguientes operaciones sobre números enteros:

- Calcular el número de cifras de un entero
- Sumar las cifras de un entero
- Indicar la cifra i-ésima menos significativa de un entero
- Calcular la imagen especular de un entero
- Comprobar si un entero imo común divisor) de dos números enteros
- Presentar la tabla de sumar, restar, multiplicar y dividir (hasta 10) de un número entero

<procedure>
<title>Ejemplo de Ejecución</title>
<code-block>
---------------------------OPERACIONES SOBRE ENTEROS---------------------------
0 – Salir
1 - Calcular el número de cifras de un entero
2 - Sumar las cifras de un entero
3 - Indica la cifra i-ésima menos significativa de un entero
4 - Calcular la imagen especular de un entero
5 - Comprobar si un entero es primo
6 – Mostrar el MCD de dos números
7 – Presentar la tabla de sumar, restar, multiplicar y dividir de n.
-------------------------------------------------------------------------------
Selecciona una operación [0-7]: 4
Introduce un número entero: 91827364
El número imagen especular de 91827364 es el 46372819
Selecciona una operación [0-7]: 5 Introduce un número entero: 124
El número 124 no es primo
</code-block>
</procedure>

<code-block src="./Boletin_3/Ejercicio_34.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 35

Plantee e implemente, mediante funciones y procedimientos, un programa en Lenguaje C dirigido por menú en el que el
usuario pueda elegir entre cuatro opciones para realizar las siguientes operaciones:

- Salir del programa
- Tres opciones de entre las siguientes:
    - Conocer el número de vocales sin acentuar existentes en un texto que el usuario escribe mientras no aparezca el
      carácter *.
    - Calcular la potencia de un número b elevado a e, sin utilizar los operadores de exponenciación.
    - Mostrar por pantalla el factorial del menor de dos números enteros positivos que introduzca por teclado el
      usuario.
    - Visualizar una tabla con los cuadrados y los cubos de los números contenidos en un intervalo de enteros indicado
      por el usuario.
    - Dibujar un cuadrado, aproximadamente centrado, en pantalla con el carácter y longitud del lado que indique el
      usuario.
    - Mostrar el área y el perímetro del rectángulo de menor área. El usuario debe indicar las longitudes de los lados
      de los dos rectángulos.
    - Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de aquellos números contenidos en un
      intervalo de enteros indicado por el usuario.
    - Calcular el máximo, el mínimo y la media de una serie de números enteros que el usuario introduce por teclado.
      Finaliza la serie cuando el número introducido es múltiplo de 10.
    - Mostrar por pantalla los divisores de un número entero que indique el usuario.
    - Dibujar un triángulo equilátero, aproximadamente centrado, en pantalla con el carácter y longitud del lado que
      indique el usuario.

<code-block src="./Boletin_3/Ejercicio_35.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 36

Implemente un programa en Lenguaje C para trabajar con números complejos. Las opciones que debe tener son:

```
1. Introducir dos números complejos en forma binómica por teclado
2. Introducir dos números complejos en forma módulo-argumental por teclado
3. Sumar dos números complejos
4. Restar dos números complejos
5. Multiplicar dos números complejos
0. Salir
```

<code-block src="./Boletin_3/Ejercicio_36.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

