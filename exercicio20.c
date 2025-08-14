#include <stdio.h>

int main() {

    int tempo, minutos;

    printf("Digite o tempo em horas: ");
    scanf("%d", &tempo);

    minutos = tempo * 60;

    printf("%d minutos", minutos);

    return 0;
}