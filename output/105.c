#include <stdio.h>
#include <stdlib.h> 

int findMajorityElement(int* nums, int n) {
    if (n == 0) {
        return -1; 
    }

    int candidate = nums[0];
    int count = 1;

    
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    if (actualCount > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int majority = findMajorityElement(nums, n);
    printf("The majority element is: %d\n", majority);

    free(nums); 
    return 0;
}