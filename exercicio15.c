#include <stdio.h>

int main() {

    int lado1, lado2, lado3;
    int semiperimetro;

    printf("Digite o valor o primero lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o valor o segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o valor o terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    semiperimetro = (lado1 + lado2 + lado3) / 2;

    printf("O semiperimetro do triangulo e: %d", semiperimetro);

    return 0;
}