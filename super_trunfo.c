#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição da Carta 1
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}
