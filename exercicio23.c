#include <stdio.h>

int main() {

    int segundos, horas;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;

    printf("%d horas", horas);

    return 0;
}