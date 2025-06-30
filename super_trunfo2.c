#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[10], codigo1[5], cidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis da Carta 2
    char estado2[10], codigo2[5], cidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // ===== Cadastro da Carta 1 =====
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Cadastro da Carta 2 =====
    printf("\nDigite o estado da Carta 2: ");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos das métricas adicionais =====
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ===== Comparação =====
    // Aqui escolhemos o atributo a comparar: POPULAÇÃO
    printf("\n===== Comparação de Cartas (Atributo: População) =====\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Verificando quem venceu com base na população
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! As duas cartas têm a mesma população.\n");
    }

    // ===== Exibição opcional das métricas extras =====
    printf("\n===== Métricas Calculadas =====\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.6f bilhões/hab\n", densidade1, pibPerCapita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.6f bilhões/hab\n", densidade2, pibPerCapita2);

    return 0;
}
