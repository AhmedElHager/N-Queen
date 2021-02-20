#ifndef PRINTSOLUTION_H
#define PRINTSOLUTION_H
#include <stdbool.h> 
#include <stdio.h> 
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}
#endif
