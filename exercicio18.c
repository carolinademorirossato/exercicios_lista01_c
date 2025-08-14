#include <stdio.h>
#include <math.h>

int main() {

    float precoLata = 40.0;
    float coberturaLata = 9.0;
    float pi = 3.14159;

    float altura, raio;
    float areaLateral, areaBase, areaTotal;
    float areaDuasMaos;
    int latasNecessarias;
    float custoTotal;

    printf("Digite a altura do cilindro (em m): ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro (em m): ");
    scanf("%f", &raio);

    areaLateral = 2 * pi * raio * altura;
    areaBase = pi * raio * raio;
    areaTotal = (2 * areaBase) + areaLateral;

    areaDuasMaos = areaTotal * 2;
    latasNecessarias = (int)ceil(areaDuasMaos / coberturaLata);
    custoTotal = latasNecessarias * precoLata;

    printf("Latas de tinta necessarias: %d\n", latasNecessarias);
    printf("Custo total considerando duas maos de tinta R$ %.2f\n", custoTotal);

    return 0;
}