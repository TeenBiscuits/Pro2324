// SPDX-FileCopyrightText: 2023 Fernando Álvarez
//
// SPDX-License-Identifier: GPL-3.0-only

bool insertItem(tItemL item, tList *lista) {

    tPosL q,p;
    if (!createNode(&q)) {

        return false;

    } else {

        q->data = item;
        q->next = LNULL; //por si acaso
    }
    if (isEmptyList(*lista)) {

        *lista = q;
    }
    else if(item < (*lista)->data){

        q->next = *lista;
        *lista = q;

    }
    else{

        p = findPosition(*lista,item);
        q->next = p->next;
        p->next = q;


    }
    return true;
}