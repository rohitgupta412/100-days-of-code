#include <stdio.h>

int findPivotIndex(int nums[], int size) {
    long long totalSum = 0;
    
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
   
    for (int i = 0; i < size; i++) {
        long long rightSum = totalSum - leftSum - nums[i]; 
        
        if (leftSum == rightSum) {
            return i; 
        }
        
        leftSum += nums[i];
    }

    return -1; 
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("-1\n"); 
        return 0;
    }

    int nums[size]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int pivotIndex = findPivotIndex(nums, size);
    printf("%d\n", pivotIndex);

    return 0;
}