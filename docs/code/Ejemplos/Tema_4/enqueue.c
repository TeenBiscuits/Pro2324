// SPDX-FileCopyrightText: 2023 Fernando Álvarez
//
// SPDX-License-Identifier: GPL-3.0-only

bool enqueue(tItemQ item,tQueue *cola){

    tPosQ aux;

    if(!createNode(&aux)){

        return false;
    }
    else{

        aux->data=item;
        aux->next=QNULL;

        if(cola->front == QNULL){
            cola->front = aux;

        }
        else{
            cola->rear->next = aux;
        }
        cola->rear = aux;

        return true;
    }

}