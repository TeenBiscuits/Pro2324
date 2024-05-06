// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

bool copyList(tlist listaDest, tList *listaOrig) {
    tPosl p, q, r;
    bool ret = true;

    createEmptyList(listaOrig);
    if (!isEmptyList(listaDest)) {
        p = listaDest;
        while ((p != LNULL) && createNode(&r)) {
            r->data = p->data;
            r->next = LNULL;
            if (p == listaDest) {
                *listaOrig = r;
                q = r;
            } else {
                q->next = r;
                q = r;
            }
            p = p->next;
        }
        if (p != LNULL) {
            deleteList(listaOrig);
            ret = false;
        }
    }
    return ret;
}