#include <stdio.h>
#include <stdbool.h>

int n = 0;

bool eingabe(void) {
    printf("Input value to factorialize: ");
    char buffer[128];
    fgets(buffer, sizeof(buffer), stdin);
    int consumed = sscanf(buffer, "%d", &n);
    return consumed == 1;
}

void ausgabe(unsigned long factorial) {
    printf("!n = %lu\n", factorial);
}

unsigned long faku(int n) {
    printf("Address of n: %p\n", &n);
    if (n <= 0) {
        return 1;
    }
    unsigned long sub = faku(n-1);
    return n * sub;
}

int main(void) {
    bool validInput = false;
    do {
        validInput = eingabe();
    } while (!validInput);

    unsigned long factorial = faku(n);

    ausgabe(factorial);

    return 0;
}
