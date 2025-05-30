#include <stdio.h>

int main() {
    // Dados da cidade 1
    char estado1;
    char codigo1[6];
    char nomeCidade1[85];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Dados da cidade 2
    char estado2;
    char codigo2[6];
    char nomeCidade2[85];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Coleta de dados da cidade 1
    printf("=== Cadastro Cidade 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%5s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê até o final da linha (permite espaços)
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta de dados da cidade 2
    printf("\n=== Cadastro Cidade 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%5s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula densidade (hab/km²) e PIB per capita da cidade 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // converte bilhões para reais

    // Calcula densidade e PIB per capita da cidade 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Mostra os dados da cidade 1
    printf("\n=== Dados da Cidade 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    // Mostra os dados da cidade 2
    printf("\n=== Dados da Cidade 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
