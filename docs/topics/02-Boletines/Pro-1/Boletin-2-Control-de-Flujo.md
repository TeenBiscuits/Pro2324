<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

# Boletín 2

<tldr id="tldr">

Bucles (while / do while / for) y condicionales (if / else / switch)

</tldr>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Este boletín también está en: [Pásame el Código](https://pc.pablopl.dev/prouno/boletines/b2-boletin-2/)

</procedure>

### Ejercicio 1

Plantee e implemente un programa en Lenguaje C que solicite un número entero por teclado y muestre por pantalla si es
positivo o negativo.

<code-block src="./Boletin_2/Ejercicio_01.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 2

Plantee e implemente un programa en Lenguaje C que solicite un número entero por teclado y muestre por pantalla si es
par o impar.

<code-block src="./Boletin_2/Ejercicio_02.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 3

Plantee e implemente un programa en Lenguaje C que solicite por teclado dos números enteros y que muestre un mensaje
indicando si el primero es o no divisible por el segundo.

<code-block src="./Boletin_2/Ejercicio_03.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 4

Plantee e implemente un programa en Lenguaje C que muestre por pantalla el mayor de tres números introducidos por
teclado.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Primer Número:</b> 34<br/>
<b>Segundo Número:</b> 56<br/>
<b>Tercer Número:</b> 21<br/>
</p>
<p>
56 es el número mayor de los tres introducidos
</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_04.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 5

Plantee e implemente un programa en Lenguaje C que muestre por pantalla tres números enteros introducidos por teclado
ordenados de menor a mayor.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Primer Número:</b> 34<br/>
<b>Segundo Número:</b> 56<br/>
<b>Tercer Número:</b> 21<br/>
</p>
<p>21 &lt;= 34 &lt;= 56</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_05.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 6

Plantee e implemente un programa en Lenguaje C que a partir de la siguiente información (correspondiente a un test
realizado por los alumnos): cantidad total de preguntas planteadas y la cantidad de preguntas contestadas correctamente.
Permita insertar los dos datos por teclado y muestre como resultado el nivel del mismo según el porcentaje de respuestas
correctas obtenidas. Suponga que:

- Nivel máximo: Porcentaje>=90%.
- Nivel medio: Porcentaje>=75% y <90%.
- Nivel regular: Porcentaje>=50% y <75%.
- Fuera de nivel: Porcentaje<50%.

<code-block src="./Boletin_2/Ejercicio_06.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 7

Implemente un programa que resuelva ecuaciones de segundo grado empleando sentencias switch para los casos: reales y
distintas, complejas conjugadas y raíz real doble.

<code-block src="./Boletin_2/Ejercicio_07.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 8

Plantee e implemente un programa en Lenguaje C que solicite al usuario una fecha del año en curso y le muestre en el
centro de la pantalla (aproximadamente) el número de días transcurridos desde el comienzo de año hasta esa fecha.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Escriba una fecha del año 2015 (dd mm):</b> 15 10<br/>
</p>
<p>La fecha introducida corresponde al día 288 del año en curso</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_08.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 9

Plantee e implemente un programa en Lenguaje C que implemente el algoritmo necesario para calcular la edad de una
persona suponiendo que se le pide al usuario que introduzca su fecha de nacimiento por teclado y a la salida muestra por
pantalla su edad con respecto a la fecha actual. Tenga en cuenta el cumpleaños exacto de la persona para realizar el
cálculo.

<code-block src="./Boletin_2/Ejercicio_09.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 10

Plantee e implemente un programa en Lenguaje C que solicite el salario anual bruto de una persona y muestre por pantalla
la reducción del IRPF que se le aplicaría según los hijos menores de 18 años que tenga a su cargo, sabiendo que cada
hijo (hasta 5) reduce un 10% el total del impuesto que le correspondería pagar. Es decir, si un trabajador gana 20000 €
anuales y tiene a su cargo 5 hijos menores de 18 años, suponiendo un IRPF del 15% (debe ser constante en el programa)
tendría que pagar 3000€ de impuesto anual, pero se le reduce un n_hijos*10% (50%) y por tanto pagaría únicamente 1500€
al año.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca su salario anual bruto (en euros):</b> 20000<br/>
<b>Introduzca el número de hijos mayores de 18 años a su cargo:</b> 5<br/>
</p>
<p>
IRPF (15%): 3000€<br/>
Reducción debida a hijos a cargo: 1500€<br/>
Total anual a pagar: 1500€<br/>
</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_10.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 11

Plantee e implemente un programa en Lenguaje C cuyo objetivo sea calcular las raíces de una ecuación de 2º grado,
ax^2+bx+c. El programa debe solicitar por teclado los coeficientes a, b, c. y mostrar por pantalla las soluciones x<sub>
1</sub> y x<sub>2</sub>.

<code-block lang="tex">
x_{1} = \frac{-b+\sqrt{b^2-4ac}}{2a}
x_{2} = \frac{-b-\sqrt{b^2-4ac}}{2a}
</code-block>

<code-block src="./Boletin_2/Ejercicio_11.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 12

Plantee e implemente un programa en Lenguaje C que solicite tres números enteros positivos (por teclado) y que muestre
por pantalla el cociente y el resto de dividir el mayor de ellos por el menor, con un formato similar al siguiente:

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca primer número:</b> 34<br/>
<b>Introduzca segundo número:</b> 22<br/>
<b>Introduzca tercer número:</b> 67<br/>
</p>
<code-block>
67 dividido |entre 22
            ------------
      R: 1    C: 3
</code-block>
</procedure>

<code-block src="./Boletin_2/Ejercicio_12.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 13

Plantee e implemente un programa en Lenguaje C para clasificar triángulos en función de las longitudes de sus lados, que
se solicitarán por teclado, de forma que se indique por pantalla si el triángulo es equilátero (todos los lados
iguales), isósceles (dos lados iguales) o escaleno (todos los lados diferentes).

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca la longitud del primer lado del triángulo (cm):</b> 125<br/>
<b>Introduzca la longitud del segundo lado del triángulo (cm):</b> 358<br/>
<b>Introduzca la longitud del tercer lado del triángulo (cm):</b> 125<br/>
</p>
<p>El triángulo es ISÓSCELES (lado1=lado3=125 cm)</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_13.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 14

Plantee e implemente un programa en Lenguaje C que solicite por teclado dos números enteros positivos (el primero de 3
cifras y el segundo de 1) y que muestre por pantalla su multiplicación en el formato que se indica en el ejemplo de
ejecución. Debe comprobar que el primer número tiene efectivamente 3 cifras y es positivo, y que el segundo número es
también positivo y tiene una única cifra. En caso de que no se cumplan estas condiciones, el programa debe alertar al
usuario con un mensaje apropiado (Ej. “El primer número no tiene 3 cifras!!!”).

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca un número entero positivo de 3 cifras:</b> 785<br/>
<b>Introduzca un número entero positivo de 1 cifra:</b> 7<br/>
</p>
<code-block>
      785
      x 7
     ====
     5495
</code-block>
</procedure>

**NOTA**: Observe un formato lo más similar posible al indicado en el ejemplo,
utilizando descriptores de formato en lugar de espacios en blanco para mostrar los
datos en forma de tabla.

<code-block src="./Boletin_2/Ejercicio_14.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 15

Plantee e implemente un programa en Lenguaje C que presente el menú que se especifica a continuación y que, según sea el
carácter introducido por el usuario, escriba en pantalla BEBÉ, ADOLESCENTE, MUJER, HOMBRE.

B.- Bebé <br/>
A.- Adolescente <br/>
M.- Mujer <br/>
H.- Hombre <br/>

<code-block src="./Boletin_2/Ejercicio_15.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 16

Plantee e implemente un programa en Lenguaje C que admita el nombre y la edad de una persona y muestre por pantalla si
la persona es JOVEN, ADULTA, o ANCIANA según los siguientes criterios:

1. Si tiene menos de 32 años es JOVEN.
2. Si tiene 32 o más años y menos de 75 es ADULTA.
3. Si tiene 75 o más años es ANCIANA.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Nombre:</b> Virginia Woolf<br/>
<b>Edad:</b> 21
</p>
<p>
Virginia Woolf es JOVEN (&lt;32)
</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_16.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 17

Plantee e implemente un programa en Lenguaje C que admita un carácter (introducido por teclado) y muestre por pantalla
si es una vocal, una consonante, un dígito o un carácter especial.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca un caracter:</b> +<br/>
+ es un caracter especial<br/>
<b>Introduzca un caracter:</b> A<br/>
A es una vocal<br/>
<b>Introduzca un caracter:</b> n<br/>
n es una consonante<br/>
<b>Introduzca un caracter:</b> 3<br/>
3 es un dígito<br/>
</p>
<p>56 es el número mayor de los tres introducidos</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_17.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 18

Plantee e implemente un programa en Lenguaje C que adivine un número del 1 al 10 conociendo su paridad y el resto de
dividirlo por cinco.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Piense un número del 1 al 10......</b><br/>
<b>¿El número que ha pensado es impar (1) o par (2)?</b> 2<br/>
<b>¿Cuál es el resto de dividir el número que ha pensado entre 5?</b> 3<br/>
</p>
<p>El número que ha pensado es el 8</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_18.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 19

Plantee e implemente un programa en Lenguaje C para calcular los días que tiene un mes. Tenga en cuenta que si el mes
introducido por el usuario es Febrero, el programa deberá solicitar el año del que se trata para poder determinar si es
bisiesto o no.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca el nombre del mes del que quiere calcular los días:</b> Julio<br/>
El mes de julio tiene 31 días.<br/>
</p>
<p>
<b>Introduzca el nombre del mes del que quiere calcular los días:</b> Febrero<br/>
<b>Introduzca el año:</b> 2010<br/>
El mes de febrero del año 2010 tiene 28 días.
</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_19.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 20

Plantee e implemente un programa en Lenguaje C que solicite el nombre, el peso (en kilos) y la altura (en centímetros)
de una persona por teclado y que calcule su índice de masa corporal, IMC=peso_en_kilos/(altura_en_metros)2, indicando
por pantalla si la persona está por debajo de su peso de salud (IMC<18.5), normal (18.5<=IMC<25), con sobrepeso de grado
I (25<=IMC<27), sobrepeso de grado II (27<=IMC<30) u obesa (IMC>=30).

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca usted su nombre:</b> Lourdes Smith<br/>
<b>Introduzca altura en centímetros:</b> 170<br/>
<b>Introduzca peso en kilos:</b> 54<br/>
</p>
<p>
Lourdes Smith, según el índice de masa corporal (IMC=18.68), tiene usted un PESO NORMAL para su estatura
</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_20.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 21

Plantee e implemente un programa en Lenguaje C que calcule la nota media de las 6 asignaturas de un curso académico a
partir de las calificaciones introducidas individualmente por teclado. Debe mostrar la calificación media también en
formato SOBRESALIENTE (9-10), NOTABLE (7-8.9), APROBADO (5-6.9), SUSPENSO (0-4.9). En el caso de que el alumno no se
haya presentado a alguna de las asignaturas, el usuario debe introducir 0 como calificación. En este último caso añada
además en la salida la nota media obtenida en las asignaturas a las que se ha presentado.

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>Introduzca calificación asignatura 1 (formato X.X, 0 para No Presentado):</b> 4.5<br/>
<b>Introduzca calificación asignatura 2 (formato X.X, 0 para No Presentado):</b> 5.2<br/>
<b>Introduzca calificación asignatura 3 (formato X.X, 0 para No Presentado):</b> 7.5<br/>
<b>Introduzca calificación asignatura 4 (formato X.X, 0 para No Presentado):</b> 3.8<br/>
<b>Introduzca calificación asignatura 5 (formato X.X, 0 para No Presentado):</b> 0<br/>
<b>Introduzca calificación asignatura 6 (formato X.X, 0 para No Presentado):</b> 6.4<br/>
</p>
<p>
Nota media: SUSPENSO (4.9)<br/>
Nota media asignaturas presentadas: APROBADO (5.88)
</p>
</procedure>

**NOTA**: Compruebe que las calificaciones introducidas por teclado son correctas, es decir, están entre 0 y 10 puntos.

<code-block src="./Boletin_2/Ejercicio_21.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 22

Plantee e implemente un programa en Lenguaje C que sume los primeros 100 números enteros pares por una parte y los
impares por otra.

<code-block src="./Boletin_2/Ejercicio_22.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 23

Plantee e implemente un programa en Lenguaje C que solicite un número por teclado y que esté constantemente solicitando
un número si no está comprendido entre 20 y 30 ambos inclusive.

<code-block src="./Boletin_2/Ejercicio_23.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 24

Plantee e implemente un programa en Lenguaje C que muestre por pantalla la tabla de multiplicar del 7 en un formato
similar al siguiente:

<code-block>
        TABLA DE MULTIPLICAR DEL 7
                  7 x 0 = 0
                  7 x 1 = 7
                  7 x 2 = 14
                  ........
                  ........
                  7 x 10 = 70
</code-block>

<code-block src="./Boletin_2/Ejercicio_24.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 25

Plantee e implemente un programa en Lenguaje C que muestre la tabla de multiplicar de los cinco primeros números en un
formato similar al indicado en el ejercicio anterior.

<code-block src="./Boletin_2/Ejercicio_25.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 26

Plantee e implemente un programa en Lenguaje C que muestre por pantalla la tabla de multiplicar (0-10) de un número
entero positivo introducido por el teclado. Muestre la salida en un formato similar al indicado en el ejercicio
anterior.

<code-block src="./Boletin_2/Ejercicio_26.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 27

Plantee e implemente un programa en Lenguaje C que sume los primeros 100 números enteros. Realícelo con cada uno de los
tres bucles.

<code-block src="./Boletin_2/Ejercicio_27.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 28

Plantee e implemente un programa en Lenguaje C que acepte valores enteros como entrada (por teclado) y que muestre por
pantalla la suma de los valores introducidos. El programa terminará cuando el usuario introduzca un 0, tal y como se
muestra en el ejemplo siguiente:

<procedure>
<title>Ejemplo de Ejecución</title>
<p>
<b>A continuación introduzca los números enteros de los que desee calcular la suma
separados por espacios:</b>
</p>
<code>$ 2 3 56 7 8 90 76 61 0</code>
<p>La suma de los números introducidos es 303</p>
</procedure>

<code-block src="./Boletin_2/Ejercicio_28.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 29

Plantee e implemente un programa en Lenguaje C que acepte valores reales como entrada (por teclado) y que muestre por
pantalla la media aritmética de los valores introducidos. El programa terminará cuando el usuario pulse enter, tal y
como se muestra en el ejemplo siguiente:

<procedure>
<title>Ejemplo de Ejecución</title>
<code>$ A continuación introduzca los números de los que desee calcular la media
separados por espacios:</code><br/>
<code>$ 23.5 67.6 78.9 56.86 4.5 9.4</code>
</procedure>

<code-block src="./Boletin_2/Ejercicio_29.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 30

Plantee e implemente un programa en Lenguaje C que reciba números enteros por teclado y al terminar indique cuánto vale
la suma de los números pares y los impares por separado. La entrada de números terminará cuando se introduzca un cero.

<code-block src="./Boletin_2/Ejercicio_30.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 31

Plantee e implemente un programa en Lenguaje C que muestre por pantalla una lista de los años bisiestos en el siglo XIX,
espere a que el usuario pulse una tecla y muestre los correspondientes al siglo XX.

<code-block src="./Boletin_2/Ejercicio_31.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 32

Plantee e implemente un programa en Lenguaje C que calcule la potencia N-ésima de un número entero introducido por el
teclado para valores no negativos de N.

<code-block src="./Boletin_2/Ejercicio_32.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 33

Plantee e implemente un programa en Lenguaje C que calcule el factorial de un número entero positivo introducido por
teclado.

<code-block src="./Boletin_2/Ejercicio_33.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 34

Plantee e implemente en Lenguaje C el programa Fibonacci, de forma que lea un valor N > 0 y muestre el valor del término
N de dicha sucesión.

<code-block src="./Boletin_2/Ejercicio_34.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 35

Plantee e implemente un programa en Lenguaje C que acepte caracteres por teclado hasta finalizar una línea (cuando el
usuario pulse enter) y vaya sumando un error cada vez que el carácter introducido no sea ni letra ni número. Muestre por
pantalla el número de errores totales contabilizados del modo indicado.

<code-block src="./Boletin_2/Ejercicio_35.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 36

Plantee e implemente un programa en Lenguaje C de forma que solicite un carácter y que, dependiendo del carácter
introducido, muestre por pantalla lo indicado y a continuación vuelva a mostrar el menú:

1. “Ahora dibujaría un rectángulo”, si se ha tecleado una R
2. “Ahora dibujaría un cuadrado”, si se ha tecleado una C
3. “Ahora dibujaría un pentágono” si se ha tecleado una P
4. “Ahora acabo el programa” si se ha tecleado una A

<code-block src="./Boletin_2/Ejercicio_36.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 37

Plantee e implemente un programa en Lenguaje C que a partir de un número entero mayor que 0 introducido por teclado
obtenga la suma de los primeros n términos de la sucesión de Fibonacci.

<code-block src="./Boletin_2/Ejercicio_37.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 38

Plantee e implemente un programa en Lenguaje C para convertir un número decimal a binario.

<code-block src="./Boletin_2/Ejercicio_38.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 39

Plantee e implemente un programa en Lenguaje C de generación de quinielas de forma aleatoria . El programa deberá
mostrar en pantalla tantas quinielas como desee el usuario; se considera que todos los resultados son igualmente
probables. El número máximo de quinielas generables simultáneamente es de 10. Las quinielas se mostrarán en pantalla del
modo habitual, esto es, ordenadas por filas (partidos) y columnas (resultados). Las opciones del programa serán: I)
ndicar número de quinielas, M)ostrar quinielas, S)alir. No se podrán mostrar las quinielas sin haber indicado
previamente el número de quinielas deseado.

<code-block src="./Boletin_2/Ejercicio_39.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 40

Plantee e implemente un programa en Lenguaje C que, a partir de un límite introducido por el usuario a través del
teclado, obtenga el número de términos de la serie que es necesario tomar para satisfacer la desigualdad:

<emphasis>1 + 1/2+ 1/3 +....... + 1/n > límite</emphasis>

<code-block src="./Boletin_2/Ejercicio_40.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 41

Plantee e implemente un programa en Lenguaje C que muestre por pantalla los primeros 1000 números enteros que cumplen la
siguiente condición

<emphasis>x^2^ + y^2^ =z^2^</emphasis>

<code-block src="./Boletin_2/Ejercicio_41.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 42

Plantee e implemente un programa en Lenguaje C que de pase de euros (€) a dólares ($USA). El programa admitirá un tipo
de cambio razonable, esto es, no negativo ni excesivamente grande.

<code-block src="./Boletin_2/Ejercicio_42.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 43

Plantee e implemente un programa en Lenguaje C que proporcione un valor aproximado del número e a partir del siguiente
desarrollo de Taylor con error menor de 0,0001:

<code-block lang="tex">
e^x=1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+\frac{x^4}{4!}+...+\frac{x^n}{n!}+... \forall x \in \mathbb{R}
</code-block>

<code-block src="./Boletin_2/Ejercicio_43.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 44

Plantee e implemente un programa en Lenguaje C que reciba dos enteros positivos y clasifique como perfecto, abundante o
deficiente cada número del intervalo comprendido entre ambos, sabiendo que un número deficiente es el que la suma de sus
divisores propios (divisores positivos menores que el propio número) es menor que él; número perfecto es el que la suma
de sus divisores propios es igual a él; y número abundante es el que la suma de sus divisores propios es mayor que él.

<code-block src="./Boletin_2/Ejercicio_44.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 45

Plantee e implemente un programa en Lenguaje C que calcule cuantos años tarda en doblarse un capital inicial (
introducido por teclado), si se recibe un % de intereses al año, también determinado por el usuario a través del
teclado.

<code-block src="./Boletin_2/Ejercicio_45.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 46

Plantee e implemente un programa en Lenguaje C muestre por pantalla la tabla de multiplicación en el siguiente formato:

<code-block>
    1    2   3   4   5   6   7   8   9
1   1
2   2    4
3   3    6   9
4   4    8  12  16
5   5   10  15  20  25
6   6   12  18  24  30  36
..  ..  ..  ..  ..  ..  ..  ..  .. 
9   9   18  27  36  45  54  63  72  81
</code-block>

<code-block src="./Boletin_2/Ejercicio_46.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 47

Plantee e implemente un programa en Lenguaje C para obtener las primeras n filas del triángulo de Floyd.

<code-block src="./Boletin_2/Ejercicio_47.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 48

Plantee e implemente un programa en Lenguaje C para obtener elementos del triángulo de Floyd hasta un número dado.

<code-block src="./Boletin_2/Ejercicio_48.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 49

Plantee e implemente un programa en Lenguaje C que muestre por pantalla un menú en el que el usuario pueda elegir entre:

- Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de aquellos
  números contenidos en un intervalo de enteros indicado por el usuario.
- Mostrar por pantalla los divisores de un número entero que indique el usuario.
- Salir del programa.

<code-block src="./Boletin_2/Ejercicio_49.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>

### Ejercicio 50

Plantee e implemente en Lenguaje C el juego MasterMind, empleando sentencias do…while

<code-block src="./Boletin_2/Ejercicio_50.c" lang="C" collapsible="true" collapsed-title="Mostrar Solución"/>
