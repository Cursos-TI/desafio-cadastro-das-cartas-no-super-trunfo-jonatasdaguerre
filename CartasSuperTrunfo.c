#include <stdio.h>

int main() {
    char estado[3], codigocarta[10], cidade[50];
    int populacao, pib, pontosturisticos;
    float areakm2, densidadepopulacional, pibpercapita;

    // Carta 1
    printf("Carta 1: \n");

    printf("Estado: \n");
    scanf("%2s", estado); // Limitar o estado para 2 caracteres

    printf("Codigo: \n");
    scanf("%9s", codigocarta); // Limitar o código para 9 caracteres

    printf("Nome da cidade: \n");
    scanf("%49s", cidade); // Limitar o nome da cidade para 49 caracteres

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area (km²): \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Densidade populacional: \n");
    scanf("%f", &densidadepopulacional);

    printf("PIB per capita: \n");
    scanf("%f", &pibpercapita);

    // Exibir informações da Carta 1
    printf("\nCarta 1: \n");
    printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
    printf("\n - Populacao: %d", populacao);
    printf("\n - Area: %.2f km²", areakm2);  // Exibindo com 2 casas decimais
    printf("\n - PIB: %d \n - Numero de pontos turisticos: %d \n", pib, pontosturisticos);
    printf("\n - Densidade populacional: %f \n - PIB per capita: %f \n", densidadepopulacional, pibpercapita);

    // Carta 2
    printf("\nCarta 2: \n");

    printf("Estado: \n");
    scanf("%2s", estado);

    printf("Codigo: \n");
    scanf("%9s", codigocarta);

    printf("Nome da cidade: \n");
    scanf("%49s", cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area (km²): \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Densidade populacional: \n");
    scanf("%f", &densidadepopulacional);

    printf("PIB per capita: \n");
    scanf("%f", &pibpercapita);

    // Exibir informações da Carta 2
    printf("\nCarta 2: \n");
    printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
    printf("\n - Populacao: %d", populacao);
    printf("\n - Area: %.2f km²", areakm2); // Exibindo com 2 casas decimais
    printf("\n - PIB: %d \n - Numero de pontos turisticos: %d", pib, pontosturisticos);
    printf("\n - Densidade populacional: %f \n - PIB per capita: %f \n", densidadepopulacional, pibpercapita);

    return 0;
}
