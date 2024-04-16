<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: GPL-3.0-only
-->

# Introducción

> [!IMPORTANT]  
> **Gracias por querer colaborar**
> 
> Primero de todo gracias por querer colaborar con **Pro2324**, gracias a gente como tú proyectos como este són posibles.


- [Introducción](#introducción)
  - [Qué contribuciones se aceptan](#qué-contribuciones-se-aceptan)
  - [Qué contribuciones no se aceptarán](#qué-contribuciones-no-se-aceptarán)
- [¿Como contribuir?](#como-contribuir)
  - [Código](#código)
    - [Compilador](#compilador)
  - [Documentación](#documentación)


## Qué contribuciones se aceptan

> [!TIP]
> Soluciones a **ejercicios**, **modificaciones**, **ejemplos**, **tutoriales**, **apuntes**...

Aceptamos soluciones a **ejercicios** de los boletines, modificaciones de los ya existentes o nuevos ejercicios. También
evidentemente **parches a cualquier error** que se escape por el repositorio.

Se aceptan contribuciones de **exámenes de prácticas** (o similar) con un candidato a solución. Si resultaran de
interés, también se añadirán **ejemplos** y/o **extras** que puedan resultar educativos/interesantes.

Se aceptan **explicaciones**, **apuntes** y/o **resúmenes** para los apartados de teoría. También **tutoriales** que
sean interesantes y estén relacionados con la programación en C y/o similar.

## Qué contribuciones no se aceptarán

> [!CAUTION]
> Debido a las normas de Pro II, no se aceptará ningún proyecto, incluso después de la fecha de entrega.

No se añadirá, ningún **proyecto**.

Tampoco se añadirá código que no sea de creación propia o que fuera conseguido de forma ilícita.

Ni se añadirán exámenes, pruebas o demás material **cuyo autor/a no expresase el consentimiento pertinente**.

# ¿Como contribuir?

> [!TIP]
> Cita siempre al autor original o a los coautores de todo lo que añadas, **hoy por ti mañana por mi**.

> [!NOTE]
> Este Repositorio usa varias funciones de GitHub recientes, entre ellas proyectos. [Enlace al tabloide](https://github.com/users/TeenBiscuits/projects/1)

1. Clonar este repositorio en tu máquina.
```bash
git clone https://github.com/TeenBiscuits/Pro2324.git
```
O [descargar zip](https://github.com/TeenBiscuits/Pro2324/archive/refs/heads/main.zip) / abrir en GitHub Descktop

2. Si vas a contribuir al [código](#código) o la [documentación](#documentación):
   1. [CLion](https://www.jetbrains.com/clion/download) (o cualquier IDE. Ej: [VSCode](https://code.visualstudio.com/))
   2. [Writerside](https://www.jetbrains.com/writerside/download)

## Código

> [!WARNING]
> **Todo el código está en la carpeta** ``./src`` **y una copia solo de los archivos** ``*.c`` **en el directorio de la documentación** ``./docs/code``.
>
>Esto es temporal, pero es lo mejor que se puede hacer ahora para que la documentación funcione.

Para este proyecto se utiliza la revisión de lenguaje C, **C99** (ISO/IEC 9899:1999). El proyecto ha sido estructurado
como un proyecto para el IDE **CLion** by JetBrains (R).

Cada boletín de la asignatura se encuentra en una sub carpeta diferente (Boletin_1, Boletin_2, Boletin_3...). Por otra
parte, son una excepción a esta regla la carpeta *Ejemplos* y *Extras*, donde se añadirá el código hecho en prácticas y
el código que se considere de interés respectivamente.

> [!NOTE]
> Cada archivo ```*.c``` es un ejecutable diferente declarado en ``./src/*/CMakeLists.txt`` que a su vez es referenciado en el ``./CMakeLists.txt`` del directorio raíz. (Están todos declarados, los que todavía no fueron añadidos con un ``#``)
> 
> Además se añadirá su código también a la carpeta ``./docs/code`` para que pueda ser referenciado más tarde en la documentación.


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

> [!NOTE]
> Si no es añadida por defecto, añádela, así aquellos que ven los archivos en la web sabrán quien creo el archivo.

### Compilador

A la hora de compilar los ejecutables puede utilizarse cualquier compilador, pero es recomendable, en Windows,
utilizar [Cywing](https://www.cygwin.com) (Para el correcto de display de tíldes y otros caracteres especiales).

*Tutorial de configuración de Cywing en CLion en Windows
10/11: [Link](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html#Cygwin)*

## Documentación

> [!NOTE]
> La documentación del proyecto ha sido estructurada como un proyecto para el IDE **Writerside** by JetBrains (R).

La documentación se separa en dos partes claramente diferenciadas. **Código** y **Teoría**.

El código sale de las contribuciones al repositorio principal y se añade a secciones como: Boletines, Exámenes, Tutoriales y Extras.

La teoría se basa en trabajos previos readaptados a este nuevo formato. Cualquier añadido es bienvenido, siempre que mejore la calidad educativa y la sencillez de las explicaciones. 

_Más no es siempre mejor._

La teoría se añade a secciones como: Apuntes, Ejemplos y Tutoriales.

Las imágenes están en subdirectorios ``./docs/images/*`` para mantener organizado la cantidad inmensa de imágenes.

Para facilitar las contribuciones hay una página oculta llamada ``Para Colaboradores`` con algunas estructuras
reutilizables.