#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    int x, y, z;
    bool valid = false;

    char buffer[128];
    do {
        printf("Please input three integers separated by spaces: ");
        fgets(buffer, sizeof(buffer), stdin);
        int consumed = sscanf(buffer, "%d %d %d", &x, &y, &z);
        
        valid = false;
        switch (consumed)
        {
            case 2:
                puts("Invalid z value!");
                break;
            case 1:
                puts("Invalid y value!");
                puts("Invalid z value!");
                break;
            case 0:
                puts("Invalid x value!");
                puts("Invalid y value!");
                puts("Invalid z value!");
                break;
            case 3:
                valid = true;
                break;
            default:
                break;
        }
    } while(!valid);

    printf("Input: %d, %d, %d\n", x, y, z);
    return 0;
}