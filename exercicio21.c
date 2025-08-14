#include <stdio.h>

int main() {

    int horas;
    float segundos;

    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);

    segundos = horas * 3600;

    printf("%.2f segundos", segundos);

    return 0;
}