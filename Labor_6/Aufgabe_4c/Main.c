#include <stdio.h>

int main(void) {
    int buffer[8];
    double buffer2[4];
    FILE* fp;
    size_t ergeb;
    size_t ergeb2;

    if ((fp = fopen("../TEST.BIN", "r")) == NULL) {
        fprintf(stderr, "Kann Datei nicht öffnen!\n");
    } else {
        ergeb = fread(buffer, sizeof(int), sizeof(buffer) / sizeof(int), fp);
        printf("\n");
        for (int i = 0; i < ergeb; i++) {
            printf("In buffer[%i] wurde aus Datei TEST.BIN die folgende Zahl eingelesen: %i\n", i, buffer[i]);
        }
        ergeb2 = fread(buffer2, sizeof(double), sizeof(buffer2) / sizeof(double), fp);
        printf("\n");
        for (int i = 0; i < ergeb2; i++) {
            printf("In buffer2[%i] wurde aus Datei TEST.BIN die folgende Zahl eingelesen: %lf\n", i, buffer2[i]);
        }
        if (feof(fp)) printf("Dateiende erreicht\n");
        fclose(fp);
        printf("Insgesamt %li Zahlen aus der Datei gelesen\n", ergeb + ergeb2);
    }

    return 0;
}
