#include <stdio.h>

int main() {

    double numero1, numero2;
    double soma,subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("Numeros digitados: %.2lf e %.2lf\n", numero1, numero2);
    printf("Soma: %.3lf\n", soma);
    printf("Subtracao: %.3lf\n", subtracao);
    printf("Multiplicacao: %.3lf\n", multiplicacao);
    printf("Divisao: %.3lf\n", divisao);

    return 0;
}