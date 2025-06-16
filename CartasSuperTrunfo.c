#include <stdio.h>

int main() {
    // Estrutura para guardar os dados da carta
    struct Carta {
        char codigo[4];
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
    };

    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
