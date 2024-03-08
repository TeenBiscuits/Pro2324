// SPDX-FileCopyrightText: 2024 Sprinter05
//
// SPDX-License-Identifier: GPL-3.0-only

// Libraries
#include <stdio.h> // Main library
#include <stdlib.h> // For managing the program
#include <stdbool.h> // Bool function
#include <unistd.h> // Use UNIX commands
#include <time.h> // For random numbers
#define N 16 // Change this number to change the matrix size
#define SPEED 2 // Higher means faster: MUST BE GREATER OR EQUAL THAN 1
#define clear() printf("\033[H\033[J") // Clean screen

// NOTE: RUN FROM VSCODE TERMINAL OR THE MODERN WINDOWS TERMINAL APP NOT CMD OTHERWISE UTF-8 EMOJIS WILL NOT DISPLAY
// ALSO MAKE SURE UTF-8 SUPPORT IS ENABLED IN YOUR TERMINAL OF CHOICE, APPLIES TO ALL OPERATING SYSTEMS

int gameOfLife[N][N];
int updatedGame[N][N];
int ticks=0; // Generations

// THIS IS THE MATRIX THAT WILL RUN IF THE OPTION c (choose) IS CHOSEN AT RUNTIME
// THIS EXAMPLE MATRIX IS OF SIZE 16X16 SO IF YOU CHANGE N MODIFY THE SIZE HERE TOO
// 0 = DISABLED, 1 = ENABLED
int chooseGameOfLife[N][N] = {
    {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,1,1,0,0,0,1,0,0,1,0,0,0,0,0},
    {0,0,1,1,0,0,0,1,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0},
    {0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

// Make sure the cell is not outsided of the matrix
bool outOfBound(int row, int column){
    bool oob;
    if(row >= N || row < 0 || column >= N || column < 0){oob = true;}
    else {oob = false;}
    return oob;
}

// Check rules 1, 2 and 3 for death status
void checkDeath(int row, int column){
    int liveNeighbours=0;
    // Check neighbours
    if(outOfBound(row+1,column) == false){if(gameOfLife[row+1][column] == 1){liveNeighbours++;}}
    if(outOfBound(row+1,column+1) == false){if(gameOfLife[row+1][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row+1,column-1) == false){if(gameOfLife[row+1][column-1] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column) == false){if(gameOfLife[row-1][column] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column+1) == false){if(gameOfLife[row-1][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column-1) == false){if(gameOfLife[row-1][column-1] == 1){liveNeighbours++;}}
    if(outOfBound(row,column+1) == false){if(gameOfLife[row][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row,column-1) == false){if(gameOfLife[row][column-1] == 1){liveNeighbours++;}}
    // Any live cell with fewer than two live neighbours dies, as if by underpopulation.
    if(liveNeighbours<2){updatedGame[row][column]=0;}
    // Any live cell with two or three live neighbours lives on to the next generation.
    else if(liveNeighbours>=2 && liveNeighbours<=3){updatedGame[row][column]=1;}
    // Any live cell with more than three live neighbours dies, as if by overpopulation.
    else if(liveNeighbours>3){updatedGame[row][column]=0;}
}

// Check rule 4 for revive status
void checkRevive(int row, int column){
    int liveNeighbours=0;
    // Check neighbours
    if(outOfBound(row+1,column) == false){if(gameOfLife[row+1][column] == 1){liveNeighbours++;}}
    if(outOfBound(row+1,column+1) == false){if(gameOfLife[row+1][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row+1,column-1) == false){if(gameOfLife[row+1][column-1] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column) == false){if(gameOfLife[row-1][column] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column+1) == false){if(gameOfLife[row-1][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row-1,column-1) == false){if(gameOfLife[row-1][column-1] == 1){liveNeighbours++;}}
    if(outOfBound(row,column+1) == false){if(gameOfLife[row][column+1] == 1){liveNeighbours++;}}
    if(outOfBound(row,column-1) == false){if(gameOfLife[row][column-1] == 1){liveNeighbours++;}}
    // Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
    if(liveNeighbours==3){updatedGame[row][column]=1;}
    // Remain dead
    else {updatedGame[row][column]=0;}
}

// Run a generation
void tick(){
    // Run generation
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(gameOfLife[i][j] == 1){checkDeath(i, j);continue;}
            else if(gameOfLife[i][j] == 0){checkRevive(i, j);continue;}
            else {exit(1);} // Impossible case, exit with error
        }
    }
}

// Show the game matrix
void displayMatrix(){
    printf("\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(updatedGame[i][j] == 0){printf("⬛");}
            if(updatedGame[i][j] == 1){printf("⬜");}            
        }
        printf("\n");
    }
    printf("Generation %d\n", ticks);
}

// Print the initial status
void printInitial(){
    printf("\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(gameOfLife[i][j] == 0){printf("⬛");}
            if(gameOfLife[i][j] == 1){printf("⬜");}
        }
        printf("\n");
    }
    printf("Initial status\n");
}

// Swap og and updated matrix
void redoMatrix(){
    // Put updated matrix into the original one
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            gameOfLife[i][j]=updatedGame[i][j];
        }
    }
    // Set the updated matrix to 0
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            updatedGame[i][j]=0;
        }
    }
}

// Initial random condition
void randCondition(){
    srand(time(NULL));
    // Random init
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            gameOfLife[i][j]=rand()%2;
        }
    }
}

int main(){
    // Ask what to do
    char answ;
    while(answ != 'r' && answ != 'c'){
        printf("Do you want a randomly generated generation or choose one? (r/c): ");
        scanf("%c", &answ);
        if(answ == 'r'){randCondition();}
        else if(answ == 'c'){
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    gameOfLife[i][j] = chooseGameOfLife[i][j];
                }
            }
        }
    }
    // Start dead cells on updated
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            updatedGame[i][j]=0;
        }
    }
    printInitial(); // Print initial state
    usleep(1000000);
    while(1){
        clear(); // Clear screen
        tick(); // Run generation
        displayMatrix(); // Show the matrix
        ticks++; // Increase counter
        redoMatrix();
        usleep(200000/SPEED); // Wait delay
    }
    return 0;
}