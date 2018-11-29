#include <stdio.h>

#define FOR_LOOP    (10)
#define WHILE_LOOP  (20)

#ifndef MODE
#define MODE        (FOR_LOOP)
#endif

#define MAX_TEMP                    (300)
#define MIN_TEMP                    (-20)
#define TEMP_STEP_SIZE_CELSIUS      (10)
#define TEMP_STEP_SIZE_FAHRENHEIT   (20)

static void printAsFahrenheit(int celsius);
static void printAsCelsius(int fahrenheit);

int main(void) {
    puts("Fahrenheit  Celsius");

#if MODE == FOR_LOOP
    puts("FOR-Loop Mode:");
    for (int fahrenheit = MIN_TEMP; fahrenheit <= MAX_TEMP; fahrenheit += TEMP_STEP_SIZE_FAHRENHEIT) {
        printAsCelsius(fahrenheit);
    }
    puts("\nCelsius  Fahrenheit");

    for (int celsius = MIN_TEMP; celsius <= MAX_TEMP; celsius += TEMP_STEP_SIZE_CELSIUS) {
        printAsFahrenheit(celsius);
    }

#elif MODE == WHILE_LOOP
    puts("WHILE-Loop Mode:");
    int fahrenheit = MIN_TEMP;
    while (fahrenheit <= MAX_TEMP) {
        printAsCelsius(fahrenheit);
        fahrenheit += TEMP_STEP_SIZE_FAHRENHEIT;
    }
#endif

    getchar();
    return 0;
}

static void printAsFahrenheit(int celsius) {
    float fahrenheit = (9.f / 5.f) * celsius + 32;
    printf("% 7d  % 10.2f\n", celsius, fahrenheit);
}

static void printAsCelsius(int fahrenheit) {
    // --- Auskommentieren für A1.2.3) a) bzw. b)
    //int celsius = (5 * (fahrenheit - 32)) / 9;
    //printf("% 10d  % 7d\n", fahrenheit, celsius);
    // ---
    float celsius = (5.f / 9.f) * (fahrenheit - 32);
    printf("% 10d  % 7.1f\n", fahrenheit, celsius);
    // --- --------------------------------------
}
