#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = INT_MIN;
    int current_max = 0;
    int all_negative = 1; 
    int largest_negative = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            all_negative = 0; 
        } else {
            if (arr[i] > largest_negative) {
                largest_negative = arr[i];
            }
        }

        current_max += arr[i];
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
        if (current_max < 0) {
            current_max = 0;
        }
    }

    if (all_negative) {
        printf("Maximum sum: %d\n", largest_negative);
    } else {
        printf("Maximum sum: %d\n", max_so_far);
    }

    return 0;
}