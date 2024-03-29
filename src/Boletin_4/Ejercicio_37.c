// SPDX-FileCopyrightText: 2024 Sprinter05
//
// SPDX-License-Identifier: GPL-3.0-only

// Libraries
#include <stdio.h>
#define N 11
#define M 100

void checkLeaps(int n, int year){
    int closeLeap, leaps[M], counter=1;
    //Check closest
    for(int i=0;i<4;i++){
        if((year+i)%4 == 0){
            closeLeap = year+i;
            break;
        }
    }
    // Get all the following leap years until the max amount is satisfied
    leaps[0]=closeLeap;
    while(counter != 100){
        leaps[counter]=closeLeap+(4*counter);
        counter++;
    }
    // Print results
    printf("\nFollowing 100 leap years:\n");
    for(int i=0; i<M; i++){
        printf("%d ", leaps[i]);
    }
    printf("\n\n");
}

int main(){
    // Define variables
    char date[N];
    int day, month, year;
    // Endless loop so the user can change parameters (1==1)
    while(1){
        // Ask for parameters
        printf("Input a date in the dd/mm/yyyy format: ");
        scanf("%d/%d/%d", &day, &month, &year);
        // Fix the string so it can be passed to the function more easily
        snprintf(date, N, "%02d/%02d/%04d", day, month, year);
        checkLeaps(100, year);
    }
    return 0;
}