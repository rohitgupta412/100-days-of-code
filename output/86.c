#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Ignore non-alphanumeric characters for a more robust check if needed,
        // but for a simple string, we compare directly.
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    return 0;
}
