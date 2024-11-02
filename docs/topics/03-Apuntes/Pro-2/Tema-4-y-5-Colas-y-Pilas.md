<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>
<secondary-label ref="wip"/>

<procedure>

![Pásame El Código](https://pc.pablopl.dev/og.jpg)

Visita nuestra nueva página web con contenidos actualizados y mucho más.

Estos apuntes también están en: [Pásame el Código](https://pc.pablopl.dev/prodos/apuntes/t4-t5-colas-y-pilas/)

</procedure>

<tip>Copyright © 2024 Pablo Portas López</tip>

# Tema 4 y 5 - Colas y Pilas

<tldr id="tldr">

El TAD Cola y el TAD Pila, especificación informal, implementación y descripción gráfica. Diferencias entre ambos
explicadas. Implementaciones con array circular, lista dinámica circular y a partir del TAD Lista. Operaciones
explicadas de forma gráfica.

</tldr>

<note>

Para ver las diferencias entre los dos TADs: [](#tad-cola-vs-tad-pila)

</note>

## TAD Colas

Una cola es una secuencia de cero o más elementos del mismo tipo. Los elementos de una cola están ordenados de una forma
lineal, no por su contenido, sino por la posición que ocupan.

Cuando un elemento es insertado se añade al principio de la cola. Para eliminar o extraer un elemento, solo se podrá
eliminar el
primero, que fue el primero en ser insertado. Este concepto es descrito como **FIFO** (First in, first out).

<note>

Para saber más sobre FIFO. [Wikipedia](https://es.wikipedia.org/wiki/First_in,_first_out)

</note>

```mermaid
---
title: TAD Cola
---
flowchart LR
    subgraph MEMORIA
        NODO1[NODO 1]
        NODO2[NODO 2]
        NODO3[NODO 3]
    end
    ENTRADA --> NODO3 --> NODO2 --> NODO1 --> SALIDA
    FRENTE([Este es el frente de la cola]) -.-> NODO1
    FINAL([Este es el final de la cola]) -.-> NODO3
```

El **primero en llegar a una cola**, es el **primero en salir de la cola**, ya que está al principio (_front_) de la
cola.

El **último en llegar**, por otra parte, debe preguntar: _¿Dónde está el final de la cola?_ Y esperar pacientemente, ya
que será
**el último en salir de la cola**.

![Colas.png](Colas.png)

### Operaciones {id="cola-operaciones"}

Siguiendo los pasos para la especificación de un TAD, definimos las operaciones del mismo clasificándolas en:
constructoras, generadoras, modificadoras, observadoras y destructoras.

<note>

Para más información: [](Tema-1-Tipos-Abstractos-de-Datos-TAD.md#especificaci-n-de-un-tad)

</note>

#### Generadoras {id="cola-generadoras"}

<list>
<li>
<code-block lang="tex"> createEmptyQueue \rightarrow Queue </code-block><br/>
<p>
Objetivo: Crea una cola vacía<br/>
Salida: Una cola vacía<br/>
PosCondición: La cola sin datos<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_4/createEmptyQueue.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> enqueue (Item, Quede) \rightarrow Quede, bool </code-block><br/>
<p>
Objetivo: Inserta un elemento en la cola quedando al final.<br/>
Entrada:<br/>
- Item: Contenido del elemento a insertar.<br/>
- Queue: Cola donde vamos a insertar.<br/>
Salida: Queue: Cola con el elemento Item insertado y verdadero si se ha podido insertar, falso en caso contrario.<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_4/enqueue.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

#### Destructoras {id="cola-destructoras"}

<list>
<li>
<code-block lang="tex"> dequeue(Queue) \rightarrow Queue </code-block><br/>
<p>
Objetivo: Elimina el primer elemento de la cola<br/>
Entrada: Queue: Cola a modificar<br/>
Salida: Queue: Cola sin el primer elemento<br/>
Precondición: La cola no está vacía<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_4/dequeue.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

#### Observadoras {id="cola-observadoras"}

<list>
<li>
<code-block lang="tex"> front(Queue) \rightarrow Item </code-block><br/>
<p>
Objetivo: Recupera el contenido del primer elemento de la cola<br/>
Entrada: Queue: Cola donde obtener el dato<br/>
Salida: Item: Contenido del primer elemento de la cola<br/>
Precondición: La cola no está vacía<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_4/front.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> isEmptyQueue(Queue) \rightarrow bool </code-block><br/>
<p>
Objetivo: Determina si la cola está vacía<br/>
Entrada: Queue: Cola a comprobar<br/>
Salida: Verdadero si la cola está vacía, falso en caso contrario<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_4/isEmptyQueue.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

## Implementación con array circular
<secondary-label ref="wip"/>

## Implementación con lista dinámica circular
<secondary-label ref="wip"/>

## Implementación a partir del TAD Lista
<secondary-label ref="wip"/>

<note>

Esta implementación se basa en el [](Tema-3-Listas.md).

</note>

## TAD Pilas

Una pila es una secuencia de cero o más elementos del mismo tipo. Los elementos de una cola están ordenados de una forma
lineal, no por su contenido, sino por la posición que ocupan.

Cuando un elemento es insertado se añade al principio de la pila. Para extraer o eliminar un elemento solo se puede el
primer elemento, que fue último en añadirse. Este concepto es descrito como **LIFO** (Last in, first out).

<note>

Para saber más sobre LIFO. [Wikipedia](https://es.wikipedia.org/wiki/Last_in,_first_out)

</note>

```mermaid
---
title: TAD Pila
---
flowchart LR
    subgraph MEMORIA
        NODO1[NODO 3]
        NODO2[NODO 2]
        NODO3[NODO 1]
    end
    ENTRADA & SALIDA --> NODO1 --> NODO2 --> NODO3
```

Cuando agregas libros a una pila, el **primer libro** queda _aplastado_ bajo el peso de todos los demás. **Al fondo de
la pila**.

El **último libro** es el de la **cima** (_peek_) y es el que primero puedes retirar.

Para poder retirar el libro que **primero** se depositó en la pila debes **retirar todos antes**.

![Pila.jpg](Pila.jpg)

### Operaciones {id="pila-operaciones"}

Siguiendo los pasos para la especificación de un TAD, definimos las operaciones del mismo clasificándolas en:
constructoras, generadoras, modificadoras, observadoras y destructoras.

<note>

Para más información: [](Tema-1-Tipos-Abstractos-de-Datos-TAD.md#especificaci-n-de-un-tad)

</note>

#### Generadoras {id="pila-generadoras"}

<list>
<li>
<code-block lang="tex"> createEmptyStack \rightarrow Stack </code-block><br/>
<p>
Objetivo: Crea una pila vacía<br/>
Salida: Una pila vacía<br/>
PosCondición: La pila sin datos<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_5/createEmptyStack.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> push (Item, Stack) \rightarrow Stack, bool </code-block><br/>
<p>
Objetivo: Inserta un elemento en la cola quedando al final.<br/>
Entrada:<br/>
- Item: Contenido del elemento a insertar.<br/>
- Queue: Cola donde vamos a insertar.<br/>
Salida: Stack: Cola con el elemento Item insertado y verdadero si se ha podido insertar, falso en caso contrario.<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_5/push.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

#### Destructoras {id="pila-destructoras"}

<list>
<li>
<code-block lang="tex"> pop(Stack) \rightarrow Stack </code-block><br/>
<p>
Objetivo: Saca el elemento de la cima de la pila<br/>
Entrada: Stack: Pila de donde vamos a sacar<br/>
Salida: Stack: Pila sin el elemento de su cima<br/>
Precondición: La pila no está vacía<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_5/pop.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

#### Observadoras {id="pila-observadoras"}

<list>
<li>
<code-block lang="tex"> peek(Stack) \rightarrow Item </code-block><br/>
<p>
Objetivo: Recupera el contenido del elemento de la cima de la pila<br/>
Entrada: Stack: Pila donde obtener el datoo<br/>
Salida: Item: Contenido del elemento de la cima de la pila<br/>
Precondición: La pila no está vacía<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_5/peek.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
<li>
<code-block lang="tex"> isEmptyStack(Stack) \rightarrow bool </code-block><br/>
<p>
Objetivo: Determina si una pila está vacía<br/>
Entrada: Stack: Pila a comprobar<br/>
Salida: Verdadero si la pila está vacía, falso en caso contrario<br/>
</p>
<code-block lang="c" src="./Ejemplos/Tema_5/isEmptyStack.c" collapsible="true" collapsed-title="Mostrar implementación"/>
</li>
</list>

## TAD Cola vs TAD Pila

El TAD Cola y el TAD Pila son muy similares, por eso en estos apuntes han sido unificados en un solo tema.

<table>
<tr><td>TAD Cola (Quede)</td><td>TAD Pila (Stack)</td></tr>
<tr><td>El primero en entrar, el primero en salir (FIFO)</td><td>El último en entrar, el primero en salir (LIFO)</td></tr>
<tr><td><code>createEmptyQueue()</code></td><td><code>createEmptyStack()</code></td></tr>
<tr><td><code>isEmptyQueue(Quede)</code></td><td><code>isEmptyStack(Stack)</code></td></tr>
<tr><td><code>enquede(Item, Quede)</code> y <code>dequede(Quede)</code>: Añadir y Eliminar un elemento a la cola</td><td><code>push(Item, Stack)</code> y <code>pop(Stack)</code>: Añadir y Eliminar un elemento a la pila</td></tr>
<tr><td><code>front(Quede)</code>: Devuelve el elemento <code>n</code> de la cola (el primero en entrar).</td><td><code>peek(Stack)</code>: Devuelve el elemento <code>0</code> de la pila (el último en entrar).</td></tr>
<tr>
<td>
<code-block lang="mermaid">
---
title: TAD Cola
---
flowchart TB
subgraph MEMORIA
NODO1[NODO 1]
NODO2[NODO 2]
NODO3[NODO 3]
end
ENTRADA --&gt; NODO3 --&gt; NODO2 --&gt; NODO1 --&gt; SALIDA
</code-block>
</td>
<td>
<code-block lang="mermaid">
---
title: TAD Pila
---
flowchart TB
subgraph MEMORIA
NODO1[NODO 3]
NODO2[NODO 2]
NODO3[NODO 1]
end
ENTRADA &amp; SALIDA --&gt; NODO1 --&gt; NODO2 --&gt; NODO3
</code-block>
</td>
</tr>
</table>

