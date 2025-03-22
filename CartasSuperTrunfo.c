#include <stdio.h>

int main(){
    char estado, codigocarta[10], cidade[50]; //Variáveis que trazem valores com caracteres pré estabelecidos
    int populacao, pib, pontosturisticos; //Variáveis que trazem números inteiros(Sem casa decimal)
    float areakm2; //Variável que traz números com casas decimais

    printf("Carta 1: \n"); //printf mostra a informação para o usuário e o \n é para a quebra de linha

    printf("Estado: \n");
    scanf("%s", &estado); //%s é o comando que faz o char funcionar e o & valida a variável

    printf("Codigo: \n");
    scanf("%s", &codigocarta);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao); //%d é o comando que faz o int funcionar e o & valida a variável

    printf("Area: \n");
    scanf("%f", &areakm2); //%f é o comando que faz o float funcionar e o & valida a variável

    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("\n Carta 2: \n");
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigocarta);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%d", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1: \n");
    printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
    printf("\n - Populacao: %d", populacao);
    printf("\n - Area: %f", areakm2);
    printf("\n - PIB: %d \n - Numero de pontos turisticos: %d \n", pib, pontosturisticos);
    
        printf("\n Carta 2: \n");
        printf("\n - Estado: %s \n - Codigo: %s \n - Cidade: %s", estado, codigocarta, cidade);
        printf("\n - Populacao: %d", populacao);
        printf("\n - Area: %f", areakm2);
        printf("\n - PIB: %d \n - Numero de pontos turisticos: %d", pib, pontosturisticos);
        
    return 0;

}