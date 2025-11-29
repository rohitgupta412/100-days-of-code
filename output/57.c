#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int sum = 0; // Initialize sum to 0

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add the current element to the sum
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}