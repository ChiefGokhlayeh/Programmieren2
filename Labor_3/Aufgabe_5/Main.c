#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *((const int*) a) - *((const int*) b);
}

#define ELEMENT_COUNT   (23)

int main(void) {
    int array[ELEMENT_COUNT];
    for (size_t i = 0; i < ELEMENT_COUNT; i++) {
        array [i] = rand() % (ELEMENT_COUNT * 10);
    }
    puts("Initial State:");
    for (size_t i = 0; i < ELEMENT_COUNT; i++) {
        printf("%d\t", array[i]);
        if ((i+1) % 5 == 0)
            puts("");
    }
    puts("");

    qsort(array, ELEMENT_COUNT, sizeof(int), compare);

    puts("Sorted:");
    for (size_t i = 0; i < ELEMENT_COUNT; i++) {
        printf("%d\t", array[i]);
        if ((i+1) % 5 == 0)
            puts("");
    }
    puts("");

    return 0;
}
