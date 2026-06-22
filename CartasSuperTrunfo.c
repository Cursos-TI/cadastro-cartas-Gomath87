#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados
  printf("Digite o nome do estado 1: ");
  scanf(" %c", &estado1);
  printf("Digite o código do estado 1: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade 1: ");
  scanf(" %[^\n]", cidade1);
  printf("Digite a população 1: ");
  scanf("%d", &populacao1);
  printf("Digite a área 1: ");
  scanf("%f",&area1);
  printf("Digite o pib 1: ");
  scanf("%f",&pib1);
  printf("Digite a quantidade de pontos turísticos 1: ");
  scanf("%d", &pontos_turisticos1);

  printf("Digite o nome do estado 2: ");
  scanf(" %c", &estado2);
  printf("Digite o código do estado 2: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade 2: ");
  scanf(" %[^\n]", cidade2);
  printf("Digite a população 2: ");
  scanf("%d", &populacao2);
  printf("Digite a área 2: ");
  scanf("%f",&area2);
  printf("Digite o pib 2: ");
  scanf("%f",&pib2);
  printf("Digite a quantidade de pontos turísticos 2: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Nome da Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2f km²\n ",area1);
  printf("PIB: %.2f bilhões de reais\n ",pib1);
  printf("Números de Pontos Turísticos: %d\n",pontos_turisticos1);
  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Nome da Cidade: %s\n",cidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2f km² \n ",area2);
  printf("PIB: %.2f bilhões de reais \n ",pib2);
  printf("Números de Pontos Turísticos: %d\n",pontos_turisticos2);

return 0;
} 
