// SPDX-License-Identifier: GPL-3.0-only
#include <stdio.h>
#include <stdbool.h>
#define N 100

/*Implement a program that ask for five integers (ni > 0) and display each number and
factorial decomposition. Use a suitable data structure to store both the numbers
and decompositions.*/

void factorialDecomp(int toDecomp){
    int factors[N], primes=2, loops=0, og=toDecomp;
    // Check if its 1 or 0 and just print out that the decomp is 1
    if(toDecomp == 0 | toDecomp == 1){
        printf("\nNumber %d factorial decomposition is: 1", og);
        return;
    }
    // Repeat the factorization with each reduced number until its 0
    for(int i=0;i<N;i++){factors[i]=0;}
    while(toDecomp != 1){
        if(toDecomp%primes == 0){
            toDecomp/=primes;
            factors[loops]=primes;
            loops++;
            primes=2;
        } else {primes++;}
    }
    // Print the result
    printf("\nNumber %d factorial decomposition is: ", og);
    for(int i=0;factors[i]!=0;i++){
        if(factors[i+1]==0){
            printf("%d", factors[i]);
        } else {printf("%d*", factors[i]);}
    }
}

int main(){
    // Define variables and ask for parameters
    int decompose[5];
    printf("Type 5 integers separated by spaces:\n");
    // Its just 5 parameters no for loop needed here
    scanf("%d %d %d %d %d", &decompose[0], &decompose[1], &decompose[2], &decompose[3], &decompose[4]);
    // Repeat the decomp for all numbers
    for(int i=0;i<5;i++){
        factorialDecomp(decompose[i]);
    }
    printf("\n");
    return 0;
}