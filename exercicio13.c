#include <stdio.h>

int main() {

    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo de base %.2f e altura %.2f e: %.2f\n", base, altura, area);

    return 0;
}