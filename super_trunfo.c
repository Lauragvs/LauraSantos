#include <stdio.h>

int main() {
    // Dados da carta 1
    char estadoCarta1[10];
    char codigoCarta1[5];
    char cidadeCarta1[20];
    int populacaoCarta1;
    int pontosTuristicosCarta1;
    float areaCarta1;
    float pibCarta1;

    // Dados da carta 2
    char estadoCarta2[10];
    char codigoCarta2[5];
    char cidadeCarta2[20];
    int populacaoCarta2;
    int pontosTuristicosCarta2;
    float areaCarta2;
    float pibCarta2;

    // Entrada dos dados da carta 1
    printf("Digite um Estado para a carta 1: ");
    scanf("%s", estadoCarta1);

    printf("Digite o código: ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeCarta1);

    printf("Digite o total de habitantes: ");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta1);

    // Entrada dos dados da carta 2
    printf("Digite um Estado para a carta 2: ");
    scanf("%s", estadoCarta2);

    printf("Digite o código: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeCarta2);

    printf("Digite o total de habitantes: ");
    scanf("%d", &populacaoCarta2);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    // Cálculo de densidade e PIB per capita
    float densidade1 = (float)populacaoCarta1 / areaCarta1;
    float densidade2 = (float)populacaoCarta2 / areaCarta2;
    float pibPerCapita1 = pibCarta1 / populacaoCarta1;
    float pibPerCapita2 = pibCarta2 / populacaoCarta2;

    // Mostrando as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", cidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f bilhões\n", pibCarta1);
    printf("Pontos Turísticos: %d\n", pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões/hab\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões\n", pibCarta2);
    printf("Pontos Turísticos: %d\n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões/hab\n", pibPerCapita2);

    // Comparações
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    printf("\nComparação de Cartas:\n");

    // População
    if (populacaoCarta1 > populacaoCarta2) {
        printf("População: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("População: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // Área
    if (areaCarta1 > areaCarta2) {
        printf("Área: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("Área: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // PIB
    if (pibCarta1 > pibCarta2) {
        printf("PIB: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // Pontos turísticos
    if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // Densidade Populacional
    if (densidade1 > densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
        pontosCarta1++;
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
        pontosCarta2++;
    }

    // Super poder: quem ganhou mais categorias
    printf("Super Poder: Carta %d venceu (%d)\n", (pontosCarta1 > pontosCarta2) ? 1 : 2, (pontosCarta1 > pontosCarta2) ? pontosCarta1 : pontosCarta2);

    return 0;
}
