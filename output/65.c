#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate midpoint

        if (arr[mid] == target) {
            return mid; // Target found, return its index
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}