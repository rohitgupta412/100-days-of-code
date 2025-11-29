#include <stdio.h>
#include <string.h>

int countCharFrequency(const char *str, char target) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "programming is fun";
    char charToFind = 'n';

    int frequency = countCharFrequency(str, charToFind);
    printf("The character '%c' appears %d times in the string \"%s\".\n", charToFind, frequency, str);

    return 0;
}
