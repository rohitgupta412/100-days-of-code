#include <stdio.h>

void deleteElement(int arr[], int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Invalid position for deletion.\n");
        return;
    }
    // Shift elements to the left to fill the gap
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Decrement the size of the array
    (*n)--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int deletePosition = 2; // Delete element at index 2 (third position)

    deleteElement(arr, &n, deletePosition);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}