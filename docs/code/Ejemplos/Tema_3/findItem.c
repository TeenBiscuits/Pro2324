// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

tPosL findItem(tItem item, tList lista) {
    tPosL posAux;
    for (posAux = lista; (posAux != LNULL) && (posAux->data != item); posAux = posAux->next);
    return posAux;
}