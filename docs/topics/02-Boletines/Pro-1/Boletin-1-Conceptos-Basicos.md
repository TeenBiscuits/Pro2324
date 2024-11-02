<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

# Boletín 1

<!-- VERSIÓN CON ENUNCIADOS -->

<tldr id="tldr">

Entra y Salida. printf, scanf, gets, define y operaciones artiméticas básicas.

</tldr>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Este boletín también está en: [Pásame el Código](https://pc.pablopl.dev/prouno/boletines/b1-boletin-1/)

</procedure>

### Ejercicio 1

Plantee e implemente un programa en lenguaje C que solicite el nombre y la edad de un usuario por teclado de forma que
el ordenador le salude indicándole la edad que tiene.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Introduzca su nombre:</b> Juan<br/>
    <b>Introduzca su edad:</b> 19
</p>
<p>¡Buenos días Juan, tiene usted 19 años!</p>
</procedure>

**PRECONDICIÓN**: el usuario introduce correctamente por teclado los dos datos solicitados (nombre y edad).

<code-block src="./Boletin_1/Ejercicio_01.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 2

Plantee e implemente un programa en que solicite el nombre, apellidos y edad de un usuario por teclado y que le muestre
el siguiente mensaje por pantalla.

<procedure><p>
Sr/Sra. <b>Apellido</b>, le faltan aún <b>X</b> años para jubilarse<br/>
Ejemplo: Sr/Sra. Rodríguez, le faltan aún 30 años para jubilarse
</p></procedure>

**NOTA**: Utilice la edad de jubilación como una constante con valor 67 años.

<code-block src="./Boletin_1/Ejercicio_02.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 3

Plantee e implemente un programa en Lenguaje C que solicite por teclado la base y altura de un triángulo rectángulo y
muestre por pantalla su superficie. Presente la salida con el siguiente formato:

<procedure><p>
La superficie del triángulo de base <b>XX.XX</b> y altura <b>YY.YY</b> es <b>ZZ.ZZ</b><br/>
Ejemplo: La superficie del triángulo de base 6.45 y altura 3.38 es 10.9
</p></procedure>

**PRECONDICIÓN**: los dos datos solicitados (base y altura) introducidos por teclado son correctos.

<code-block src="./Boletin_1/Ejercicio_03.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 4

Plantee e implemente un programa en Lenguaje C que solicite por teclado los lados de un rectángulo y muestre por
pantalla su perímetro. Presente la salida con el siguiente formato:

<procedure><p>
El perímetro del rectángulo de base  <b>XX.XX</b> y altura <b>YY.YY</b> es <b>ZZ.ZZ</b><br/>
Ejemplo: El perímetro del rectángulo de base 15.42 y altura 10.27 es 51.38
</p></procedure>

**PRECONDICIÓN**: los dos datos solicitados (base y altura) introducidos por teclado son correctos.

**POSTCONDICIÓN**: El valor del perímetro resultante, al igual que los datos de entrada serán mostrados en formato fijo
con dos decimales, y todos ellos separados por un espacio en blanco del texto explicativo.

<code-block src="./Boletin_1/Ejercicio_04.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 5

Plantee e implemente un programa en Lenguaje C que solicite por teclado los
lados de un rectángulo y muestre por pantalla su superficie.

<code-block src="./Boletin_1/Ejercicio_05.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 6

Plantee e implemente un programa en Lenguaje C que pida el radio de una esfera y calcule su área y su volumen.

<code-block src="./Boletin_1/Ejercicio_06.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 7

Plantee e implemente un programa en Lenguaje C que solicite el precio de un producto (sin IVA) y proporcione por
pantalla el importe total del producto con IVA incluido.

Suponga un IVA constante del 24% para todos los productos.

<procedure>
<title>Ejemplo de Ejecución</title>
<p><b>Precio del producto (sin IVA):</b> 3.57€</p>
<p>El importe total (IVA incluido) es de 4.21€</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_07.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 8

Plantee e implemente un programa en Lenguaje C que solicite al usuario su nombre, edad y lo que se ha gastado en cañas y
en transporte durante una semana (en euros) y muestre por pantalla esos mismos datos y la suma de los gastos.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Introduzca usted su nombre:</b> Juan<br/>
    <b>Introduzca usted su edad:</b> 19<br/>
    <b>Introduzca usted el total de sus gastos semanales en cañas (en euros):</b> 34<br/>
    <b>Introduzca usted el total de sus gastos semanales en transporte (en euros):</b> 15
</p>
<p>
    Nombre: Juan<br/>
    Edad: 19<br/>
    Número de hijos: 3<br/>
    Gasto semanal en cañas: 34€<br/>
    Gasto semanal en transporte: 15€<br/>
    Total gastos semanales: 49€<br/>
</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_08.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 9

Plantee e implemente un programa en Lenguaje C que solicite el nombre, edad, número de hijos y sueldo anual de una
persona (en euros) y muestre por pantalla la misma información indicando su sueldo mensual en vez del sueldo anual.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Introduzca usted su nombre:</b> Juan<br/>
    <b>Introduzca usted su edad:</b> 19<br/>
    <b>Introduzca usted su número de hijos:</b> 3<br/>
    <b>Introduzca usted su sueldo anual (en euros):</b> 15460.36
</p>
<p>
    Nombre: Juan<br/>
    Edad: 19<br/>
    Número de hijos: 3<br/>
    Sueldo mensual: 1288.36€
</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_09.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 10

Plantee e implemente un programa en Lenguaje C que calcule el producto escalar de dos vectores en el espacio euclídeo.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Coordenadas cartesianas primer vector (separadas por espacio):</b> 2 4 6<br/>
    <b>Coordenadas cartesianas segundo vector (separadas por espacio):</b> 3 1 9<br/>
</p>
<p>Producto escalar: 64</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_10.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 11

Plantee e implemente un programa en Lenguaje C que empleando expresiones, convierta un tiempo expresado en segundos al
formato horas : minutos : segundos.

<procedure>
<title>Ejemplo de Ejecución</title>
<p><b>Tiempo en segundos:</b> 3750</p>
<p>3750 segundos son 1h : 2m : 30s</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_11.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 12

Plantee e implemente un programa en Lenguaje C que muestre por pantalla las 6 primeras filas de un triángulo de Floyd:

<procedure><p><b>
1<br/>
2 3<br/>
4 5 6<br/>
7 8 9 10<br/>
11 12 13 14 15<br/>
16 17 18 19 20 21
</b></p></procedure>

**NOTA:** No se deben utilizar bucles en este ejercicio, simplemente sentencias printf con sus correspondientes
descriptores de formato (ancho) para obtener una salida exactamente igual a la mostrada. No utilice espacios en blanco
directamente para separar los números.

<code-block src="./Boletin_1/Ejercicio_12.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 13

Plantee e implemente un programa en Lenguaje C que muestre por pantalla una tabla indicando el radio, el perímetro y el
área de tres círculos cuyo radio es solicitado por teclado. La salida en pantalla debe tener el siguiente formato:

<procedure>
<table>
<tr><td>RADIO</td><td>PERIMETRO</td><td>AREA</td></tr>
<tr><td>2</td><td>12.56</td><td>12.56</td></tr>
<tr><td>3</td><td>18.86</td><td>28.27</td></tr>
<tr><td>4</td><td>25.13</td><td>50.26</td></tr>
</table>
</procedure>


<code-block src="./Boletin_1/Ejercicio_13.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 14

Plantee e implemente un programa en Lenguaje C que a partir de la temperatura máxima y mínima diaria de una ciudad en
grados Fahrenheit (introducidas por teclado) proporcione dichas temperaturas en grados centígrados por pantalla.
Contemple una salida ordenada en forma de tabla.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca el nombre de su ciudad :</b> Lugo<br/>
<b>Introduzca la temperatura máxima en grados Fahrenheit:</b> 76<br/>
<b>Introduzca la temperatura mínima en grados Fahrenheit:</b> 57<br/>
</p>
<p>----------------------------- Lugo 15/09/2019 -----------------------------</p>
<table>
<tr><td>TMax (ºF)</td><td>TMin (ºF)</td><td>TMax (ºC)</td><td>TMin (ºC)</td></tr>
<tr><td>76 ºF</td><td>57 ºF</td><td>24.44 ºC</td><td>13.88 ºC</td></tr>
</table>
<p>-----------------------------------------------------------------------------</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_14.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 15

Un camión transporta T kilogramos de baldosas; se sabe que cada baldosa pesa B kilogramos. Las baldosas se van a
utilizar para recubrir una superficie rectangular. Plantee e implemente un programa en Lenguaje C que indique el número
de baldosas que habría en un lado del mayor cuadrado que se pueda recubrir con ésas baldosas, sin romperlas.

<code-block src="./Boletin_1/Ejercicio_15.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 16

Plantee e implemente un programa en LENGUAJE C para calcular la suma de dos matrices 2x2. Pida los datos oportunos y
calcule el resultado deseado, mostrándolo después en pantalla.

<code-block src="./Boletin_1/Ejercicio_16.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 17

Plantee e implemente un programa en Lenguaje C como en el ejercicio anterior, calculando esta vez el producto de las
matrices leídas.

<code-block src="./Boletin_1/Ejercicio_17.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 18

Plantee e implemente un programa en Lenguaje C que solicite a un usuario su nombre, apellidos, sueldo mensual (en euros)
y el dinero que gasta diariamente en ocio, comida y transporte. A continuación, utilizando descriptores de formato, debe
mostrar una tabla como la que se indica donde se recoja el % de su sueldo que gasta semanalmente en ocio, comida y
transporte. Incluya también el total del gasto semanal realizado.

```
************************************************************************
*******                     Sonia Rodríguez: 1000€               *******
            %Ocio               %Comida         %Transporte       %Otros
             7.5%                    5%             10.34%         2.16%
*******                                                          *******
                                                           Gasto semanal
                                                                    250€
```

<code-block src="./Boletin_1/Ejercicio_18.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 19

Plantee e implemente un programa en LENGUAJE Cpara controlar la compra diaria. El programa debe pedir los kilos de
patatas comprados y su precio sin IVA, los kilos de manzanas comprados y su precio sin IVA y cuánto ha pagado por un
libro que se ha comprado, sin IVA. Suponga que el IVA de los productos alimenticios es del 21% y de los productos de
cultura 10%. Muestre por pantalla el importe de cada producto y el importe total de la compra según se indica en el
ejemplo:

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Kg de patatas comprados:</b> 7<br/>
    <b>Precio sin IVA del kilo de patatas (en euros):</b> 0.69<br/>
    <b>Kg de manzanas comprados:</b> 4<br/>
    <b>Precio sin IVA del kilo de patatas (en euros):</b> 1.23<br/>
    <b>Importe del libro sin IVA (euros):</b> 19
</p>
<code-block>
 * --------------------------------------------------------------------------------------- Ticket 1/1
 * Patatas              7 kg                0.69€               4.83€               5.84€   (IVA 21%)
 * Manzanas             4 kg                1.23€               4.92€               5.95€   (IVA 21%)
 * Libro                1                   19€                 19€                 20.90€  (IVA 10%)
 * --------------------------------------------------------------------------------------------------
 * TOTAL                                                                                       32.69€
</code-block>
</procedure>

<code-block src="./Boletin_1/Ejercicio_19.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 20

Plantee e implemente un programa en Lenguaje C que solicite a un usuario su nombre, apellidos, edad y el número de
créditos matriculados en primera, segunda y tercera matrícula. A continuación debe mostrar una tabla como la que se
indica donde se recoja el coste total de las asignaturas de primera, segunda y tercera matrícula. Suponga que el precio
del crédito en primera matrícula (15.45€) se incrementa un 25% en segunda matrícula y un 50% en tercera. Incluya también
el coste total de la matrícula del alumno.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
    <b>Nombre:</b> Álvaro<br/>
    <b>Apellido:</b> Pérez<br/>
    <b>Edad:</b> 31<br/>
    <b>Número de créditos en primera matrícula:</b> 14<br/>
    <b>Número de créditos en segunda matrícula:</b> 15<br/>
    <b>Número de créditos en tercera matrícula:</b> 10<br/>
</p>
</procedure>

<code-block src="./Boletin_1/Ejercicio_20.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

