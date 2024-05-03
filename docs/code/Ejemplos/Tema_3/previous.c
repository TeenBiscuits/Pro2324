// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

tPosL previous(tPosL pos, tList L) {
    tPosL posAux;
    for (posAux = L; posAux->next != pos; posAux = posAux->next);
    return posAux;
}