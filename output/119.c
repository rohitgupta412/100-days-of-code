#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the integers for the array (one element is repeated):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= arr[i];
    }

    for (int i = 1; i < n; i++) { 
        xor_sum ^= i;
    }

    printf("The repeated element is: %d\n", xor_sum);

    free(arr);
    return 0;
}