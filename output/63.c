#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // Size of first array

    int arr2[] = {4, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]); // Size of second array

    // Calculate the total size for the merged array
    int n3 = n1 + n2;

    // Declare the merged array
    int arr3[n3];

    // Copy elements of the first array into the merged array
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements of the second array into the merged array
    // Start copying at index n1 of arr3
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
