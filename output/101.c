#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements of the sorted array (space-separated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target integer: ");
    scanf("%d", &target);

    int first_occurrence = -1;
    int last_occurrence = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first_occurrence == -1) {
                first_occurrence = i; 
            }
            last_occurrence = i; 
        }
    }

    printf("First occurrence index: %d\n", first_occurrence);
    printf("Last occurrence index: %d\n", last_occurrence);

    return 0;
}