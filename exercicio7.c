#include <stdio.h>

int main() {

    int numero1, numero2;
    int calculo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    calculo = ((numero1*4)+(numero2*6)) / 2;

    printf("O resultado do calculo e: %d\n", calculo);
    
    return 0;
}