#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the integers for the array (0 to n, one missing):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    printf("The missing number is: %d\n", expected_sum - actual_sum);

    free(arr);
    return 0;
}