#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int first, second;

    if (n < 2) {
        printf("Invalid input: Array must have at least two elements.\n");
        return 0;
    }

    first = second = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element or all elements are the same.\n");
    } else {
        printf("The second largest element is %d\n", second);
    }

    return 0;
}
