#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Declaração das variáveis
    char codigo[3];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    //Leitura dos dados
    printf("Código da carta: \n");
    scanf("%s", &codigo);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    //mostrando os dados lidos
    printf("Código da carta: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %d \n", pontosTuristicos);

    return 0;
}
