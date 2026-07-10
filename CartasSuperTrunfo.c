#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];

    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];

    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    // Entrada Carta 1
    printf("=== CARTA 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\n=== CARTA 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder1 = populacao1 +
                        area1 +
                        pib1 +
                        pontosTuristicos1 +
                        pibPerCapita1 +
                        (1 / densidade1);

    float superPoder2 = populacao2 +
                        area2 +
                        pib2 +
                        pontosTuristicos2 +
                        pibPerCapita2 +
                        (1 / densidade2);

    // Comparações
    printf("\n===== COMPARACAO =====\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2,
           pontosTuristicos1 > pontosTuristicos2);

    // Menor densidade vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (superPoder1 > superPoder2) ? 1 : 2,
           superPoder1 > superPoder2);

    return 0;
}