#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int temp = num;
    int remainder;
    int sum = 0;

    while (temp > 0) {
        remainder = temp % 10; 
        sum += factorial(remainder); 
        temp /= 10; 
    }

    return (sum == num); 
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrongNumber(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}