#include <stdio.h>

int main() {

    float lado1, lado2, altura, area;

    printf("Digite o compreimento do primeiro lado do trapezio: ");
    scanf("%f", &lado1);
    printf("Digite o compreimento do segundo lado do trapezio: ");
    scanf("%f", &lado2);
    printf("Digite o compreimento da altura do trapezio: ");
    scanf("%f", &altura);

    area = ((lado1 + lado2) * altura) / 2;

    printf("A area do trapezio e: %.2f", area);

    return 0;

}