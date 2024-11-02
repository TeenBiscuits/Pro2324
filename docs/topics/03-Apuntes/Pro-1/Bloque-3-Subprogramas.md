<!--
SPDX-FileCopyrightText: 2024 Daniel Feito Pin

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Estos apuntes también están en: [Pásame el Código](https://pc.pablopl.dev/prouno/apuntes/b3-subprogramas/)

</procedure>

<tip>Copyright © 2024 Daniel Feito Pin</tip>

# Bloque 3 - Subprogramas

<tldr id="tldr">

Funciones, recursividad y retorno de datos. Divide y vencerás.

</tldr>

## Introducción

La programación estructurada original se basa en la técnica
**Divide y vencerás**:

- Descomposición de un problema complejo en subproblemas más
  simples y manejables.
- Se el problema en tareas y cada tarea en una serie de subprogramas que incluirán los algoritmos más adecuados para
  cada tarea.
    - Técnica TOP-DOWN o de Refinamiento Sucesivo.

Un **subprograma** o subrutina es un conjunto de instrucciones que permiten la ejecución de algún proceso determinado y
lógico desde el punto de vista humano.

Los esfuerzos del programador deben concentrarse en que cada
subprograma presente:

- Interfaz consistente (comunicación con el resto del programa).
- Descripción correcta de los argumentos de entrada y salida.
- Independencia del resto.

Los subprogramas se escriben una **única vez**, luego es posible hacer referencia a ellos (invocarlos o llamarlos) desde
diferentes puntos del código:

- Son un conjunto de instrucciones con un nombre asignado.
- Permiten su reutilización y evitan la duplicación de código.

Los subprogramas son independientes entre sí:

- Es posible codificar y verificar cada módulo o subprograma de forma separada sin tener en cuenta los demás módulos.
- Facilitan la localización de errores y la modificación del código.
- Permiten seguir un diseño modular.
    - Programas legibles.
    - Adaptación natural al trabajo colaborativo o en equipo.

### Resumen

- Permiten **modularidad** (diseño modular top-down).
- Proporcionan **reutilización** del código.
    - Se escriben una única vez y se invocan siempre que es necesario.
- Proporcionan **abstracción**.
    - Se comportan como una caja negra.
- Permiten **distribuir el trabajo**.
    - Dividen el problema en subproblemas.
- Mejoran la **depuración** de código.
    - Simplifican la localización de errores.

## Concepto

Las **subrutinas** son un conjunto de sentencias que tienen asociado un identificador y que se ejecutan como un grupo
cuando se invocan desde la sección ejecutable del
programa para que realicen una tarea.

Un procedimiento es una **unidad** desde el punto de vista:

- Físico: todas las instrucciones están agrupadas físicamente en un mismo lugar.
- Lógico: entre todas las sentencias se realiza una única tarea.
- Referencial: existe un identificador para referirse al conjunto de instrucciones.

Las subrutinas se pueden clasificar en dos grupos:

- Subrutinas estándar.
- Subrutinas definidas por el usuario.

## Funciones en C

Una **función** es una serie de declaraciones que se han agrupado y se les ha dado un nombre.

- Cada función es esencialmente un programa pequeño, con sus propias declaraciones e instrucciones.

Ventajas de las funciones:

- Un programa se puede dividir en partes pequeñas que son más fáciles de entender, modificar y mantener.
- Se evita duplicar el código que se usa más de una vez.
- Una función que originalmente era parte de un programa puede ser reutilizada en otros programas.

### Declaración de funciones

Declaración de una función:

```c
/* tipo de retorno */ /* nombre */ ( /* parametros */ ) {
    /* declaraciones locales */
    /* instrucciones */
    return /* valor de retorno */
}
```

El **tipo de retorno** de una función es el tipo de valor que la función devuelve.

Reglas que rigen el tipo de retorno:

- Las funciones no pueden devolver matrices.
- Especificar el tipo de retorno `void` indica que la función no devuelve un valor.
- Si se omite el tipo de retorno en `C89`, se supone que la función devuelve un valor de tipo `int`.
- En `C99`, omitir el tipo de retorno es ilegal.

C no requiere que la definición de una función preceda a sus llamadas.

Aun así, cuando el compilador encuentra la primera llamada a la función en `main()` y no tiene información sobre la
misma, en lugar de generar un mensaje de error, el compilador asume que la función devuelve un valor `int` y genera un
mensaje de _warning_.

- Se dice que el compilador ha creado una declaración implícita de la función.
- Esto puede causar muchos problemas.
- Solución evidente: organizar el programa de modo que la definición de cada función preceda a todas sus llamadas.

### Llamada a funciones

La llamada a una función consiste en el nombre de la función seguido por la lista de **argumentos**.

- Los argumentos se utilizan para suministrar información a una función.
- Los valores de los argumentos se copian en los parámetros de la función definida.

### Argumentos

Los argumentos pueden pasarse por **valor** o por **referencia**.

Cuando los argumentos se pasan por **valor**, al llamar a una función, cada argumento se evalúa y su valor se asigna al
parámetro correspondiente.

- El parámetro contiene una **copia** del valor del argumento.
- Cualquier cambio realizado en el parámetro durante la ejecución de la función **no** afectará al argumento.
- Con un paso de argumentos por valor, el parámetro puede modificarse sin afectar el argumento correspondiente, podemos
  usar parámetros como variables dentro de la función, reduciendo así el número de variables necesarias.

Se puede realizar el paso de parámetros por **referencia** mediante el uso de punteros.

- La alteración ded valor de los parámetros en un paso de argumentos por referencia modifica los argumentos originales.

### Retorno

Si una función no es definida como `void` debe usar la declaración de `return` para especificar qué valor devolverá.

Si el tipo de expresión en una declaración de retorno no coincide con el tipo de retorno de la función, la expresión se
convertirá implícitamente al tipo de retorno.

Ejecutar una declaración `return` en `main()` es una forma de finalizar.

- Otra forma es llamar a la función `exit()`, que pertenece a `<stdlib.h>`.

#### exit()

La diferencia entre el `exit()` y `return` es que `exit()` provoca la terminación del programa independientemente de la
función que lo llame.

La declaración de `return` provoca la finalización del programa solo cuando aparece en la función principal `main()`.

Además de 0, C permite pasar `EXIT_SUCCESS` (el efecto es el
mismo).

```c
exit(EXIT_SUCCESS);
```

Pasar `EXIT_FAILURE` indica terminación anormal.

```c
exit(EXIT_FAILURE);
```

`EXIT_SUCCESS` y `EXIT_FAILURE` son macros definidas en `<stdlib.h>`.

Los valores de `EXIT_SUCCESS` y `EXIT_FAILURE` están definidos por la implementación.

- Los valores típicos son `0` y `1`, respectivamente.

## Recursividad

Algo es recursivo cuando está definido en términos de sí mismo.

- Hay un **caso base** en el que el resultado es **inmediato**.
- Hay un **caso general** que para resolverlo nos acercamos al caso base en sucesivas veces.

La Potencia de la recursión está en poder definir un número infinito de objetos utilizando un enunciado finito.

En programación, la recursividad es la capacidad de un rutina de llamarse a sí misma.

Los algoritmos recursivos suelen ser apropiados cuando se define de forma recursiva:

- La tarea a resolver.
- La función a calcular.
- La estructura de datos a procesar.

### Funciones recursivas vs funciones iterativas

En la mayoría de los casos la solución recursiva no es la mejor porque pueden obtenerse soluciones simples por
iteración.

Sin embargo permite resolver de forma natural problemas de tipo recursivo difíciles de abordar.

La clase de funciones que tienen definiciones de la forma:

**F<sub>n</sub>(x) = G(x)** _si_ **n = 0** _y_ **F<sub>n</sub>(x) = H(F<sub>n-1</sub>(x))** _si_ **n > 0**

siempre puede expresarse iterativamente.

```c
/* Función factorial recursiva */
int fact(int n) {
    if (n <= 1) return 1;
    else return n * fact(n - 1);
}
```

```c
/* Función factorial iterativa */
int fact(int n) {
    int aux;
    for(i=1;i>=n;i++) aux=aux*i;
    return aux;
}
```

### Recursión infinita.

Si un procedimiento o función no termina nunca de llamarse equivale a un bucle infinito.

Si un algoritmo recursivo no tiene punto de salida entonces está mal definido.

Hay que considerar la terminación de la recursión tal que:

- Exista una salida no recursiva para el caso base.
- Cada invocación recursiva debe referirse a un caso mas pequeño del que fue invocado.
