#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char estado1;
    char codigo1[6];
    char nomeCidade1[85];
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da segunda carta
    char estado2;
    char codigo2[6];
    char nomeCidade2[85];
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Coleta dos dados da Carta 1
    printf("=== Cadastro Cidade 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%5s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta dos dados da Carta 2
    printf("\n=== Cadastro Cidade 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%5s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\n=== Dados da Cidade 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n=== Dados da Cidade 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
