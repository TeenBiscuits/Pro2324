// SPDX-FileCopyrightText: 2024 Sprinter05
//
// SPDX-License-Identifier: GPL-3.0-only

// Libraries
#include <stdio.h>
#define N 256

int main(){
    // Define variables and ask for parameters
    int i=0, j=0;
    char sentence[N], fixedSentence[N];
    printf("Type a sentence\n");
    // fgets instead of gets for buffer protection
    fgets(sentence, N, stdin);
    // Fix the sentence's multiple spaces
    while(sentence[i]!='\0'){
        if(sentence[i] == ' ' && sentence[i+1] == ' '){
            i++;
            continue;
        } else {
            fixedSentence[j]=sentence[i];
            i++;
            j++;
        }
    }
    // Print the result after apprending the end of string to the fixed variable
    fixedSentence[j+1] = '\0';
    printf("\nThe sentence with fixed spaces is:\n%s", fixedSentence);
    return 0;
}