#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[5];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  char estado2;
  char codigo2[5];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPib;
  int resultadoPontos;
  int resultadoDensidade;
  int resultadoPibCapita;
  int resultadoSuperPoder;

  // Área para entrada de dados
  printf("Digite o nome do estado 1: ");
  scanf(" %c", &estado1);
  printf("Digite o código do estado 1: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade 1: ");
  scanf(" %[^\n]", cidade1);
  printf("Digite a população 1: ");
  scanf("%lu", &populacao1);
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
  scanf("%lu", &populacao2);
  printf("Digite a área 2: ");
  scanf("%f",&area2);
  printf("Digite o pib 2: ");
  scanf("%f",&pib2);
  printf("Digite a quantidade de pontos turísticos 2: ");
  scanf("%d", &pontos_turisticos2);

  // Calculos (densidade populacional, pib ...)

  float calculoDensidade1 = populacao1 / area1;
  float calculoDensidade2 = populacao2 / area2;

  float calculoPib1 = (float)(pib1 * 1000000000) / populacao1;
  float calculoPib2 = (float)(pib2 * 1000000000) / populacao2;

  // O (float) antes das variáveis garante que a conversão de tipo ocorra certinha na soma
  float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + calculoPib1 + (1.0f / calculoDensidade1);
  float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + calculoPib2 + (1.0f / calculoDensidade2);

  // Calculo da batalha
  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPib = pib1 > pib2;
  resultadoPontos = pontos_turisticos1 > pontos_turisticos2;
  resultadoDensidade = calculoDensidade1 < calculoDensidade2;
  resultadoPibCapita = calculoPib1 > calculoPib2;
  resultadoSuperPoder= superPoder1 > superPoder2;
  // Área para exibição dos dados da cidade



  printf("Carta 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Nome da Cidade: %s\n",cidade1);
  printf("População: %lu\n",populacao1);
  printf("Área: %.2f km²\n ",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidade1);
  printf("PIB per Capita: %.2f reais\n", calculoPib1);


  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Nome da Cidade: %s\n",cidade2);
  printf("População: %lu\n",populacao2);
  printf("Área: %.2f km² \n ",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de Pontos Turísticos: %d\n",pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidade2);
  printf("PIB per Capita: %.2f reais\n", calculoPib2);
  printf("\n");

  printf("\nComparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibCapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);
  printf("\n");
  
  if (populacao1 > populacao2) {
      // Se a condição acima for verdadeira, executa essa linha
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  } 
  else if (populacao2 > populacao1) {
      // Se a primeira for falsa, testa essa. Se for verdadeira, executa essa linha
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
  } 
  else {
      // Se nenhuma das duas acima for verdadeira (ou seja, são iguais)
      printf("Resultado: Empate!\n");
  }

return 0;
} 