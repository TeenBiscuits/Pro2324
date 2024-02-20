// SPDX-FileCopyrightText: 2024 Daniel Deza Prieto
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
void reader(char frase[200]) {
  printf("Please input the phrase up to a size of 200 characters\n");
  scanf(" %[^\n]s", frase);
}
void howmany(char frase[200], int acount, int ecount, int icount, int ocount,
             int ucount, int rest) {
  for (int i = 0; i < 200; i++) {
    (frase[i] == 'a') ? (acount++) : (rest++);
    (frase[i] == 'e') ? (ecount++) : (rest++);
    (frase[i] == 'i')
        ? (icount++)
        : (rest++); // Codigo terrible. I lose half the brain. Funciona eso si
    (frase[i] == 'o') ? (ocount++) : (rest++);
    (frase[i] == 'u') ? (ucount++) : (rest++);
  }
  printf("Hay a:%i e:%i i:%i o:%i u:%i", acount, ecount, icount, ocount,
         ucount);
}
int main() {
  int acount = 0;
  int ecount = 0;
  int icount = 0;
  int ocount = 0;
  int ucount = 0;
  int rest = 0;
  char frase[200];
  reader(frase);
  howmany(frase, acount, ecount, icount, ocount, ucount, rest);
  return 0;
}
