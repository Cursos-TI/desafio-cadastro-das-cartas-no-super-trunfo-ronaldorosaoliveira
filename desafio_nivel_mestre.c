#include <stdio.h>
 
int main() {

    // Variáveis da Carta 1    
    char estado1;
    char codigodacarta1[4];
    char cidade1[10];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapta1;
    float superpoder1 = populacao1 +area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapta1;
    
   
    // Variáveis da Carta 2    
    char estado2;
    char codigodacarta2[4];
    char cidade2[10];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapta2;
    float superpoder2 = populacao2 +area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapta2;


    // Cadastro da Carta 1
    printf("-=-=-=-=-=Carta 1-=-=-=-=-=\n");
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


    // Cálculos da Carta 1
    superpoder1 = populacao1 +area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapta1;
    densidade1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    
    // Cadastro da Carta 2
    printf("-=-=-=-=-=Carta 2-=-=-=-=-=\n");
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

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;
    superpoder2 = populacao2 +area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapta2;


    // Mostrando os valores da carta 1
    printf("\n-=-=-=-=-=Carta 1-=-=-=-=-=\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("A densidade populacional é: %.f\n", densidade1);
    printf("O pib per capta é : %.6f\n", pibpercapta1);
    printf("Super Poder: %f\n\n", superpoder1);

   
    // Mostrando os valores da carta 2
    printf("-=-=-=-=-=Carta 2-=-=-=-=-=\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("A densidade populacional é: %.f\n", densidade2);
    printf("O pib per capta é : %.6f\n", pibpercapta2);
    printf("Super Poder: %f\n", superpoder2);

    
    // Comparando as cartas
    
    printf("\n-=-=-=-=-=Comparação de Cartas: -=-=-=-=-=\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);


    return 0;

}