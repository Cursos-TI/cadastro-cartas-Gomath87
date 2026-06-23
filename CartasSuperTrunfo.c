#include <stdio.h>

int main() {
    // Área para definição das variáveis das propriedades das cidades
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

    // Variáveis de comparação fixa (Nível Mestre antigo)
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontos;
    int resultadoDensidade;
    int resultadoPibCapita;
    int resultadoSuperPoder;

    // --- NOVAS VARIÁVEIS PARA O MENU DUPLO E SOMA ---
    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1, soma_c2;

    // Área para entrada de dados (Carta 1)
    printf("Digite o nome do estado 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código do estado 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área 1: ");
    scanf("%f", &area1);
    printf("Digite o pib 1: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos 1: ");
    scanf("%d", &pontos_turisticos1);

    // Área para entrada de dados (Carta 2)
    printf("\nDigite o nome do estado 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código do estado 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área 2: ");
    scanf("%f", &area2);
    printf("Digite o pib 2: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos de Densidade, PIB per Capita e Super Poder
    float calculoDensidade1 = populacao1 / area1;
    float calculoDensidade2 = populacao2 / area2;

    float calculoPib1 = (float)(pib1 * 1000000000) / populacao1;
    float calculoPib2 = (float)(pib2 * 1000000000) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + calculoPib1 + (1.0f / calculoDensidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + calculoPib2 + (1.0f / calculoDensidade2);

    // Cálculos da batalha fixa
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontos = pontos_turisticos1 > pontos_turisticos2;
    resultadoDensidade = calculoDensidade1 < calculoDensidade2;
    resultadoPibCapita = calculoPib1 > calculoPib2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibição dos dados das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %lu | Área: %.2f km² | PIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n", pontos_turisticos1, calculoDensidade1, calculoPib1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %lu | Área: %.2f km² | PIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n", pontos_turisticos2, calculoDensidade2, calculoPib2);

    // === MENU INTERATIVO DINÂMICO ===
    printf("\n=== ESCOLHA O 1º ATRIBUTO ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // Menu Dinâmico: Esconde a primeira opção escolhida
    printf("\n=== ESCOLHA O 2º ATRIBUTO ===\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Validação de segurança de duplicata ou valores inválidos
    if (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
        printf("\n[Erro] Escolha inválida ou duplicada! Fim de jogo.\n");
        return 0;
    }

    // SWITCH 1: Extrai os valores do Atributo 1
    switch (opcao1) {
        case 1: valor1_c1 = (float)populacao1; valor1_c2 = (float)populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = (float)pontos_turisticos1; valor1_c2 = (float)pontos_turisticos2; break;
        case 5: valor1_c1 = calculoDensidade1; valor1_c2 = calculoDensidade2; break;
    }

    // SWITCH 2: Extrai os valores do Atributo 2
    switch (opcao2) {
        case 1: valor2_c1 = (float)populacao1; valor2_c2 = (float)populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = (float)pontos_turisticos1; valor2_c2 = (float)pontos_turisticos2; break;
        case 5: valor2_c1 = calculoDensidade1; valor2_c2 = calculoDensidade2; break;
    }

    // Cálculo da soma exigido no nível mestre
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    // === EXIBIÇÃO CLARA DOS RESULTADOS ===
    printf("\n=========================================\n");
    printf("       CONFRONTO FINAL: %s VS %s         \n", cidade1, cidade2);
    printf("=========================================\n");

    // Mostra Atributo 1 e seu vencedor individual via Operador Ternário
    printf("1º Atributo (Código %d):\n", opcao1);
    printf(" - %s: %.2f | %s: %.2f\n", cidade1, valor1_c1, cidade2, valor1_c2);
    printf("   Vencedor: ");
    if (opcao1 == 5) {
        (valor1_c1 < valor1_c2) ? printf("%s\n", cidade1) : ((valor1_c2 < valor1_c1) ? printf("%s\n", cidade2) : printf("Empate!\n"));
    } else {
        (valor1_c1 > valor1_c2) ? printf("%s\n", cidade1) : ((valor1_c2 > valor1_c1) ? printf("%s\n", cidade2) : printf("Empate!\n"));
    }

    // Mostra Atributo 2 e seu vencedor individual via Operador Ternário
    printf("\n2º Atributo (Código %d):\n", opcao2);
    printf(" - %s: %.2f | %s: %.2f\n", cidade1, valor2_c1, cidade2, valor2_c2);
    printf("   Vencedor: ");
    if (opcao2 == 5) {
        (valor2_c1 < valor2_c2) ? printf("%s\n", cidade1) : ((valor2_c2 < valor2_c1) ? printf("%s\n", cidade2) : printf("Empate!\n"));
    } else {
        (valor2_c1 > valor2_c2) ? printf("%s\n", cidade1) : ((valor2_c2 > valor2_c1) ? printf("%s\n", cidade2) : printf("Empate!\n"));
    }

    // Placar da Soma Total e Grande Vencedor via Operador Ternário Aninhado
    printf("-----------------------------------------\n");
    printf("SOMA TOTAL DOS ATRIBUTOS:\n");
    printf(" -> Pontos da %s: %.2f\n", cidade1, soma_c1);
    printf(" -> Pontos da %s: %.2f\n", cidade2, soma_c2);
    printf("\nRESULTADO DA RODADA: ");
    
    (soma_c1 > soma_c2) ? printf("%s VENCEU O CONFRONTO!\n", cidade1) : 
    (soma_c2 > soma_c1) ? printf("%s VENCEU O CONFRONTO!\n", cidade2) : 
    printf("EMPATE NA RODADA!\n");
    
    printf("=========================================\n");

    return 0;
}