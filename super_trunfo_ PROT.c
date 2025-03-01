#include <stdio.h>

// Tema 1: Super Trunfo em c
// Desafio: Nível novato

int main(){

    char A[50];
    char B[50];
    char codcarta1[50];
    char codcarta2[50];
    char nomeC1[50]; 
    char nomeC2[50];

    int populacao1;
    int populacao2;
    int numerosP1;
    int numerosP2;

    float area2;
    float area1;
    float pib2;
    float pib1;



    printf("  Carta 1: \n");

    printf("Digite a letra inicial do estado de A a B: ");
    scanf("%s", &A);

    printf("Digite o código da carta de A1 a B2: ");
    scanf("%s", &codcarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeC1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos possui a cidade: ");
    scanf(" %d", &numerosP1);



    printf("  Carta 2: \n");

    printf("Digite a letra inicial do estado de A a B: ");
    scanf("%s", &B);

    printf("Digite o código da carta de A1 a B2: ");
    scanf("%s", &codcarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeC2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos possui a cidade: ");
    scanf("%d", &numerosP2);



    printf("Carta 1: \n");

    printf("Estado: %s\n", A);

    printf("Código: %s\n", codcarta1);

    printf("Nome da Cidade: %s\n", nomeC1);

    printf("População: %d milhão\n", populacao1);

    printf("Área: %fKm²\n", area1);

    printf("PIB: R$ %f bilhões\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", numerosP1);
    

    printf("Carta 2: \n");

    printf("Estado: %s\n", B);

    printf("Código: %s\n", codcarta2);

    printf("Nome da Cidade: %s\n", nomeC2);

    printf("População: %d milhão\n", populacao2);

    printf("Área: %fKm²\n", area2);

    printf("PIB: R$ %f bilhões\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", numerosP2);

    return 0;

}
