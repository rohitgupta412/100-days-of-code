#include <stdio.h>
#include <string.h>

void findLongestWord(const char *sentence, char *longestWord) {
    int maxLength = 0;
    int currentLength = 0;
    const char *startOfLongest = sentence;
    const char *currentWordStart = sentence;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startOfLongest = currentWordStart;
            }
            currentLength = 0;
            currentWordStart = &sentence[i + 1];
        } else {
            currentLength++;
        }
    }

    // Check the last word
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startOfLongest = currentWordStart;
    }

    strncpy(longestWord, startOfLongest, maxLength);
    longestWord[maxLength] = '\0';
}

int main() {
    char sentence[] = "This is a sample sentence with some long words.";
    char longest[50]; // Assuming max word length is 50

    findLongestWord(sentence, longest);
    printf("Longest word in \"%s\": \"%s\"\n", sentence, longest); // Output: sentence

    return 0;
}