#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(const char *str1, const char *str2) {
    int count1[26] = {0};
    int count2[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    char s3[] = "hello";
    char s4[] = "world";

    printf("\"%s\" and \"%s\" are anagrams: %s\n", s1, s2, areAnagrams(s1, s2) ? "Yes" : "No"); // Output: Yes
    printf("\"%s\" and \"%s\" are anagrams: %s\n", s3, s4, areAnagrams(s3, s4) ? "Yes" : "No"); // Output: No

    return 0;
}