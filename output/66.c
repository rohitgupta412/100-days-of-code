#include <stdio.h>

// Function to insert an element into a sorted array
void insertSorted(int arr[], int *n, int value, int capacity) {
    if (*n >= capacity) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }

    int i;
    // Find the position to insert the element
    for (i = *n - 1; (i >= 0 && arr[i] > value); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }

    arr[i + 1] = value; // Insert the new element
    (*n)++; // Increment the number of elements
}

int main() {
    int capacity = 10;
    int arr[capacity] = {10, 20, 30, 40, 50};
    int n = 5; // Current number of elements

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newValue = 25;
    printf("Inserting %d...\n", newValue);
    insertSorted(arr, &n, newValue, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    newValue = 5;
    printf("Inserting %d...\n", newValue);
    insertSorted(arr, &n, newValue, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    newValue = 60;
    printf("Inserting %d...\n", newValue);
    insertSorted(arr, &n, newValue, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}