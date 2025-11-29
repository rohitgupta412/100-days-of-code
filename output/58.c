#include <stdio.h>

int main() {
    // Declare and initialize an array
    int arr[] = {10, 5, 20, 8, 15, 3};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Check if the array is empty
    if (n == 0) {
        printf("Array is empty.\n");
        return 1; // Exit with an error code
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Iterate through the array starting from the second element (index 1)
    for (int i = 1; i < n; i++) {
        // If the current element is greater than the current maximum, update max
        if (arr[i] > max) {
            max = arr[i];
        }
        // If the current element is less than the current minimum, update min
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the results
    printf("The given array is: {");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}
