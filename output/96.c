#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char *sentence) {
    char *wordStart = sentence;
    char *temp = sentence;

    while (*temp) {
        if (*temp == ' ' || *temp == '\t' || *temp == '\n') {
            reverse(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }
    
    reverse(wordStart, temp - 1);
}

int main() {
    char sentence[] = "Hello World C Programming";
    printf("Original sentence: \"%s\"\n", sentence);

    reverseWordsInSentence(sentence);
    printf("Sentence with reversed words: \"%s\"\n", sentence); 
    return 0;
}