// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

tPosL last(tList lista) {
    tPosL posAux;
    for (posAux = lista; posAux->next != LNULL; posAux->next);
    return posAux;
}