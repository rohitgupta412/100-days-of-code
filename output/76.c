#include <stdio.h>

int isSymmetric(int matrix[3][3], int rows, int cols) {
    if (rows != cols) {
        return 0; // Not a square matrix, so not symmetric
    }
    
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}
