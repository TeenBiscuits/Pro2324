// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#define N 100

/*Design and implement a program in C language to read a sentence
(maximum 100 characters) and then showing every word of it followed
by the number of letters that compose it. For simplicity, assume that
the words can be separated only by spaces, commas or periods.*/

// Count the amount of characters in the string
void countString(char toCount[N]){
    int count = 0;
    for(int i=0; toCount[i]!='\0'; i++){
        count++;
    }
    printf("Word %s has %d characters\n", toCount, count);
}

// Separate the string and fix multiple separators in the string by ignoring them 
void separateString(char toSplit[N]){
    char splitted[N][N];
    int count=0, row=0, column=0;
    while(toSplit[count] != '\n'){
        if(toSplit[count] == ' ' || toSplit[count] == ',' || toSplit[count] == '.'){
            splitted[row][column] = '\0';
            column = 0;
            if (toSplit[count-1] != ' ' && toSplit[count-1] != ',' && toSplit[count-1] != '.'){row++;}
        } else {
            splitted[row][column] = toSplit[count];
            column++;
        }
        count++;
    }
    for(int i=0; splitted[i][0] != '\0'; i++){
        countString(splitted[i]);
    }
}

int main(){
    // Define variables and ask for parameters
    char sentence[N];
    printf("Type a sentence of max 100 characters:\n");
    // fgets instead of gets for buffer overflow protection
    fgets(sentence, N, stdin);
    // Start the fun
    separateString(sentence);
    return 0;
}