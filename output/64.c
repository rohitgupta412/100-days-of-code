#include <stdio.h>

int main() {
    long long num; // Use long long to handle larger numbers
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    int freq[10] = {0}; // Array to store frequency of digits 0-9
    int mostFrequentDigit = 0;
    int maxCount = 0;

    // Handle the case of 0 separately
    if (num == 0) {
        mostFrequentDigit = 0;
        maxCount = 1;
    } else {
        // Extract digits and update frequency
        while (num != 0) {
            int digit = num % 10;
            freq[digit]++;
            num /= 10;
        }

        // Find the digit with the maximum frequency
        for (int i = 0; i < 10; i++) {
            if (freq[i] > maxCount) {
                maxCount = freq[i];
                mostFrequentDigit = i;
            }
        }
    }

    printf("The digit that occurs the most times is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}