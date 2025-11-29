#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    char temp[strlen(str1) * 2 + 1];
    strcpy(temp, str1);
    strcat(temp, str1); // Concatenate str1 with itself

    return strstr(temp, str2) != NULL; // Check if str2 is a substring of temp
}

int main() {
    char s1[] = "waterbottle";
    char s2[] = "erbottlewat";
    char s3[] = "hello";
    char s4[] = "world";

    printf("\"%s\" is a rotation of \"%s\": %s\n", s2, s1, isRotation(s1, s2) ? "Yes" : "No"); // Output: Yes
    printf("\"%s\" is a rotation of \"%s\": %s\n", s4, s3, isRotation(s3, s4) ? "Yes" : "No"); // Output: No

    return 0;
}