// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

void deleteAtPosition(tPosL pos, tList *lista) {
    tPosl posAux;

    if (pos == *lista)
        *lista = (*lista)->next;
    else {
        for (posAux = *lista; posAux->next != pos; posAux = posAux->next);
        posAux->next = pos->next;
    }

    free(pos);
}