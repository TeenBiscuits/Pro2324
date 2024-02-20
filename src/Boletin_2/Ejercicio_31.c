// SPDX-FileCopyrightText: 2023 Santiago Neira Sejean
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
int main(){
   int anio;

   for(anio=2000;anio>=2000 && anio<2100;anio++){
       if(anio%4==0 && anio%10!=0 || anio%400==0){
           printf("%d\n",anio);
       }

   }

   printf("Presione enter tecla para continuar:\n");

   while(getchar() !='\n');
   for(anio=1900;anio>=1900 && anio<2000; anio++){
       if(anio%4==0 && anio%10!=0 || anio%400==0){
               printf("%d\n",anio);
       }

   }



}