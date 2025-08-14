#include <stdio.h>

int main() {

    int horas, minutos, segundos;
    int temposegundos;

    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    temposegundos = (horas * 3600) + (minutos *60) + segundos;

    printf("%d segundos", temposegundos);

    return 0;
}