#include <stdio.h>

int main() {
    int n;
    int i, j;
    int is_prime;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    // Outer loop iterates from 2 to n (inclusive)
    for (i = 2; i <= n; i++) {
        is_prime = 1; // Assume the current number is prime

        // Inner loop checks for divisibility from 2 up to the square root of i
        // Optimization: checking divisibility only up to i/2 is also common
        // but checking up to sqrt(i) is more efficient.
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // Not a prime number
                break;        // Exit inner loop if a divisor is found
            }
        }

        // If is_prime is still 1, it means no divisors were found
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Print a newline for better output formatting

    return 0;
}