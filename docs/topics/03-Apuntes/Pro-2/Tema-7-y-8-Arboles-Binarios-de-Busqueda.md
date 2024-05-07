<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

<tip>Copyright © 2024 Pablo Portas López</tip>

# Tema 7 y 8 - Árboles Binarios de Búsqueda ABB y Equilibrados AVL

<tldr id="tldr">

El TAD Árbol Binario de Búsqueda ABB y el TAD Árbol Binario de Búsqueda AVL, especificación informal, implementación y
descripción gráfica. Operaciones explicadas de forma gráfica e implementadas.

</tldr>

## TAD Árbol Binario de Búsqueda ABB

### Definición {id=abb-definicion}

- Es un árbol binario.
- Tiene asociada una clave de ordenación _k_.
- Cumple para cualquier nodo _T_ del árbol:
    - los valores de los nodos del subárbol **izquierdo** de _T_ son **menores** que el valor de _T_.
    - los valores de los nodos del subárbol **derecho** son _T_ mayores que el valor de _T_.

- **Mayor eficiencia** frente a...
    - estructuras **estadísticas** en operaciones de **inserción** y **eliminación**.
    - estructuras **dinámicas** en la operación de **búsqueda**.

```mermaid
---
title: Árbol binario de búsqueda (ABB)
---
flowchart
    k(((k))) --> A[/claves < k\] & B[/claves > k\]

```

| Pros                                                       | Contras                                                                                  |
|------------------------------------------------------------|------------------------------------------------------------------------------------------|
| Eficiencia del proceso de búsqueda en árboles equilibrados | Si los nodos se añaden en un orden aleatorio habrá que equilibrarlo                      |
|                                                            | Si los nodos se añaden en un orden determinado el árbol degenerará en una lista ordenada |
