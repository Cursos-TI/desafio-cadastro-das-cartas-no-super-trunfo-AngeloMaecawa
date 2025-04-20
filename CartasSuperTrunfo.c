#include <stdio.h>

int main () {

//Foi criada variavéis com sufixos 1 e 2, para representar as duas cartas preenchidas pelo usuário.
    char estado1, estado2, codigo1 [4],codigo2 [4], cidade1 [30], cidade2 [30];
    int populacao1, populacao2, pontostur1, pontostur2;
    float area1, area2, PIB1, PIB2, densidade1, densidade2, PIBpcapita1, PIBpcapita2;

//Abaixo, fiz com que o usuário pudesse já olher as informações para ambas as cargas.
    printf("Por favor! Abaixo, digite os dados para preencher as informações de duas cartas.\n");
    printf ("Digite uma letra de 'A' a 'H', que represente um dos oito estados.\nPrimeiro estado: ");
    scanf ("%c", &estado1);
    printf ("Segundo estado: ");
    scanf (" %c", &estado2);

    printf ("Digite o código da carta de 01 a 04 iniciando com a letra escolhida para o estado (ex: A01, B02, D03 ou H04).\nPrimeiro código: ");
    scanf ("%s", codigo1);
    printf ("Segundo código: ");
    scanf ("%s", codigo2);

    printf ("Digite os nomes das cidades.\nPrimeira cidade: ");
    scanf ("%s", cidade1);
    printf ("Segunda cidade: ");
    scanf ("%s", cidade2);

    printf ("Digite a população das cidades.\nPrimeira cidade: ");
    scanf ("%d", &populacao1);
    printf ("Segunda cidade: ");
    scanf ("%d", &populacao2);

    printf ("Digite a area das cidades em km quadrados.\nPrimeira cidade: ");
    scanf ("%f", &area1);
    printf ("Segunda cidade: ");
    scanf ("%f", &area2);

    printf ("Digite o PIB das cidades.\nPrimeira cidade: ");
    scanf ("%f", &PIB1);
    printf ("Segunda cidade: ");
    scanf ("%f", &PIB2);

    printf ("Digite o número de pontos turísticos das cidades.\nPrimeira cidade: ");
    scanf ("%d", &pontostur1);
    printf ("Segunda cidade: ");
    scanf ("%d", &pontostur2);

//Calculando a densidade populacional da carta 1 e 2.
    densidade1 = (float)populacao1/area1;
    densidade2 = (float)populacao2/area2;

//Calculando o PIB per capita da carta 1 e 2.
    PIBpcapita1 = (float)PIB1/populacao1;
    PIBpcapita2 = (float)PIB2/populacao2;

//Os dados da primeira carta, que serão apresentados na tela:    
    printf("Carta 1:\n");
    printf(" - Estado: %c;\n", estado1);
    printf(" - Código: %s;\n", codigo1);
    printf(" - Nome da Cidade: %s;\n", cidade1);
    printf(" - População: %d;\n", populacao1);
    printf(" - Área: %.3f km²;\n", area1);
    printf(" - PIB: %.2f bilhões de reais;\n", PIB1);
    printf(" - Número de pontos turísticos: %d;\n", pontostur1);
    printf(" - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf(" - PIB per Capita: %.2f reais.\n\n", PIBpcapita1);

//Os dados da segunda carta, que serão apresentados na tela:        
    printf("Carta 2:\n");
    printf(" - Estado: %c;\n", estado2);
    printf(" - Código: %s;\n", codigo2);
    printf(" - Nome da Cidade: %s;\n", cidade2);
    printf(" - População: %d;\n", populacao2);
    printf(" - Área: %.3f km²;\n", area2);
    printf(" - PIB: %.2f bilhões de reais;\n", PIB2);
    printf(" - Número de pontos turísticos: %d;\n", pontostur2);
    printf(" - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf(" - PIB per Capita: %.2f reais.", PIBpcapita2);

    return 0;
}