#include <stdio.h>

int main() {
    int numeroNormal = 214748347; //Valor máximo de int
    long long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Núimero grande (long int): %lld\n", numeroGrande);

    numeroGrande = 2147483648; //Valor maior que o maximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);
            return 0;

}
