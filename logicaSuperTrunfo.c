#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoA[50], estadoB[50];
    char codigoA[10], codigoB[10];
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;

    // Cadastro das Cartas:
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estadoA);
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área: ");
    scanf("%f", &areaA);
    printf("Digite o PIB: ");
    scanf("%f", &pibA);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estadoB);
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área: ");
    scanf("%f", &areaB);
    printf("Digite o PIB: ");
    scanf("%f", &pibB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Comparação de Cartas:
    // Atributo escolhido para comparação
    char atributo[] = "populacao";
    float valorA, valorB;

    if (strcmp(atributo, "populacao") == 0) {
        valorA = populacaoA;
        valorB = populacaoB;
    } else if (strcmp(atributo, "area") == 0) {
        valorA = areaA;
        valorB = areaB;
    } else if (strcmp(atributo, "pib") == 0) {
        valorA = pibA;
        valorB = pibB;
    } else {
        printf("Atributo inválido!\n");
        return 1;
    }

    // Exibição dos Resultados:
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);
    printf("Carta 1 - %s (%s): %.2f\n", nomeA, estadoA, valorA);
    printf("Carta 2 - %s (%s): %.2f\n", nomeB, estadoB, valorB);
    
    if (valorA > valorB) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeA);
    } else if (valorA == valorB) {
        printf("\nResultado: Empate!\n");
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeB);
    }

    return 0;
}