#include <stdio.h>

int main(void) {
    int i = 0;
    int* ptr;
    int** ptrptr;

    ptr = &i;
    ptrptr = &ptr;
    i = 1;
    printf("i=%d\n", i);
    printf("*ptr=%d\n", *ptr);
    printf("**ptrptr=%d\n", **ptrptr);
    printf("i=%d\n", i);
    return 0;
}