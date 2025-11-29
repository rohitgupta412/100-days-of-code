#include <stdio.h>

void insertElement(int arr[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position for insertion.\n");
        return;
    }
    // Shift elements to the right to make space
    for (int i = *n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element
    arr[position] = element;
    // Increment the size of the array
    (*n)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int elementToInsert = 10;
    int insertPosition = 2; // Insert at index 2 (third position)

    insertElement(arr, &n, elementToInsert, insertPosition);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}