#include <stdio.h>

int areDiagonalElementsDistinct(int matrix[3][3], int size) {
    int i, j;
    int diagonalElements[size];

    for (i = 0; i < size; i++) {
        diagonalElements[i] = matrix[i][i];
    }
    
    // Check for distinctness
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (diagonalElements[i] == diagonalElements[j]) {
                return 0; // Not distinct
            }
        }
    }
    return 1; // Distinct
}
