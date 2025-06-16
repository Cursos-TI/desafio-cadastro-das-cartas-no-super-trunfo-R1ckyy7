#include <stdio.h>

int main() {
    struct Carta {
        char codigo[4];
        unsigned long int populacao;
        float area;
        float pib;
        int pontos_turisticos;
        float densidade;
        float pib_per_capita;
        float super_poder;
    };

    struct Carta carta1, carta2;

    // Entrada de dados - carta 1
    scanf("%s", carta1.codigo);
    scanf("%lu", &carta1.populacao);
    scanf("%f", &carta1.area);
    scanf("%f", &carta1.pib);
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculos carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pib_per_capita + (1 / carta1.densidade);

    // Entrada de dados - carta 2
    scanf("%s", carta2.codigo);
    scanf("%lu", &carta2.populacao);
    scanf("%f", &carta2.area);
    scanf("%f", &carta2.pib);
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pib_per_capita + (1 / carta2.densidade);

    // Comparação
    printf("%d\n", carta1.populacao > carta2.populacao ? 1 : 0);
    printf("%d\n", carta1.area > carta2.area ? 1 : 0);
    printf("%d\n", carta1.pib > carta2.pib ? 1 : 0);
    printf("%d\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);
    printf("%d\n", carta1.densidade < carta2.densidade ? 1 : 0);
    printf("%d\n", carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 0);
    printf("%d\n", carta1.super_poder > carta2.super_poder ? 1 : 0);

    return 0;
}