#include <stdio.h>

#define FILE_NAME ("../output.txt")

int main(void) {

    char buffer[128];
    int consumed = 0;
    int number = 0;

    FILE* file;
    file = fopen(FILE_NAME, "w");

    do {
        printf("Enter a number or <blank> to abort: ");
        fgets(buffer, sizeof(buffer), stdin);
        consumed = sscanf(buffer, "%d", &number);
        if (consumed > 0) {
            fprintf(file, "%d\n", number);
        }
    } while (consumed > 0);

    fclose(file);

    return 0;
}
