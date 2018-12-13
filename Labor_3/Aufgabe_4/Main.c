#include <stdio.h>
#include <string.h>

size_t cstrcpy(char* dst, size_t length, const char* src) {
    if (length == 0) {
        return 0;
    }
    size_t count = 0;
    while (count < length - 1 && src[count] != '\0') {
        dst[count] = src[count];
        count++;
    }
    dst[count] = '\0';
    return count;
}


int main(void) {
    const char* source = "Test";
    char destination[128];
    memset(destination, 'D', sizeof(destination));

    cstrcpy(destination, sizeof(destination), source);
    puts(destination);

    return 0;
}
