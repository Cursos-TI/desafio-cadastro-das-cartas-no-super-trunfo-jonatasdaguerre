#include <stdio.h>

int main() {
    char estado[3], codigocarta[10], cidade[50];
    int populacao, pib, pontosturisticos;
    float areakm2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1: \n");
    printf("Estado: \n");
    scanf(" %c", &estado1);
    printf("Código: \n");
    scanf("%3s", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibir informações da Carta 1
    printf("\nCarta 1: \n");
    printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
    printf("\n - Populacao: %d", populacao);
    printf("\n - Area: %.2f km²", areakm2);  // Exibindo com 2 casas decimais
    printf("\n - PIB: %d \n - Numero de pontos turisticos: %d \n", pib, pontosturisticos);

    // Carta 2
    printf("\nCarta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &estado2);
    printf("Código: \n");
    scanf("%3s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibir informações da Carta 2
    printf("\nCarta 2: \n");
    printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
    printf("\n - Populacao: %d", populacao);
    printf("\n - Area: %.2f km²", areakm2); // Exibindo com 2 casas decimais
    printf("\n - PIB: %d \n - Numero de pontos turisticos: %d", pib, pontosturisticos);

    return 0;
}
