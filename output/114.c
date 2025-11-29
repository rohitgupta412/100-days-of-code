#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

int main() {
    char s[1000]; 
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int max_len = 0;
    int start = 0;
    bool visited[256] = {false}; 

    for (int end = 0; end < n; end++) {
        while (visited[(int)s[end]]) {
            visited[(int)s[start]] = false;
            start++;
        }
        visited[(int)s[end]] = true;
        int current_len = end - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", max_len);

    return 0;
}