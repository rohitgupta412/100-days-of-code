#include <stdio.h>

void multiplyMatrices(int mat1[2][3], int mat2[3][2], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrices cannot be multiplied.\n");
        return;
    }
    
    int result[r1][c2];
    int i, j, k;

    // Multiplying the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Printing the result matrix
    printf("Product of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
