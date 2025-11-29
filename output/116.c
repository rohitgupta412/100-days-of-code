#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the positive integers for the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break; 
            }
        }
        if (found) {
            break; 
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }

    free(nums); 
    return 0;
}