#include <stdio.h>

// Desafio Super Trunfo - Países - Nivel Mestre
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis da Carta 1
    char estado1[4];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidadePopul1;
    float pibCap1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2[4];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidadePopul2;
    float pibCap2;
    float superPoder2;

    // Variavel de Controle
    int resultado;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n\n");
    printf("Estado (letra de A a H): ");
    scanf("%s", estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1);

    densidadePopul1 = populacao1 / area1;
    pibCap1 = (pib1 * 1000000000 ) / populacao1;
    superPoder1 = (float)(populacao1 + area1 + pib1 + pibCap1 + turistico1 + (1 / densidadePopul1));

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n\n");
    printf("Estado (letra de A a H): ");
    scanf("%s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);

    densidadePopul2 = populacao2 / area2;
    pibCap2 = (pib2 * 1000000000 ) / populacao2;
    superPoder2 = (float)(populacao2 + area2 + pib2 + pibCap2 + turistico2 + (1 / densidadePopul2));

    // Exibição das Cartas

    printf("\n\nBatalha de Cartas\n\n");
    printf("Comparação de Cartas:\n");

    resultado = populacao2 > populacao1;
    printf("População: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    resultado = area2 > area1;
    printf("Área: Carta (%d) venceu (%d)\n", resultado+1, !resultado);
    
    resultado = pib2 > pib1;
    printf("PIB: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    resultado = turistico2 > turistico1;
    printf("Pontos Turisticos: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    resultado = densidadePopul2 < densidadePopul1;
    printf("Densidade Populacional: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    resultado = pibCap2 > pibCap1;
    printf("PIB per Capita: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    resultado = superPoder2 > superPoder1;
    printf("Super Poder: Carta (%d) venceu (%d)\n", resultado+1, !resultado);

    return 0;
}
