#include <stdio.h>

int main(void) {
    int buffer[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    double buffer2[] = { 0.5, 1.5, 2.5, 3.5 };

    FILE* fp;
    size_t ergeb;

    if ((fp = fopen("../TEST.BIN", "wb")) == NULL) {
        fprintf(stderr, "Kann Datei nicht öffnen!\n");
    } else {
        ergeb = fwrite(buffer, sizeof(int), sizeof(buffer) / sizeof(int), fp);
        printf("%li Zahlen in Datei geschrieben\n", ergeb);

        ergeb = fwrite(buffer2, sizeof(double), sizeof(buffer2) / sizeof(double), fp);
        printf("%li Zahlen in Datei geschrieben\n", ergeb);
        fclose(fp);
    }

    return 0;
}
