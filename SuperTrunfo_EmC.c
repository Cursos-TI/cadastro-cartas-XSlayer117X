#include <stdio.h>

int main() { 
    printf("Carta 01\n");
    int populacao = 12325000;
    int PontosTuristicos = 50;
    float Area = 1521.11;
    float PIB = 699.28; 
    char estado[3] = "Ce";
    char Codigo[04] = "A01";
    char cidade[20] = "Fortaleza";
    
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", Codigo);
    printf("cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Area: %.2fKM²\n", Area);
    printf("PIB: %.2f Bilhões\n", PIB);



    printf("\nCarta 02\n");
    int populacao2 = 14325000;
    int PontosTuristicos2 = 60; 
    float area2 = 1521.12;
    float PIB2 = 799.28;
    char estado2[3] = "SP";
    char codigo2 [04] = "B03";
    char cidade2[20] = "Serrana";

    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Area: %.2fKM²\n", area2);
    printf("PIB: %.2f Bilhões\n", PIB2);

    return 0;
}

