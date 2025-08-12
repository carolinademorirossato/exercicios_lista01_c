#include <stdio.h>

int main() {

    int a1, an, razao, ntermos, pa;

    printf("Infore o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Informe o ultimo termo da PA: ");
    scanf("%d", &an);

    printf("Informe a razao da PA: ");
    scanf("%d", &razao);

    ntermos = ((an - a1) / razao);

    pa= ((a1+an) / 2) * ntermos;

    printf("A soma dos termos da PA e: %d\n", pa);

    return 0;
}