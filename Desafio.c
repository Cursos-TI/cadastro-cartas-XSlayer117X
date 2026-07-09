#include <stdio.h>

int main() {
    printf("Carta 1\n");
    int populacao = 12325000;
    int PontosTuristicos = 50;
    float area = 1521.11;
    float PIB = 699.28 * 1000000000.0;
    char estado[04] = "BH"; 
    char codigo[05] = "A01";
    char cidade[25] = "Salvador";
    //float divisao;
    float PIBpercapita = 56736.71;
    float densidadeDemografica = 8102.64;
    

    densidadeDemografica = (float)populacao / area;
    printf("Densidade demográfica: %.2f hab/KM²\n", densidadeDemografica);

    PIBpercapita = PIB / populacao;
    printf("PIB per capita: %.2f\n", PIBpercapita);

    printf("Estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populaçao: %d\n", populacao);
    printf("Área: %.2fKM²\n", area);
    printf("PIB: %.2f Bilhões\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    printf("\nCarta 2\n");
    int Populacao = 12325000;
    int Pontosturisticos = 50;
    float Area = 1521.11;
    float Pib = 699.28 * 1000000000.0;
    char Estado[04] = "SP"; 
    char Codigo[05] = "A01";
    char Cidade[25] = "Serrana";
    //float divisao;
    float PIBPercapita;
    float DensidadeDemografica;
    

    DensidadeDemografica = (float)populacao / area;
    printf("Densidade demográfica: %.2f hab/KM²\n", DensidadeDemografica);

    PIBPercapita = Pib / populacao;
    printf("PIB per capita: %.2f\n", PIBPercapita);

    printf("Estado: %s\n", Estado);
    printf("codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populaçao: %d\n", Populacao);
    printf("Área: %.2fKM²\n", Area);
    printf("PIB: %.2f Bilhões\n", Pib);
    printf("Pontos Turisticos: %d\n", Pontosturisticos);


}