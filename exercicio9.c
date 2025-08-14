#include <stdio.h>

int main() {

    int n;
    int area;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    area = n * n;

    printf("A area do quadrado de %d e: %d\n", n, area);

    return 0;
}