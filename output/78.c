#include <stdio.h>

int sumOfDiagonal(int matrix[3][3], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
