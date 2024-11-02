<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>
<secondary-label ref="wip"/>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Estos apuntes también están en: [Pásame el Código](https://pc.pablopl.dev/prodos/apuntes/t6-arboles/)

</procedure>

<tip>Copyright © 2024 Pablo Portas López</tip>

# Tema 6 - Árboles

<tldr id="tldr">

El TAD Árbol Binario, definiciones, especificación informal, implementación y descripción gráfica. Operaciones
explicadas de forma gráfica e implementadas. Recorridos en profundidad (preorden, inorden y posorden) y recorrido en
anchura.

</tldr>

## ¿Que es un árbol?

```mermaid
---
title: Esto es un Árbol
---
flowchart TB
    A(((_A_))) --> B((_B_)) & C((_C_)) & F((_F_))
    B --> G((_G_)) & H((_H_))
```

Definido por:

- Una raíz: `A`, padre de `B`, `C` y `F`.
- `G` hermanos `H`, hijos de `B` y descendientes de `A`.
- Altura del árbol: `3`
- Grado del árbol: `3` (Nº de hijos máximo, alcanzado por `A`)

<note>

Para más sobre árboles en la informática: [Wikipedia](https://es.wikipedia.org/wiki/Arbol_(informatica))

</note>

Para trabajar con **Árboles Binarios** es importante tener claro el concepto de **árbol lleno** y **árbol completo**.

<table>
<tr><td>Árbol Lleno</td><td>Árbol Completo</td></tr>
<tr><td>
<control>Todas sus hojas están al mismo nivel</control> <code>h</code> y todos los nodos anteriores
tienen el <control>número máximo de hijos</control> (en un árbol binario, 2).
</td><td>
<control>Todas sus hojas llenas hasta</control> <code>h-1</code> y <control>todos los nodos del nivel</control> <code>h</code> están lo más a la <control>izquierda</control> posible.
</td></tr>
<tr><td> 
<code-block lang="mermaid">
flowchart TB
A(((_A_))) --&gt; B((_B_)) &amp; C((_C_))
B --&gt; D((_D_)) &amp; E((_E_))
C --&gt; F((_F_)) &amp; G((_G_))
</code-block>
</td><td>
<code-block lang="mermaid">
flowchart TB
A(((_A_))) --&gt; B((_B_)) &amp; C((_C_))
B --&gt; D((_D_)) &amp; E((_E_))
C --&gt; F((_F_)) &amp; NULL(NULL)
</code-block>
</td></tr>
</table>

## TAD Árbol Binario

Un árbol binario es un conjunto cero o más de elementos del mismo tipo llamados nodos.

- O bien 0 nodos, en cuyo casa: **árbol vacío**
- O bien existe un elemento distinguido **llamado raíz**, y el resto de los nodos se distribuyen en dos subconjuntos, y
  a su
  vez cada nodo tiene una serie de **hasta dos hijos** los cuales solo pueden tener **hasta dos hijos**. Formando así
  los
  subconjuntos siguientes.

```mermaid
---
title: TAD Árbol Binario
---
flowchart TB
    TREE[ÁRBOL] --> A[[A]] --> B[[B]] & C[[C]]
    B --> D[[D]] & E[NULL]
    D --> H[NULL] & I[NULL]
    C --> F[NULL] & G[NULL]
```

### Operaciones

Siguiendo los pasos para la especificación de un TAD, definimos las operaciones del mismo clasificándolas en:
constructoras, generadoras, modificadoras, observadoras y destructoras.

<note>

Para más información: [](Tema-1-Tipos-Abstractos-de-Datos-TAD.md#especificaci-n-de-un-tad)

</note>

#### Generadoras

<list>
<li>
<code-block lang="tex"> createEmptyTree \rightarrow Tree </code-block><br/>
<p>
Objetivo: Crea un árbol vacío<br/>
Salida: Un árbol vacía<br/>
PosCondición: El árbol sin datos<br/>
</p>
<code-block lang="mermaid">
flowchart LR
    TREE(ÁRBOL) -.-&gt; NULL[[NULL]]
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/createEmptyTree.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> BuildTree (Tree, Item, Tree) \rightarrow Tree, bool </code-block><br/>
<p>
Objetivo: Crea un árbol con cierta información en la raíz y como hijos los árboles que se reciben en las entradas.<br/>
Entrada: <br/>
- Tree(1): Árbol que constituirá el hijo izquierdo.<br/>
- Item: Contenido del elemento raíz.<br/>
- Tree(2): Árbol que constituirá el hijo derecho.<br/>
Salida: Tree: Nuevo árbol construido y verdadero si se ha podido construir, falso en caso contrario.<br/>
</p>
<code-block lang="mermaid">
flowchart TB
TREE1(ÁRBOL1) -.-&gt; A[[A]] --&gt; B[[B]] &amp; C[[C]]
ITEM
TREE2(ÁRBOL2) -.-&gt; 1[[1]] --&gt; 2[[2]] &amp; 3[[3]]
</code-block>
<code-block lang="mermaid">
flowchart TB
TREE1(ÁRBOL1) -.-&gt; A[[A]] --&gt; B[[B]] &amp; C[[C]]
TREE3(ÁRBOL) -.-&gt; ITEM[[ITEM]]
TREE2(ÁRBOL2) -.-&gt; 1[[1]] --&gt; 2[[2]] &amp; 3[[3]]
</code-block>
<code-block lang="mermaid">
flowchart TB
TREE1(ÁRBOL1) -.-&gt; A[[A]] --&gt; B[[B]] &amp; C[[C]]
TREE3(ÁRBOL) -.-&gt; ITEM[[ITEM]] --&gt; A &amp; 1
TREE2(ÁRBOL2) -.-&gt; 1[[1]] --&gt; 2[[2]] &amp; 3[[3]]
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/buildTree.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

#### Observadoras

<list>
<li>
<code-block lang="tex"> leftChild(Tree) \rightarrow Tree </code-block><br/>
<p>
Objetivo: Devuelve el árbol que constituye el hijo izquierdo del árbol<br/>
Entrada: Tree: Árbol a manipular<br/>
Salida: Tree: Árbol que constituye el hijo izquierdo o nulo del árbol<br/>
Precondición: El árbol no está vacío<br/>
</p>
<code-block lang="mermaid">
flowchart TB
  A[[A]] --&gt; B[[B]] &amp; C[[C]]
  LEFT(leftChild) -.-&gt; B
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/leftChild.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> rightChild(Tree) \rightarrow bool </code-block><br/>
<p>
Objetivo: Devuelve el árbol que constituye el hijo derecho del árbol<br/>
Entrada: Tree: Árbol a manipular<br/>
Salida: Tree: Árbol que constituye el hijo derecho o nulo del árbol<br/>
Precondición: El árbol no está vacío<br/>
</p>
<code-block lang="mermaid">
flowchart TB
  A[[A]] --&gt; B[[B]] &amp; C[[C]]
  RIGHT(rightChild) -.-&gt; C
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/rightChild.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> root(Tree) \rightarrow Item </code-block><br/>
<p>
Objetivo: Devuelve el dato de la raíz del árbol<br/>
Entrada: Tree: Árbol a manipular<br/>
Salida: Item: Contenido del elemento de la raíz<br/>
PreCondición: El árbol no está vacío<br/>
</p>
<code-block lang="mermaid">
flowchart TB
  TREE2(ROOT = B) -.-&gt; B
  TREE1(ROOT = A) -.-&gt; A[[A]] --&gt; B[[B]] &amp; C[[C]]
  TREE3(ROOT = C) -.-&gt; C
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/root.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> isEmptyTree(Tree) \rightarrow bool </code-block><br/>
<p>
Objetivo: Determina si el árbol está vacío<br/>
Entrada: Tree: Árbol a manipular<br/>
Salida: Verdadero si el árbol está vacía, falso en caso contrario<br/>
</p>
<code-block lang="mermaid">
flowchart TB
  A[[A]] --&gt; B[[B]] &amp; C[[C]]
  B --&gt; NULLB1(NULL) &amp; NULLB2(NULL)
  EMPTY2(isEmptyTree = false) -.-&gt; C --&gt; NULLC1(NULL) &amp; NULLC2(NULL)
  EMPTY1(isEmptyTree = true) -.-&gt; NULLC2
</code-block>
<code-block lang="c" src="./Ejemplos/Tema_6/isEmptyTree.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

## Recorridos de Árboles

<note>
Esta es la manera sistemática de recorrer un árbol.
</note>

```mermaid
---
title: Árbol de ejemplo
---
flowchart TB
    A((_A_)) --> B((_B_)) & C((_C_))
    B --> D((_D_)) & E((_E_))
    C --> G((_G_)) & H((_H_))
    E --> F((_F_)) & NULL(NULL)
```

### Recorridos en profundidad

Vídeo explicativo de los recorridos en profundidad.

<tip>

Vídeo realizado por David Julián Guzmán Cárdenas, estudiante de Ingeniería de Sistemas y Computación de la Universidad
Nacional de Colombia

</tip>

<warning>

Debido a un bug, el reproductor no funciona. [Link al vídeo](https://youtu.be/95CgVIsOxLA?si=xT7m6D4k92DadqFb)

</warning>

<video src="https://www.youtube.com/watch?v=95CgVIsOxLA"/>

<note>
En los dibujos no ha sido representado la totalidad del recorrido, solo una idea general del movimiento.
</note>

#### Preorden (R | ID)

- (R) Raíz
- (I) Izquierdo
- (D) Derecho

```mermaid
flowchart TB
    RECORRIDO[A, B, D, E, F, C, G, H]
    A((_A_)) --> B((_B_)) & C((_C_))
    A -. " (R) " .-> A
    B --> D((_D_)) & E((_E_))
    D --> NULL3(NULL) & NULL4(NULL)
    C --> G((_G_)) & H((_H_))
    E --> F((_F_)) & NULL(NULL)
    A -. " (I) " .-> B -. " (R) " .-> B -. " (I) " .-> D
    D -. " (R) " .-> D -. " (I) " .-> NULL3 -.-> D -. " (D) " .-> NULL4
    NULL4 -.-> D -.-> B -. " (D) " .-> E -. " (R) " .-> E -. " etc " .-> F 
```

#### Inorden (I | R | D)

- (I) Izquierdo
- (R) Raíz
- (D) Derecho

```mermaid
flowchart TB
    RECORRIDO[D, B, F, E, A, G, C, H]
    A((_A_)) --> B((_B_)) & C((_C_))
    B --> D((_D_)) & E((_E_))
    D --> NULL3(NULL) & NULL4(NULL)
    C --> G((_G_)) & H((_H_))
    E --> F((_F_)) & NULL(NULL)
    A -. " (I) " .-> B -. " (I) " .-> D -. " (R) " .-> D
    D -. " (I) " .-> NULL3 -.-> D -.-> B -. " (R) " .-> B
    B -. " (D) " .-> E -. " etc " .-> F
```

#### Posorden (ID | R)

- (I) Izquierdo
- (D) Derecho
- (R) Raíz

```mermaid
flowchart TB
    RECORRIDO[D, F, E, B, G, H, C, A]
    A((_A_)) --> B((_B_)) & C((_C_))
    B --> D((_D_)) & E((_E_))
    D --> NULL3(NULL) & NULL4(NULL)
    C --> G((_G_)) & H((_H_))
    E --> F((_F_)) & NULL(NULL)
    A -. " (I) " .-> B -. " (I) " .-> D -. " (I) " .-> NULL3
    NULL3 -.-> D -. " (D) " .-> NULL4 -.-> D -. " (R) " .-> D
    D -.-> B -. " (D) " .-> E -. " etc " .-> F
```

### Recorrido en anchura

```mermaid
flowchart TB
    RECORRIDO[A, B, C, D, E, F, G, H, F]
    A((_A_)) --> B((_B_)) & C((_C_))
    B --> D((_D_)) & E((_E_))
    C --> G((_G_)) & H((_H_))
    E --> F((_F_)) & NULL(NULL)

    subgraph 1
        A
    end
    subgraph 2
        B & C
    end
    subgraph 3
        D & E & G & H
    end
    subgraph 4
        F & NULL
    end
```


