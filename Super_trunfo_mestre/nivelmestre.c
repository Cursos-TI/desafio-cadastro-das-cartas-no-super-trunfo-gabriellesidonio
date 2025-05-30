#include <stdio.h>

#define MAX_CARTAS 2  // Maximo de duas cartas

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[6];
    char nomeCidade[85];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

void cadastrarCarta(Carta *carta, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero + 1);
    printf("Estado: ");
    scanf(" %c", &carta->estado);
    printf("Código: ");
    scanf("%5s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcularPIBPerCapita(float pib, unsigned long int populacao) {
    return (pib * 1000000000) / populacao;
}

float calcularSuperPoder(Carta c) {
    return c.populacao + c.area + c.pib + c.pontosTuristicos + c.pibPerCapita + (1 / c.densidade);
}

void exibirCarta(Carta c, int numero) {
    printf("\n=== Dados da Carta %d ===\n", numero + 1);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per capita: R$ %.2f\n", c.pibPerCapita);
    printf("Super Poder: %.2f\n", c.superPoder);
}

const char* resultado(float v1, float v2, int menorVence) {
    if (v1 == v2) return "Empate";
    if (menorVence) return (v1 < v2) ? "Carta 1 vence" : "Carta 2 vence";
    else return (v1 > v2) ? "Carta 1 vence" : "Carta 2 vence";
}

int main() {
    Carta cartas[MAX_CARTAS];

    // Cadastro e cálculos
    for (int i = 0; i < MAX_CARTAS; i++) {
        cadastrarCarta(&cartas[i], i);
        cartas[i].densidade = calcularDensidade(cartas[i].populacao, cartas[i].area);
        cartas[i].pibPerCapita = calcularPIBPerCapita(cartas[i].pib, cartas[i].populacao);
        cartas[i].superPoder = calcularSuperPoder(cartas[i]);
    }

    // Exibição
    for (int i = 0; i < MAX_CARTAS; i++) {
        exibirCarta(cartas[i], i);
    }

    // Comparações 
    printf("\n=== Comparação ===\n");
    printf("População: %s\n", resultado(cartas[0].populacao, cartas[1].populacao, 0));
    printf("Área: %s\n", resultado(cartas[0].area, cartas[1].area, 0));
    printf("PIB: %s\n", resultado(cartas[0].pib, cartas[1].pib, 0));
    printf("Pontos turísticos: %s\n", resultado(cartas[0].pontosTuristicos, cartas[1].pontosTuristicos, 0));
    printf("Densidade populacional: %s\n", resultado(cartas[0].densidade, cartas[1].densidade, 1));  // menor vence
    printf("PIB per capita: %s\n", resultado(cartas[0].pibPerCapita, cartas[1].pibPerCapita, 0));
    printf("Super Poder: %s\n", resultado(cartas[0].superPoder, cartas[1].superPoder, 0));

    return 0;
}
