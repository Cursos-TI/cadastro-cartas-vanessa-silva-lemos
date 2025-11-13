#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2;  //novas variáveis
  float pibPerCapita1, pibPerCapita2;  // novas variáveis
  float superPoder1, superPòder2;

  //============================
  //Entrada de Dados - Carta 1
  //============================

  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta(ex:A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade1); // Lê até o espaço

  printf("Digite a população: ");
  scanf("%lu", &populacao1);

  printf("Digite a área (em km2): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);


  //calcula os novos dados da carta 1
  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1; //converte bilões para reais
  superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);


  //============================
  //Entrada de dados - Carta 2
  //============================

  printf("\n=== Cadastro da carta 2 ===\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (ex: A02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a população: ");
  scanf("%lu", &populacao2);

  printf("Digite a área (em km2): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf(" Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);


  //Calcula os novos dados da carta 2
  densidade2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;
  superPòder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidade2);


  //==============================
  // Exibição dos dados
  //==============================

  printf("\n==== Carta 1====\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km2\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n==== Carta 2=====\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2f bilhôes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPòder2);
  
  // ===================================
  // Comparação das cartas
  // ===================================
  printf ("\n==== Resultado das Comparações ====\n");

  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPòder2);


return 0;
} 
