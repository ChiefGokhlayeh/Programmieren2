#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FILE_NAME ("../output.txt")

int main(void) {

    char c;

    FILE* file;
    file = fopen(FILE_NAME, "r");
    if (NULL == file) {
        fprintf(stderr, "Failed to open file: %s\n", FILE_NAME);
        exit(1);
    }

    while (!feof(file)) {
        c = fgetc(file);
        fputc(c, stdout);
    }

    fclose(file);

    return 0;
}
