// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

void deleteList(tList *lista) {
    tPosL posAux;
    while (*lista != LNULL) {
        posAux = *lista;
        *lista = (*lista)->next;
        free(posAux);
    }
}