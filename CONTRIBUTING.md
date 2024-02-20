# Introducción

### Gracias por querer colaborar

Primero de todo gracias por querer colaborar con **Pro2324**, gracias a gente como tú proyectos como este són posibles.
😄🥰

### Qué contribuciones se aceptan

Aceptamos soluciones a **ejercicios** de los boletines, modificaciones de los ya existentes o nuevos ejercicios. También
evidentemente **parches a cualquier error** que se escape por el repositorio.

Se aceptan contribuciones de **exámenes de prácticas** (o similar) con un candidato a solución. Si resultaran de
interés, también se añadirán **ejemplos** y/o **extras** que puedan resultar educativos/interesantes.

Se aceptan **explicaciones**, **apuntes** y/o **resúmenes** para los apartados de teoría. También **tutoriales** que
sean interesantes y estén relacionados con la programación en C y/o similar.

### Qué contribuciones no se aceptarán

> **Actualización**: Debido a las normas de Pro II, no se aceptará ningún proyecto, incluso después de la fecha de entrega.

No se añadirá, ningún **proyecto**.

Tampoco se añadirá código que no sea de creación propia o que fuera conseguido de forma ilícita.

Ni se añadirán exámenes, pruebas o demás material **cuyo autor/a no expresase el consentimiento pertinente**.

### ¿Como contribuir?

> Cita siempre al autor original o a los coautores de todo lo que añadas, **hoy por ti mañana por mi**.

Este Repositorio usa varias funciones de GitHub recientes, entre ellas proyectos. [Enlace al tabloide](https://github.com/users/TeenBiscuits/projects/1)

Cuando se añada algo que esté especificado en el tabloide, se añadirá a la **branch** ya abierta para ello.

En el caso de añadir algo nuevo, pues simplemente haz una pull request.

#### Código

**Todo el código está en la carpeta** ``./src`` **y una copia solo de los archivos** ``*.c`` **en el directorio de la
documentación** ``./docs/code`` Esto es temporal, pero es lo mejor que se puede hacer ahora para que la documentación
funcione.

Para este proyecto se utiliza la revisión de lenguaje C, **C99** (ISO/IEC 9899:1999). El proyecto ha sido estructurado
como un proyecto para el IDE **CLion** by JetBrains (R).

Cada boletín de la asignatura se encuentra en una sub carpeta diferente (Boletin_1, Boletin_2, Boletin_3...). Por otra
parte, son una excepción a esta regla la carpeta *Ejemplos* y *Extras*, donde se añadirá el código hecho en prácticas y
el código que se considere de interés respectivamente.

Cada archivo ```*.c``` es un ejecutable diferente declarado en ``./src/*/CMakeLists.txt`` que a su vez es referenciado
en el ``./CMakeLists.txt`` del directorio raíz. (Están todos declarados, los que todavía no fueron añadidos con
un ``#``) Además de añadir sú código también a la carpeta ``./docs/code`` para que pueda ser referenciado más tarde en
la documentación.

Por norma general en cada boletín **solo se empleará lo aprendido en teoría hasta ese bloque**, así los ejercicios
valdrán
para quién todavía esté empezando. En lo referente a los ejercicios en sí se acepta cualquier programa que siga los
principios del **Teorema de Böhm y Jacopini (o de la programación estructurada)**.

Cabe destacar que es recomendable **añadir comentarios** para dejar por escrito que hacía el programa. En cuanto a la
cabecera (las primeras líneas del archivo) CLion añade una pequeña nota por defecto, que resulta útil para dar crédito a
los/as autores/as de los archivos:

```C
//
// Created by <nombre> on dd/mm/yyyy.
//
```

Pese a la comodidad de esto, la cabecera que se añadirá será la del **reuse**:

```C
// SPDX-FileCopyrightText: 2024 <nombre> <apellido1> <apellido2>
//
// SPDX-License-Identifier: GPL-3.0-only
```

_Si no es añadida por defecto, añádela, así aquellos que ven los archivos en la web sabrán quien creo el archivo._

A la hora de compilar los ejecutables puede utilizarse cualquier compilador, pero es recomendable, en Windows,
utilizar [Cywing](https://www.cygwin.com) (Para el correcto de display de tíldes y otros caracteres especiales).

*Tutorial de configuración de Cywing en CLion en Windows
10/11: [Link](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html#Cygwin)*

#### Documentación

La documentación del proyecto ha sido estructurada como un proyecto para el IDE **Writerside** by JetBrains (R).

La documentación se separa en dos partes claramente diferenciadas. Código y Teoría.

El código sale de las contribuciones al repositorio principal y se añade a secciones como: Boletines, Exámenes,
Tutoriales y Extras.

La teoría se basa en trabajos previos readaptados a este nuevo formato. Cualquier añadido es bienvenido, siempre que
mejore la calidad educativa y la sencillez de las explicaciones. Más no es siempre mejor. La teoría se añade a secciones
como: Apuntes, Ejemplos y Tutoriales.

Las imágenes están en subdirectorios ``./docs/images/*`` para mantener organizado la cantidad inmensa de imágenes.

Para facilitar las contribuciones hay una página oculta llamada ``Para Colaboradores`` con algunas estructuras
reutilizables.