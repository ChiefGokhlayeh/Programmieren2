#include <stdio.h>
#include <string.h>

int main(void) {
    float f1 = 0;
    float f2 = 0;

    char buffer[128];
    int consumed = 0;
    do {
        printf("Please insert two float values: ");
        fgets(buffer, sizeof(buffer), stdin);
        consumed = sscanf(buffer, "%f %f", &f1, &f2);
    } while(consumed != 2);

    printf("Sum: %f\n", f1 + f2);
    printf("Difference: %f\n", f1 - f2);
    printf("Product: %f\n", f1 * f2);
    printf("Division: %f\n", f1 / f2);
    printf("Mean: %f\n", (f1 + f2) / 2);

    return 0;
}