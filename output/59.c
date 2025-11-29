#include <stdio.h>

int main() {
    int size, i;
    int arr[100]; // Assuming a maximum array size of 100
    int even_count = 0;
    int odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}