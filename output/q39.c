#include <stdio.h>

int main() {
    int num, digit;
    long long product_of_odd_digits = 1; 
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num == 0) {
        printf("Product of odd digits: 0\n"); 
        return 0;
    }

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; 

        if (digit % 2 != 0) { 
            product_of_odd_digits *= digit; 
        }

        num /= 10; 
    }

    printf("Product of odd digits: %lld\n", product_of_odd_digits);

    return 0;
}