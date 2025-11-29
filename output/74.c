#include <stdio.h>

void findTranspose(int matrix[3][3], int rows, int cols) {
    int transpose[cols][rows];
    int i, j;

    // Transposing the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Printing the transposed matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
