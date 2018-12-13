#include <stdio.h>
#include <math.h>

void kugel(double radius, double* area, double* volume) {
    *area = 4 * M_PI * (radius * radius);
    *volume = 4 * M_PI * (radius * radius * radius) / 3;
}

void kasten(double width, double height, double depth, double* area, double* volume, double* diagonal) {
    *area = 2 * width * height + 2 * height * depth + 2 * width * depth;
    *volume = width * height * depth;
    *diagonal = sqrt(pow(width, 2) + pow(height, 2) + pow(depth, 2));
}

int main(void) {
    double radius = 0;
    printf("Radius der Kugel: ");
    char buffer[128];
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &radius);

    double area = 0;
    double volume = 0;
    kugel(radius, &area, &volume);

    printf("Area: %lf, Volume %lf\n", area, volume);

    double width, height, depth;
    printf("Breite, Höhe und Tiefe des Quaders: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf %lf %lf", &width, &height, &depth);

    double diagonal = 0;
    kasten(width, height, depth, &area, &volume, &diagonal);

    printf("Area: %lf, Volume %lf, Diagonal %lf\n", area, volume, diagonal);

    return 0;
}