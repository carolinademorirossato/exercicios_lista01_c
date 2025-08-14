#include <stdio.h>

int main() {

    float num;
    float volume;
    float area;

    printf("Digite um numero: ");
    scanf("%f", &num);

    volume = num * num * num;

    area = 6 * (num * num);

    printf("Volume: %.2f\n", volume);
    printf("Area: %.2f\n", area);

    return 0;
}