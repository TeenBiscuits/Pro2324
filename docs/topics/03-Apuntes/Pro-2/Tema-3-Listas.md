<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

<tip>Copyright © 2024 Pablo Portas López</tip>

# Tema 3 - Listas

<tldr id="tldr"></tldr>

## TAD Lista

## TAD Lista ordenada

## Comparación entre TADs

## Archivo de Cabecera TAD

```C
#include <stdbool.h>

#define LNULL ...; //Constante que representa posiciones nulas

// Se define en funcion del problema
typedef ... tItemL;
typedef ... tPosL;
typedef ... tList;

// Generadoras
void createEmptyList(tList* L);
bool insertItem(tItemL d, tPosL p, tList* L);

// Modificadoras
bool copyList(tList L, tList* M);
void updateItem(tItemL d , tPosL p, tList* L);

// Destructoras
void deleteAtPosition(tPosL p, tList* L);
void deleteList(tList* L);

// Observadoras
tPosL findItem(tItemL d, tList L);
bool isEmptyList(tList L);
tItemL getItem(tPosL p, tList L);
tPosL first(tList L) ;
tPosL last(tList L);
tPosL previous(tPosL p, tList L);
tPosL next(tPosL p, tList L);
```

## Multilistas

En problemas de programación reales hacen falta soluciones complejas. Es habitual combinar múltiples TAD simples para
construir un TAD complejo.

En este caso el TAD multilistas es un ejemplo de combinación de TADs, en este caso, listas.

### TAD Multilistas

<warning><b>¡En construcción! <a href="https://github.com/TeenBiscuits/Pro2324">Colabora</a></b></warning>

### TAD Multiordenadas

<warning><b>¡En construcción! <a href="https://github.com/TeenBiscuits/Pro2324">Colabora</a></b></warning>