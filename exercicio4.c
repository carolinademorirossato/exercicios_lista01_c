#include <stdio.h>

int main() {

    int numero1, numero2;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    divisao = (float) numero1 / numero2;

    printf("A divisao de %d e %d e: %.2f\n", numero1, numero2, divisao);

    return 0;
}