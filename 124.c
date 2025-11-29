#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_ptr, *dest_ptr;
    char source_file[100], dest_file[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source_file);
    printf("Enter destination filename: ");
    scanf("%s", dest_file);

    source_ptr = fopen(source_file, "r");
    if (source_ptr == NULL) {
        printf("Error opening source file %s.\n", source_file);
        return 1;
    }

    // Open destination in write mode (creates or overwrites)
    dest_ptr = fopen(dest_file, "w");
    if (dest_ptr == NULL) {
        printf("Error opening destination file %s.\n", dest_file);
        fclose(source_ptr);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(source_ptr)) != EOF) {
        fputc(ch, dest_ptr);
    }

    printf("\nContent successfully copied from %s to %s.\n", source_file, dest_file);

    fclose(source_ptr);
    fclose(dest_ptr);
    return 0;
}
