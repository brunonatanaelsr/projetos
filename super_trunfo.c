#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, PIB1;
    int pontos_turisticos1;
    float dencidade_populacional1;
    float pib_per_capita1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, PIB2;
    int pontos_turisticos2;
    float dencidade_populacional2;
    float pib_per_capita2;

    // Entrada de dados para a primeira carta
    printf("Digite a letra do Estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta 1 (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf("%s", cidade1);
    
    printf("Digite a População da Cidade da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área da Cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Cidade da Carta 1 (em bilhões): ");
    scanf("%f", &PIB1);
    
    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 1: ");
    scanf("%d", &pontos_turisticos1);
    
    dencidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = PIB1 / populacao1;

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do Estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta 2 (Ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf("%s", cidade2);
    
    printf("Digite a População da Cidade da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área da Cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Cidade da Carta 2 (em bilhões): ");
    scanf("%f", &PIB2);
    
    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 2: ");
    scanf("%d", &pontos_turisticos2);
    
    dencidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = PIB2 / populacao2;
    
    

    // Exibição das informações cadastradas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.f2.\n", dencidade_populacional1);
    printf("PIB per Capita: %.f2.\n", pib_per_capita1);

    
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.f2.\n", dencidade_populacional2);
    printf("PIB per Capita: %.f2.\n", pib_per_capita2);

    return 0;
}