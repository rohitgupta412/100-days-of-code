#include <stdio.h>

int main() {
    int arr[5]; // Declare an integer array of size 5
    int i;      // Loop counter variable

    // Read elements into the array
    printf("Enter 5 integer elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read integer input and store it in the array
    }

    // Print elements of the array
    printf("\nElements in the array are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Print each element of the array
    }
    printf("\n");

    return 0; // Indicate successful execution
}