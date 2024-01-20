# Introducción

### Gracias por querer colaborar

Primero de todo gracias por querer colaborar con Pro2324, gracias a gente como tú proyectos como este són posibles. 😄🥰

### Qué contribuciones se aceptan

Aceptamos soluciones a ejercicios de los boletines, modificaciones de los ya existentes o nuevos ejercicios. También
evidentemente parches a cualquier error que se escape por el repositorio.

Se aceptan contribuciones de exámenes de prácticas (o similar) con un candidato a solución. Si resultaran de interés,
también se añadirán ejemplos y/o extras que puedan resultar educativos/interesantes.

Se aceptan explicaciones y/o resúmenes para los apartados de teoría. También tutoriales que sean interesantes y
relacionados con la programación en C y/o relacionado.

### Qué contribuciones no se aceptarán

No se añadirá, ningún proyecto de entrega obligatoria. Los proyectos deben ser realizados por el/la alumno/a en
cuestión.

Tampoco se añadirá código que no sea de creación propia o que fuera conseguido de forma ilícita.

### ¿Como contribuir?

#### Código

**Todo el código está en la carpeta** ``./src`` **y una copia solo de los archivos** ``*.c`` **en el directorio de la
documentación** ``./docs/code``

Para este proyecto se utiliza la revisión de lenguaje C, **C99** (ISO/IEC 9899:1999). El proyecto ha sido estructurado
como un proyecto para el IDE **CLion** by JetBrains (R).

Cada boletín de la asignatura se encuentra en una sub carpeta diferente (Boletin_1, Boletin_2, Boletin_3...). Por otra
parte, son una excepción a esta regla la carpeta *Prácticas* y *Extras*, donde se añadirá el código hecho en prácticas y
el código que se considere de interés respectivamente.

Cada archivo ```*.c``` es un ejecutable diferente declarado en ``./src/*/CMakeLists.txt`` que a su vez es referenciado
en el ``./CMakeLists.txt`` del directorio raíz. (Están todos declarados, los que todavía no fueron añadidos con
un ``#``) Además de añadir sú código también a la carpeta ``./docs/code`` para que pueda ser referenciado más tarde en
la documentación.

Por norma general en cada boletín solo se empleará lo aprendido en teoría hasta ese bloque, así los ejercicios valdrán
para quién todavía esté empezando.

Cada autor tiene una *branch* de este repositorio, que son fusionadas con ``main`` cada poco.

A la hora de compilar los ejecutables puede utilizarse cualquier compilador, pero es recomendable, en Windows,
utilizar [Cywing](https://www.cygwin.com) (Para el correcto de display de tíldes y otros caracteres especiales).

*Tutorial de configuración de Cywing en CLion en Windows
10/11: [Link](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html#Cygwin)*

#### Documentación

La documentación del proyecto ha sido estructurada como un proyecto para el IDE **Writeside** by JetBrains (R).

La documentación se separa en dos partes claramente diferenciadas. Código y Teoría.

El código sale de las contribuciones al repositorio principal y se añade a secciones como: Boletines, Exámenes,
Tutoriales y Extras.

La teoría se basa en trabajos previos readaptados a este nuevo formato. Cualquier añadido es bienvenido, siempre que
mejore la calidad educativa y la sencillez de las explicaciones. Más no es siempre mejor. La teoría se añade a secciones
como: Apuntes - Teoría, Ejemplos y Tutoriales.