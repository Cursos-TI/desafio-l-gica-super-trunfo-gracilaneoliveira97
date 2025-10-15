#include <stdio.h>

int main() {

    // ======== CARTA 1 ========
    char estado1, codigo_carta1[4], cidade1[10];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    // ======== CARTA 2 ========
    char estado2, codigo_carta2[4], cidade2[10];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // ======== Cadastro da Carta 1 ========
    printf("\n--- CARTA 1 ---\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf(" %lu", &populacao1);

    printf("Area (km²): ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Cálculos carta 1!
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // ======== Cadastro da Carta 2 ========
    printf("\n--- CARTA 2 ---\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area (km²): ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculos carta 2!
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ======== Exibição das Cartas ========
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

      // ======== MENU INTERATIVO DE COMPARAÇÃO com dois atributos ========
    int atributo1, atributo2;

    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o Primeiro atributo para comparar (1 a 6): ");
    scanf("%d", &atributo1);

    //MENU DINAMICO (SEM REPETIR O PRIMEIRO ATRIBUTO)
    printf("\nEscolha o Segundo atributo(diferente do primeiro):\n");
      for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Populacional (menor vence)\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    scanf("%d", &atributo2);


 // ======== OBTENDO OS VALORES ========
    float valorA1_c1, valorA1_c2, valorA2_c1, valorA2_c2;

    switch (atributo1) {
        case 1: valorA1_c1 = populacao1; valorA1_c2 = populacao2; break;
        case 2: valorA1_c1 = area1; valorA1_c2 = area2; break;
        case 3: valorA1_c1 = pib1; valorA1_c2 = pib2; break;
        case 4: valorA1_c1 = pontos_turisticos1; valorA1_c2 = pontos_turisticos2; break;
        case 5: valorA1_c1 = densidade_populacional1; valorA1_c2 = densidade_populacional2; break;
        case 6: valorA1_c1 = pib_per_capita1; valorA1_c2 = pib_per_capita2; break;
        default: valorA1_c1 = valorA1_c2 = 0;
    }

    switch (atributo2) {
        case 1: valorA2_c1 = populacao1; valorA2_c2 = populacao2; break;
        case 2: valorA2_c1 = area1; valorA2_c2 = area2; break;
        case 3: valorA2_c1 = pib1; valorA2_c2 = pib2; break;
        case 4: valorA2_c1 = pontos_turisticos1; valorA2_c2 = pontos_turisticos2; break;
        case 5: valorA2_c1 = densidade_populacional1; valorA2_c2 = densidade_populacional2; break;
        case 6: valorA2_c1 = pib_per_capita1; valorA2_c2 = pib_per_capita2; break;
        default: valorA2_c1 = valorA2_c2 = 0;
    }

    // ======== COMPARAÇÃO ========
    float soma1 = valorA1_c1 + valorA2_c1;
    float soma2 = valorA1_c2 + valorA2_c2;

    int pontos_c1 = 0, pontos_c2 = 0;

    // Comparação 1
    (atributo1 == 5)
        ? (valorA1_c1 < valorA1_c2 ? pontos_c1++ : pontos_c2++)
        : (valorA1_c1 > valorA1_c2 ? pontos_c1++ : pontos_c2++);

    // Comparação 2
    (atributo2 == 5)
        ? (valorA2_c1 < valorA2_c2 ? pontos_c1++ : pontos_c2++)
        : (valorA2_c1 > valorA2_c2 ? pontos_c1++ : pontos_c2++);

    // ======== RESULTADO FINAL ========
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Comparando %s e %s\n", cidade1, cidade2);
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);

    printf("\n%s -> %.2f + %.2f = %.2f\n", cidade1, valorA1_c1, valorA2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", cidade2, valorA1_c2, valorA2_c2, soma2);

    if (soma1 > soma2)
        printf("\n VENCEDORA: %s!\n", cidade1);
    else if (soma2 > soma1)
        printf("\n VENCEDORA: %s!\n", cidade2);
    else
        printf("\n Empate!\n");

           
    return 0;
}
  
