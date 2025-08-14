#include <stdio.h>
#include <math.h>

int main() {

    int lado1, lado2, lado3;
    float area, semiperimetro;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &lado2);
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    semiperimetro = (lado1 + lado2 + lado3) / 2.0;

    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    printf("A area do triangulo formado e: %.2f", area);

    return 0;
}