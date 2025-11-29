#include <stdio.h>

void printCharsOnNewLine(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}
