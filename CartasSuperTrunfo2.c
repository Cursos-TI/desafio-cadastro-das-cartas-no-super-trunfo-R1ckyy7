#include <stdio.h>

int main() {
    struct Carta {
        char codigo[4];
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
        float densidade;
        float pib_per_capita;
    };

    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    scanf("%s", carta1.codigo);
    scanf("%d", &carta1.populacao);
    scanf("%f", &carta1.area);
    scanf("%f", &carta1.pib);
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    printf("Cadastro da segunda carta:\n");
    scanf("%s", carta2.codigo);
    scanf("%d", &carta2.populacao);
    scanf("%f", &carta2.area);
    scanf("%f", &carta2.pib);
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    printf("Dados da primeira carta:\n");
    printf("%s\n", carta1.codigo);
    printf("%d\n", carta1.populacao);
    printf("%.2f\n", carta1.area);
    printf("%.2f\n", carta1.pib);
    printf("%d\n", carta1.pontos_turisticos);
    printf("%.2f\n", carta1.densidade);
    printf("%.8f\n", carta1.pib_per_capita);

    printf("Dados da segunda carta:\n");
    printf("%s\n", carta2.codigo);
    printf("%d\n", carta2.populacao);
    printf("%.2f\n", carta2.area);
    printf("%.2f\n", carta2.pib);
    printf("%d\n", carta2.pontos_turisticos);
    printf("%.2f\n", carta2.densidade);
    printf("%.8f\n", carta2.pib_per_capita);

    return 0;
}