#include <stdio.h>

#define ARRAY_LEN (4)

int main(void)
{
    double values[ARRAY_LEN];

    char string[128];
    
    for(int i = 0; i < ARRAY_LEN; i++)
    {
        printf("[%d] Insert a value: ", i + 1);
        fgets(string, sizeof(string), stdin);
        sscanf(string, "%lf", &values[i]);
    }

    double min = values[0];
    int smallestIndex = 0;
    for(int i = 0; i < ARRAY_LEN; i++)
    {
        if (values[i] < min)
        {
            min = values[i];
            smallestIndex = i;
        }
    }
    printf("Smallest value %lf at &d\n", min, smallestIndex);

    return 0;
}
