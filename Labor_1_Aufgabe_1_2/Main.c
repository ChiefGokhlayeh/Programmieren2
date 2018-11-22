#include <stdio.h>

#define FOR_LOOP    (10)
#define WHILE_LOOP  (20)

#ifndef MODE
#define MODE        (FOR_LOOP)
#endif

int main(void) {
    printf("Fahrenheit  Celsius  Mode (%d)\n", MODE);

#if MODE == FOR_LOOP
    for (int fahrenheit = -20; fahrenheit <= 60; fahrenheit += 20) {
        //int celsius = (5 * (fahrenheit - 32)) / 9;
        float celsius = (5.f / 9.f) * (fahrenheit - 32);
        //printf("% 10d  % 7d\n", fahrenheit, celsius);
        printf("% 10d  % 7.1f\n", fahrenheit, celsius);
    }
    puts("\nCelsius  Fahrenheit");

    for (int celsius = -20; celsius <= 60; celsius += 10) {
        float fahrenheit = (9.f / 5.f) * celsius + 32;
        printf("% 7d  % 10.2f\n", celsius, fahrenheit);
    }

#elif MODE == WHILE_LOOP
    int fahrenheit = -20;
    while (fahrenheit <= 60) {
        //int celsius = (5 * (fahrenheit - 32)) / 9;
        float celsius = (5.f / 9.f) * (fahrenheit - 32);
        //printf("% 10d  % 7d\n", fahrenheit, celsius);
        printf("% 10d  % 7.1f\n", fahrenheit, celsius);
        fahrenheit += 20;
    }
#endif
    printf("..........  .......\n");

    getchar();
    return 0;
}