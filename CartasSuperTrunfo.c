#include <stdio.h>

int main() {
    //Declaração das variáveis da Carta 1
    char estado1[5];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontosturisticos1;

    //Declaração das variáveis da Carta 2
    char estado2[5];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2; 
    int pontosturisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1: \n");
    printf("Estado: \n");
    scanf("%4s", &estado1);
    printf("Código: \n");
    scanf("%3s", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%d", &pib1);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2: \n");
    printf("Estado: \n");
    scanf("%4s", &estado2);
    printf("Código: \n");
    scanf("%3s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%49s", &cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%d", &pib2);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibir informações das cartas
    printf("\n - Carta 1: ");
    printf("\n - Estado: %s", estado1);
    printf("\n - Código: %s", codigo1);
    printf("\n - Cidade: %s", cidade1);
    printf("\n - População: %d", populacao1);
    printf("\n - Área: %.2f km²", area1);
    printf("\n - PIB: %.2f", pib1);
    printf("\n - Número de pontos turísticos: %d \n", pontosturisticos1);

    printf("\n - Carta 2: ");
    printf("\n - Estado: %s", estado2);
    printf("\n - Código: %s", codigo2);
    printf("\n - Cidade: %s", cidade2);
    printf("\n - População: %d", populacao2);
    printf("\n - Área: %.2f km²", area2);
    printf("\n - PIB: %.2f", pib2);
    printf("\n - Número de pontos turísticos: %d \n", pontosturisticos2);

    return 0;
}
