#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

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
  scanf("%d", &populacao1);

  printf("Digite a área (em km2): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

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
  scanf("%d", &populacao2);

  printf("Digite a área (em km2): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf(" Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);


  //==============================
  // Exibição dos dados
  //==============================

  printf("\n==== Carta 1====\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km2\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\n==== Carta 2=====\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf(" Cidade: %d\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2f bilhôes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
} 
