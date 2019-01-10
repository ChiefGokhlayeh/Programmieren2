#include <stdio.h>
#include <string.h>

#define FILE_NAME ("../output.txt")

int main(void) {

    char buffer[128];
    int consumed = 0;
    int number = 0;
    char* s;

    FILE* file;
    file = fopen(FILE_NAME, "r");

    do {
        memset(buffer, 0U, sizeof(buffer));
        s = fgets(buffer, sizeof(buffer), file);
        consumed = sscanf(buffer, "%d", &number);
        if (consumed > 0) {
            printf("%d\n", number);
        }
    } while (consumed > 0 && s != NULL);

    fclose(file);

    return 0;
}
