#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toSentenceCase(char* str) {
    int len = strlen(str);
    int i;
    int newSentence = 1;

    for (i = 0; i < len; i++) {
        if (newSentence && islower((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]); 
            newSentence = 0;
        } else if (!newSentence && isupper((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]); 
        }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            newSentence = 1; 
        } else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
     
            newSentence = 0;
        }
    }
}

int main() {
    char inputString[500];

    printf("Enter a string: ");
    
    fgets(inputString, sizeof(inputString), stdin);

  
    size_t length = strlen(inputString);
    if (length > 0 && inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
    }

    toSentenceCase(inputString);

    printf("Sentence case string: %s\n", inputString);

    return 0;
}
