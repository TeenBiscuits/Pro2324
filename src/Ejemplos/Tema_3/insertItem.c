// SPDX-FileCopyrightText: 2023 Fernando Álvarez
//
// SPDX-License-Identifier: GPL-3.0-only

bool insertItem(tItemL item, tPosL pos, tList *lista) {

    tPosL posAux;
    if (!createNode(&posAux)) {

        return false;

    } else {

        posAux->data = item;
        posAux->next = LNULL; //por si acaso
    }
    if (isEmptyList(*lista)) {

        *lista = posAux;
    } else if (pos == LNULL) {

        last(*lista)->next = posAux;

    } else if (pos == *lista) {

        posAux->next = pos;
        *lista = posAux;

    } else {

        posAux->next = pos->next;
        pos->next = posAux;
        posAux->data = pos->data;
        pos->data = item;
    }
    return true;
}