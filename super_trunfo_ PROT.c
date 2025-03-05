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
    float densidadeP2;
    float densidadeP1;
    float pibPC1;
    float pibPC2;

    /*
        **Exemplos usados para teste**

      Carta 1
     A
     A1
     Campinas
     1139047
     794.571
     72946774.92
     21    

      Carta 2
     B
     B2
     Uberlandia
     754954
     4115.206
     43129284.92 
     15
        */



    printf("*** Desafio Super Trunfo ***\n");
    printf("---------------------------------------------------------------------------------\n");
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



    printf("---------------------------------------------------------------------------------\n");
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



    printf("---------------------------------------------------------------------------------\n");
    printf("Carta 1: \n");

    printf("Estado: %s\n", A);

    printf("Código: %s\n", codcarta1);

    printf("Nome da Cidade: %s\n", nomeC1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f Km²\n", area1);

    printf("PIB: R$ %.2f bilhões\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", numerosP1);

    densidadeP1 = (float) populacao1 / area1;

    pibPC1 = (float) pib1 / populacao1;
    

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP1);

    printf("PIB per Capita: %.2f reais\n", pibPC1);
    
    

    printf("---------------------------------------------------------------------------------\n");
    printf("Carta 2: \n");

    printf("Estado: %s\n", B);

    printf("Código: %s\n", codcarta2);

    printf("Nome da Cidade: %s\n", nomeC2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: R$ %.2f bilhões\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", numerosP2);

    densidadeP2 = (float) populacao2 / area2;

    pibPC2 = (float) pib2 / populacao2;

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP2);

    printf("PIB per Capita: %.2f reais\n", pibPC2);

    return 0;

}