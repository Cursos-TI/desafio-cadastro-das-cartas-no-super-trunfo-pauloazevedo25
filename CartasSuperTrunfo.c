#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Declaração das variáveis 

    //Carta1
    char estado1;
    char codigo1[5];
    char nomeCidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densPopulacional1;
    float pibPerCapita1;

    //Carta2
    char estado2;
    char codigo2[5];
    char nomeCidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densPopulacional2;
    float pibPerCapita2;



    //Lendo dados - Carta 1
    printf("Cadastrando Carta 1: \n");
    printf("Código o estado: ");
    scanf("%c", &estado1);
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    densPopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1/populacao1;
    
    //Mostrando dados - Carta 1
    printf("\nDados cadastrados da Carta 1: \n");
    printf("Código o estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f m²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densPopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    //Lendo dados - Carta 2
    printf("Cadastrando Carta 2: \n");
    printf("Código o estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    densPopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2/populacao2;

    //Mostrando dados - Carta 2
    printf("\nDados cadastrados da Carta 2: \n");
    printf("Código o estado: %c\n", estado2); 
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f m²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densPopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    return 0;
}
