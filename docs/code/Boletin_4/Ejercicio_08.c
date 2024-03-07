// SPDX-FileCopyrightText: 2024 Sprinter05
//
// SPDX-License-Identifier: GPL-3.0-only

// Libraries
#include <stdio.h>
#define N 10

int main(){
    // Define variables and ask for parameters
    int nums[N], guess, lGuess, uGuess;
    printf("\nInput an array of 10 elements by pressing Enter after each element: ");
    for(int i=0; i<10; i++){
        scanf("%d", &nums[i]);
    }
    // Input guess
    printf("\nWhat number do you want to find?: ");
    scanf("%d", &guess);
    // Lower bound
    for(int i=0; i<N; i++){
        if(nums[i] == guess){
            lGuess = i;
            break;
        }
    }
    // Upper bound
    for(int i=N; i>=0; i--){
        if(nums[i] == guess){
            uGuess = i;
            break;
        }
    }
    // Print solutions
    printf("\nLower bound solution: %d", lGuess);
    printf("\nUpper bound solution: %d", uGuess);
    printf("\n");
}