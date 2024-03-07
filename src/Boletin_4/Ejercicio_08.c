// SPDX-FileCopyrightText: 2024 Sprinter05
//
// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#define N 10

/*Design and implement a program in C language, by sequential search allow
finding the lowest and the highest index were a given X can be found into an
array of integers. The program should allow the user to properly enter the array
of integers and ask for the value you want to find.*/

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