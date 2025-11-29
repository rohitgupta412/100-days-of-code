#include <stdio.h>

void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII difference between lowercase and uppercase
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
}
