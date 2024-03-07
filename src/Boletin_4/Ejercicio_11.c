// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>

/*Design and implement a recursive function in C language that returns
the sum of the elements of an array of integers.*/

// Sum all the elements of the array using recursion
int arraySum(int n, int sumNums[n], int loops, int accum){
    if (loops == 0){return accum;} else{
        accum+=sumNums[n-loops];
        loops--;
        arraySum(n, sumNums, loops, accum);
    }
}

int main(){
    // Define variables and ask for parameters
    int n = 10;
    int toSum[n], accum = 0, loops = n;
    int result;
    printf("Input the 10 numbers for the array separated by Enter:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &toSum[i]);
    }
    // Recursion fun starts here
    result = arraySum(n, toSum, loops, accum);
    // Print result
    printf("\nThe result of the sum is %d\n", result);
    return 0;
}