#include <stdio.h>
#define ARRAY_LEN 4

int ar0[ARRAY_LEN];
int ar1[ARRAY_LEN];
int k;
int l;
int p;
int q;

int main(void)
{
    for (k = 0; k < ARRAY_LEN; k++)
    {
        ar0[k] = 123-2*k;
        ar1[k] = 5;
    }

    k = 55;
    l = 54;
    p = 53;
    q = 52;

    printf("ar1[-1] ist %i\n", ar1[-1]);
    printf("ar1[-2] ist %i\n", ar1[-2]);
    printf("ar1[-3] ist %i\n", ar1[-3]);
    printf("ar1[0] ist %i\n", ar1[0]);
    printf("ar1[ARRAY_LEN ] ist %i\n", ar1[ARRAY_LEN]);
    printf("ar1[ARRAY_LEN+1] ist %i\n", ar1[ARRAY_LEN+1]);

    ar1[ARRAY_LEN+2] = 201;
    ar1[ARRAY_LEN+3] = 202;

    printf("k ist %i\n", k);
    printf("l ist %i\n", l);
    printf("p ist %i\n", p);
    printf("q ist %i\n", q);

    return 0; /* (1) */
}
