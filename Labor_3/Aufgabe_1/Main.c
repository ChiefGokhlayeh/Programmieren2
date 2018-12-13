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

unsigned long fakultaet(int n) {
    unsigned long val = 1;
    for(int i = 1; i < n; i++)
    {
        val *= i + 1;
    }
    return val;
}

int main(void) {
    bool validInput = false;
    do {
        validInput = eingabe();
    } while (!validInput);

    unsigned long factorial = fakultaet(n);

    ausgabe(factorial);

    return 0;
}
