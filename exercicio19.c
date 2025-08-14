#include <stdio.h>
#include <math.h>

int main() {

    int valor1, valor2;
    int modulo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    modulo = abs(valor1 - valor2);

    printf("O modulo da diferenca entre %d e %d e: %d\n", valor1, valor2, modulo);

    return 0;
}