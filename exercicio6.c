#include <stdio.h>
#include <math.h>

int main() {

    int numero1, numero2;
    double resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    resultado = pow(numero1 - numero2, 2);

    printf("O quadrado da diferenca dos numeros %d e %d e: %.2lf\n", numero1, numero2, resultado);

    return 0;
}