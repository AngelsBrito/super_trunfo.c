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
    int resultPOPU, resultAREA, resultPIB, resultDENSP, resultNUMP, resultPIBPC, resultSUPER;

    float area2, pib2, densidadeP2, pibPC2, superP2;
    float area1, pib1, densidadeP1, pibPC1, superP1;
    

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

    superP1 = (float) populacao1 + area1 + pib1 + numerosP1 + pibPC1 + (densidadeP1 / 1);

    printf("Super Poder: %.2f\n", superP1);

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

    superP2 = (float) populacao2 + area2 + pib2 + numerosP2 + pibPC2 + (densidadeP2 / 1);

    printf("Super Poder: %.2f\n", superP2);



    printf("---------------------------------------------------------------------------------\n");
    printf(" *** DUELO ***\n");

    printf("A carta 1 tem maior População que a carta 2?: %d\n", populacao1 > populacao2);

    printf("A carta 1 tem maior Área que a carta 2?: %d\n", area1 > area2);

    printf("A carta 1 tem maior PIB que a carta 2?: %d\n", pib1 > pib2);

    printf("A carta 1 tem mais Pontos Turísticos que a carta 2?: %d\n", numerosP1 > numerosP2);

    printf("A carta 1 tem maior Densidade Populacional que a carta 2?: %d\n", densidadeP1 > densidadeP2);

    printf("A carta 1 tem maior PIB per Capita que a carta 2?: %d\n", pibPC1 > pibPC2);

    printf("A carta 1 tem  um maior Super Poder que a carta 2?: %d\n", superP1 > superP2);

    printf("---------------------------------------------------------------------------------\n");
    printf("*** RESULTADO ***\n");

    resultPOPU = populacao1 > populacao2;
    resultAREA = area1 > area2;
    resultPIB = pib1 > pib2;
    resultNUMP = numerosP1 > numerosP2;
    resultDENSP = densidadeP1 > densidadeP2;
    resultPIBPC = pibPC1 > pibPC2;
    resultSUPER = superP1 > superP2;

    printf("População: %d\n", resultPOPU);
    printf("Área: %d\n", resultAREA);
    printf("PIB: %d\n", resultPIB);
    printf("Pontos Turísticos: %d\n", resultNUMP);
    printf("Densidade Populacional: %d\n", resultDENSP);
    printf("PIB per Capita: %d\n", resultPIBPC);
    printf("Super Poder: %d\n", resultSUPER);

    return 0;

}