#include <stdio.h>

int main() {
    // Struct para representar uma carta
    typedef struct {
        char estado;
        char codigo[4]; // +1 para '\0'
        char nomeCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
    } Carta;

    // Duas cartas
    Carta carta1, carta2;

    // Ler dados da Carta 1
    printf("=== Dados da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Ler dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcular densidade populacional e PIB per capita
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1e9 / carta1.populacao; // PIB em bilhões
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1e9 / carta2.populacao;

    // Exibir dados das cartas
    printf("\n=== Cartas Cadastradas ===\n");
    printf("Carta 1:\n");
    printf(" Estado: %c\n", carta1.estado);
    printf(" Código: %s\n", carta1.codigo);
    printf(" Nome da Cidade: %s\n", carta1.nomeCidade);
    printf(" População: %d\n", carta1.populacao);
    printf(" Área: %.2f km²\n", carta1.area);
    printf(" PIB: %.2f bilhões de reais\n", carta1.pib);
    printf(" Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf(" PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\nCarta 2:\n");
    printf(" Estado: %c\n", carta2.estado);
    printf(" Código: %s\n", carta2.codigo);
    printf(" Nome da Cidade: %s\n", carta2.nomeCidade);
    printf(" População: %d\n", carta2.populacao);
    printf(" Área: %.2f km²\n", carta2.area);
    printf(" PIB: %.2f bilhões de reais\n", carta2.pib);
    printf(" Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf(" PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
