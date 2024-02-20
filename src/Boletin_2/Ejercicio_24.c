// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
    int multiplicando;
    int producto;

    multiplicando=-1;

    while(multiplicando<10){
        multiplicando=multiplicando+1;
        producto= 7*multiplicando;
        printf("7 X %d= %d\n",multiplicando,producto);
    }

    return 0;
}