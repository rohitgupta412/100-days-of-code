#include <stdio.h>
#include <stdlib.h> 

int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] >= x) {
            ceilIndex = mid; 
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
    }
    return ceilIndex;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the integer x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index != -1) {
        printf("The index of the smallest element greater than or equal to %d (ceil) is: %d\n", x, index);
    } else {
        printf("No element greater than or equal to %d (ceil) found in the array. Printing: %d\n", x, -1);
    }

    free(arr); 
    return 0;
}