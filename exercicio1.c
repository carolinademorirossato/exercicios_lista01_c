#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma de %d e %d e: %d\n", numero1, numero2, soma);

    return 0;
}