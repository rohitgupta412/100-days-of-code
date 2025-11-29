#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int nextGreater = -1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j]; 
                break; 
            }
        }
        printf("%d", nextGreater);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n"); 
  
    free(arr);
    arr = NULL; 

    return 0; 
}