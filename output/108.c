#include <stdio.h>
#include <stdlib.h> 

void productExceptSelf(int* nums, int numsSize, int* answer) {
    
    for (int i = 0; i < numsSize; i++) {
        answer[i] = 1;
    }

    int prefixProduct = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefixProduct;
        prefixProduct *= nums[i];
    }

   
    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }
}

int main() {
    int numsSize;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);

    if (numsSize <= 1) {
        printf("Array must contain at least 2 elements.\n");
        return 1;
    }

  
    int* nums = (int*)malloc(numsSize * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        printf("nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }

    int* answer = (int*)malloc(numsSize * sizeof(int));
    if (answer == NULL) {
        printf("Memory allocation failed.\n");
        free(nums); 
        return 1;
    }

    productExceptSelf(nums, numsSize, answer);

    printf("\nOriginal array (nums): ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Resulting array (answer): ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    free(nums);
    free(answer);

    return 0;
}