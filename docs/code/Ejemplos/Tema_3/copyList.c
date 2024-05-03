// SPDX-FileCopyrightText: 2024 Eliana Reigada
//
// SPDX-License-Identifier: GPL-3.0-only

bool copyList(tlist L, tList *M) {
    tPosl p, q, r;
    bool ret = true;

    createEmptyList(M);
    if (!isEmptyList(L)) {
        p = L;
        while ((p != LNULL) && createNode(&r)) {
            r->data = p->data;
            r->next = LNULL;
            if (p == L) {
                *M = r;
                q = r;
            } else {
                q->next = r;
                q = r;
            }
            p = p->next;
        }
        if (p != LNULL) {
            deleteList(M);
            ret = false;
        }
    }
    return ret;
}