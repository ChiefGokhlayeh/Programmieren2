#include <stdio.h>
#include <stdbool.h>

#define SPITZE          (1)
#define GUT             (2)
#define BEFRIEDIGEND    (3)
#define AUSREICHEND     (4)
#define DURCHGEFALLEN   (5)

int main(void) {
    unsigned int note = 0;
    bool bestanden = false;
    bool valid = false;

    do {
        printf("Geben Sie bitte eine Note (1-5) ein: ");
        char string[128];
        fgets(string, sizeof(string), stdin);
        sscanf(string, "%d", &note);

        switch (note) {
            case SPITZE:
            case GUT:
            case BEFRIEDIGEND:
            case AUSREICHEND:
                bestanden = true;
                valid = true;
                break;
            case DURCHGEFALLEN:
                bestanden = false;
                valid = true;
                break;
            default:
                bestanden = false;
                valid = false;
                fprintf(stderr, "ERROR: Invalid mark: '%d'\n", note);
                continue;
        }

        bestanden ? puts("Bestanden!") : puts("Nicht bestanden!");
    } while (!valid);

    return 0;
}
