// SPDX-FileCopyrightText: 2023 Fernando Álvarez
//
// SPDX-License-Identifier: GPL-3.0-only

void dequeue(tQueue *cola){

    tPosQ aux;
    aux = cola->front;
    cola->front = aux->next;
    if(cola->front == QNULL){

        cola->rear = QNULL;
    }
    free(aux);

}