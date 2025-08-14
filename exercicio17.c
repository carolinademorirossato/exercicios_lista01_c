#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1, x2, y2, x3, y3;
    double ladoAB, ladoBC, ladoCA;

    printf("Digite as coordenadas do ponto A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas do ponto B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Digite as coordenadas do ponto C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    ladoAB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    ladoBC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    ladoCA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    printf("\nO comprimento do lado AB e: %.2lf", ladoAB);
    printf("\nO comprimento do lado BC e: %.2lf", ladoBC);
    printf("\nO comprimento do lado CA e: %.2lf\n", ladoCA);

    return 0;
}