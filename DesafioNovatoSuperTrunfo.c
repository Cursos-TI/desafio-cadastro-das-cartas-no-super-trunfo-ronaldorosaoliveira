#include <stdio.h>
 
int main() {

    // Variáveis da Carta 1    
    char estado1;
    char codigodacarta1[4];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Variáveis da Carta 2    
    char estado2;
    char codigodacarta2[4];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Cadastro da Carta 1
    printf("Carta 1\n");
    printf("Digite o Estado (A a H): \n");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (EX: A01): \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o Nome da Cidade (Sem espaços): \n");
    scanf("%s", &cidade1);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Cadastro da Carta 2
    printf("Carta 2\n");
    printf("Digite o Estado (A a H): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (EX: A01): \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da Cidade (Sem espaços): \n");
    scanf("%s", &cidade2);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Mostrando os valores da carta 1
    printf("----Carta 1----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %f\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);

    // Mostrando os valores da carta 2
    printf("\n----Carta 2----\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    
    return 0;

}