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

    // ======== COMPARAÇÃO ========
    // Atributo para comparar "Pib_per_capital"

    printf("\n--- COMPARACAO DE CARTAS (Atributo: PIB per capita) ---\n");

    // Variáveis de comparação
    float valor1 = pib_per_capita1;
    float valor2 = pib_per_capita2;

    // Exibir valores comparados
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, valor2);

    // Comparação com if e if-else
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  
