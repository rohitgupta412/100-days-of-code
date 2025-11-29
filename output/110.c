#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid input: k cannot be greater than n.\n");
        return 1;
    }

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d ", max_val);
    }
    printf("\n");

    return 0;
}