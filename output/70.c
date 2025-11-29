#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[n];
    int i;

    k = k % n; // Handle cases where k > n

    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Array rotated by %d positions: ", k);
    printArray(arr, n);

    return 0;
}
