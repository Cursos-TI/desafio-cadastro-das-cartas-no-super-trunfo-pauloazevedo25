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

    //Carta2
    char estado2;
    char codigo2[5];
    char nomeCidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;



    //Lendo dados - Carta 1
    printf("Informações da Carta 1: \n");
    printf("Código o estado: \n");
    scanf("%c", &estado1);
    printf("Código da carta: \n");
    scanf("%s", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%s", &nomeCidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Area: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    
    //Mostrando dados - Carta 1
    printf("CARTA 1: \n");
    printf("Código o estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigo1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosTuristicos1);


    //Lendo dados - Carta 2
    printf("Informações da Carta 2: \n");
    printf("Código o estado: \n");
    scanf(" %c", &estado2);
    printf("Código da carta: \n");
    scanf("%s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%s", &nomeCidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Area: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Mostrando dados - Carta 2
    printf("CARTA 2: \n");
    printf("Código o estado: %c \n", estado2); 
    printf("Código da carta: %s \n", codigo2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %d \n", pontosTuristicos2);

    return 0;
}
