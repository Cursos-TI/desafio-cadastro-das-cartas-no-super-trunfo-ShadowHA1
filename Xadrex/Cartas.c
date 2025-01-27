#include <stdio.h>

int main() {
    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    for (estado = 'A'; estado <= 'H'; estado++) {
        for (cidade = 1; cidade <= 4; cidade++) {
            printf("\nCadastro da cidade %c%02d:\n", estado, cidade);

            printf("Digite a população da cidade(sem ponto ou virgula): ");
            scanf("%d", &populacao);

            printf("Digite a area da cidade(sem ponto ou virgula): ");
            scanf("%f", &area);

            printf("Digite o pib da cidade(sem ponto ou virgula): ");
            scanf("%f", &pib);
            
            printf("Digite a quantidade de pontos turisticos(sem ponto ou virgula): ");
            scanf("%d", &pontos_turisticos);

            printf("\nDados cadastrados da cidade %c%02d:\n", estado, cidade);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km²\n", area);
            printf("PIB: %.2f milhões\n", pib);
            printf("Pontos turísticos: %d\n", pontos_turisticos);
        }
    }

    return 0;


}