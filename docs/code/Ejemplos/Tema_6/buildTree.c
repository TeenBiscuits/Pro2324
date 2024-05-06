// SPDX-FileCopyrightText: 2023 Fernando Álvarez
//
// SPDX-License-Identifier: GPL-3.0-only

bool BuildTree(tBinTree LT,tItemT itemT,tBinTree RT,tBinTree *T){

    if(createNode(T)){

        (*T)->data=itemT;
        (*T)->left=LT;
        (*T)->right=RT;
        return true;
    }
    else return false;


}