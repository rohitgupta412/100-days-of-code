#include <stdio.h>
#include <stdlib.h> 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid input: k should be between 1 and %d.\n", n);
        return 1;
    }

    qsort(arr, n, sizeof(int), compare);

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}