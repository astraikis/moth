#include <stdio.h>
#include <string.h>

void interactive_mode(char *in_ptr, char *out_ptr) {
    printf("Welcome to moth v1.0.0\n\n");

    // Get input file
    printf("Enter an input file:\n");
    scanf("%s", in_ptr);

    // Get output file
    printf("\nEnter an output file:\n");
    scanf("%s", out_ptr);
}

int main(int argc, char **argv) {
    char in_file[100];
    char out_file[100];

    // No input files given, use interactive mode.
    if (argc == 1) {
        interactive_mode(in_file, out_file);
    } else {
        strcpy(in_file, argv[1]);
        strcpy(out_file, argv[2]);
    }

    printf("Input file: %s\n", in_file);
    printf("Output file: %s\n", out_file);

    return 0;
}