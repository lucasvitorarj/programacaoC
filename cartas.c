int main() {

    // Declaração das variáveis para a Carta 1
    char estado1[50], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int npt1;
    float denPopulacional1;
    float pibPerCapita1;
    float superPoder1;


    //Declaração das variáveis para a Carta 2
    char estado2[50], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;
    float denPopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //Entrada Carta 1

    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf("%s", estado1);

    printf("Digite uma letra e um código para a carta: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1); // Ler a linha inteira, até com espaços

    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Defina a quantidade de pontos turisticos: ");
    scanf("%d", &npt1);

    //Calculo da carta 1
    denPopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\n");

    //Entrada Carta 2

    printf("Digite os dados da Carta 2:\n");

    printf("Digite o nome de um Estado: ");
    scanf("%s", estado2);

    printf("Digite uma letra e um código para a carta: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2); // Ler a linha inteira, até com espaços

    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Defina a quantidade de pontos turisticos: ");
    scanf("%d", &npt2);

    //Calculo da carta 2
    denPopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n");

    // Calculo para o Super Poder para cada carta
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)npt1 + pibPerCapita1 + (1.0f / denPopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)npt2 + pibPerCapita2 + (1.0f / denPopulacional2);



    //Exibição Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    //Exibição Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação das cartas
    printf("Comparação das Cartas!\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) * 1 + (area1 <= area2) * 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) * 1 + (pib1 <= pib2) * 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (npt1 > npt2) * 1 + (npt1 <= npt2) * 2, npt1 > npt2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (denPopulacional1 < denPopulacional2) * 1 + (denPopulacional1 >= denPopulacional2) * 2, denPopulacional1 < denPopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) * 1 + (pibPerCapita1 <= pibPerCapita2) * 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) * 1 + (superPoder1 <= superPoder2) * 2, superPoder1 > superPoder2);

     

    return 0;

    
}
