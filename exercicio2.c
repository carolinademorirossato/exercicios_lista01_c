#include <stdio.h>

int main() {

    int numero1, numero2;
    int subtracao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    subtracao = numero1 - numero2;

    printf("A soma de %d e %d e: %d\n", numero1, numero2, subtracao);

    return 0;
}