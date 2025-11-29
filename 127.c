#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For toupper

int main() {
    FILE *in_ptr, *out_ptr;
    char ch;
    const char *input_file = "input.txt";
    const char *output_file = "output.txt";

    in_ptr = fopen(input_file, "r");
    if (in_ptr == NULL) {
        printf("Error opening input file %s.\n", input_file);
        return 1;
    }

    out_ptr = fopen(output_file, "w");
    if (out_ptr == NULL) {
        printf("Error opening output file %s.\n", output_file);
        fclose(in_ptr);
        return 1;
    }

    while ((ch = fgetc(in_ptr)) != EOF) {
        // Convert to uppercase (handles non-letters gracefully)
        char upper_ch = toupper(ch);
        fputc(upper_ch, out_ptr);
    }

    printf("Content of %s converted to uppercase and written to %s.\n", input_file, output_file);

    fclose(in_ptr);
    fclose(out_ptr);
    return 0;
}
