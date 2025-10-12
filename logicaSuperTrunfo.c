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

      // ======== MENU INTERATIVO DE COMPARAÇÃO ========
    int opcao;
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar (1 a 6): ");
    scanf("%d", &opcao);

    printf("\n--- COMPARACAO ENTRE %s E %s ---\n", cidade1, cidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area (km²)\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB (em reais)\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos_turisticos1);
            printf("%s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional (menor vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade_populacional2 < densidade_populacional1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", cidade1, pib_per_capita1);
            printf("%s: %.2f\n", cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("❌ Opcao invalida! Escolha um numero de 1 a 6.\n");
            break;
    }
   
    return 0;
}
  
