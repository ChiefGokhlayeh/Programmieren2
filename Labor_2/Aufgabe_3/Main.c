#include <stdio.h>

int main(void) {
    char abc[] = "Dies ist ein Array, aber wie gross ist es denn?";
    int intArray[100];
    double doubleArray[100];
    printf("sizeof(abc)=%ld\n", sizeof(abc));
    printf("sizeof(abc[0])=%ld\n", sizeof(abc[0]));
    printf("sizeof(intArray)=%ld\n", sizeof(intArray));
    printf("sizeof(doubleArray)=%ld\n", sizeof(doubleArray));
    printf("sizeof(doubleArray[0])=%ld\n", sizeof(doubleArray[0]));
    return 0;
}