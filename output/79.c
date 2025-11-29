#include <stdio.h>

void diagonalTraversal(int matrix[3][3], int rows, int cols) {
    int i, j;
    
    printf("Diagonal traversal (Top-left to bottom-right):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    
    printf("Diagonal traversal (Top-right to bottom-left):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i + j == rows - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
}
