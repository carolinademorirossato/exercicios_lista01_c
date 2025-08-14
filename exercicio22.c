#include <stdio.h>

int main() {

    int minutos, horas;

    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;

    printf("%d horas", horas);

    return 0;
}