<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

<web-summary rel="tldr"/>

<tip>Copyright © 2024 Pablo Portas López</tip>

# Tema 4 y 5 - Colas y Pilas

<tldr id="tldr">

El TAD Cola y el TAD Pila, especificación informal, implementación y descripción gráfica. Diferencias entre ambos
explicadas.

Implementaciones con array circular, lista dinámica circular y a partir del TAD Lista. Operaciones explicadas de
forma gráfica.

</tldr>

<include from="Para-Colaboradores.md" element-id="en-construccion"></include>

<note>

Para ver las diferencias entre los dos TADs: [](#tad-cola-vs-tad-pila)

</note>

## TAD Colas

Una cola es una secuencia de cero o más elementos del mismo tipo. Los elementos de una cola están ordenados de una forma
lineal, no por su contenido, sino por la posición que ocupan.

Cuando un elemento es insertado se añade al principio de la cola. Para eliminar o extraer un elemento, solo se podrá eliminar el
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
```

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
Item: Contenido del elemento a insertar.<br/>
Queue: Cola donde vamos a insertar.<br/>
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

### Implementación con array circular

<include from="Para-Colaboradores.md" element-id="en-construccion"></include>

### Implementación con lista dinámica circular

<include from="Para-Colaboradores.md" element-id="en-construccion"></include>

### Implementación a partir del TAD Lista

<note>

Esta implementación se basa en el [](Tema-3-Listas.md).

</note>

<include from="Para-Colaboradores.md" element-id="en-construccion"></include>

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
<code-block lang="tex"> push (Item, Quede) \rightarrow Stack, bool </code-block><br/>
<p>
Objetivo: Inserta un elemento en la cola quedando al final.<br/>
Entrada:<br/>
Item: Contenido del elemento a insertar.<br/>
Queue: Cola donde vamos a insertar.<br/>
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