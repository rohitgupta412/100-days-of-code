#include <stdio.h>
#include <limits.h> 

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

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %lld\n", k, max_sum);

    return 0;
}