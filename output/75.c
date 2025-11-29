#include <stdio.h>

void addMatrices(int mat1[3][3], int mat2[3][3], int rows, int cols) {
    int sum[rows][cols];
    int i, j;

    // Adding two matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Printing the sum matrix
    printf("Sum of the two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
