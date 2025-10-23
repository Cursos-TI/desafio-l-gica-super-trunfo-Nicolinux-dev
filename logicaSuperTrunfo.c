#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Configura a localidade para suportar caracteres especiais em português
    // ==============================
    // Cadastro da PRIMEIRA CARTA
    // ==============================
    printf("\nPrimeira Carta\n");

    // Declaração das variáveis da primeira carta
    char estado1[3];
    char codigo1[4];
    char nome_cidade1[121];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Coleta dos dados informados pelo usuário
    printf("Estado: ");
    scanf(" %2s", estado1);
    getchar();

    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em quilômetros quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Exibição final dos dados da primeira carta
    printf("\nCarta 1 - Dados Informados\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", numero_pontos_turisticos1);

    // Cálculo das métricas derivadas
    densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional1);
    pib_per_capita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + numero_pontos_turisticos1;
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=============================\n");

    // ==============================
    // Cadastro da SEGUNDA CARTA
    // ==============================
    printf("\nSegunda Carta\n");

    char estado2[3];
    char codigo2[4];
    char nome_cidade2[121];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("Estado: ");
    scanf(" %2s", estado2);
    getchar();

    printf("Código (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em quilômetros quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    printf("\nCarta 2 - Dados Informados:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", numero_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional2);
    pib_per_capita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + numero_pontos_turisticos2;
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n===========================================================\n");
    printf("Agora, vamos comparar as cartas. Prepare-se para a batalha!\n");
    printf("===========================================================\n");

    int choice1, choice2;

    // ====== Escolha do primeiro atributo ======
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Escolha: ");
    scanf("%d", &choice1);

    if (choice1 < 1 || choice1 > 5)
    {
        printf("Opção inválida! Encerrando o jogo.\n");
        return 0;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i == choice1)
            continue; 
        switch (i)
        {
        case 1:
            printf("1 - População\n");
            break;
        case 2:
            printf("2 - Área\n");
            break;
        case 3:
            printf("3 - PIB\n");
            break;
        case 4:
            printf("4 - Pontos turísticos\n");
            break;
        case 5:
            printf("5 - Densidade populacional\n");
            break;
        }
    }
    printf("Escolha: ");
    scanf("%d", &choice2);

    if (choice2 < 1 || choice2 > 5 || choice2 == choice1)
    {
        printf("Opção inválida! Encerrando o jogo.\n");
        return 0;
    }

    // ==============================
    // Comparação dos atributos
    // ==============================
    float val1_attr1, val2_attr1, val1_attr2, val2_attr2;

    // Atribuindo os valores conforme escolha
    switch(choice1){
        case 1: val1_attr1=populacao1; val2_attr1=populacao2; break;
        case 2: val1_attr1=area1; val2_attr1=area2; break;
        case 3: val1_attr1=pib1; val2_attr1=pib2; break;
        case 4: val1_attr1=numero_pontos_turisticos1; val2_attr1=numero_pontos_turisticos2; break;
        case 5: val1_attr1=densidade_populacional1; val2_attr1=densidade_populacional2; break;
    }

    switch(choice2){
        case 1: val1_attr2=populacao1; val2_attr2=populacao2; break;
        case 2: val1_attr2=area1; val2_attr2=area2; break;
        case 3: val1_attr2=pib1; val2_attr2=pib2; break;
        case 4: val1_attr2=numero_pontos_turisticos1; val2_attr2=numero_pontos_turisticos2; break;
        case 5: val1_attr2=densidade_populacional1; val2_attr2=densidade_populacional2; break;
    }

    // Resultado individual por atributo
    int res1 = (choice1==5) ? (val1_attr1 < val2_attr1) : (val1_attr1 > val2_attr1);
    int res2 = (choice2==5) ? (val1_attr2 < val2_attr2) : (val1_attr2 > val2_attr2);

    printf("\nResultados individuais:\n");
    printf("Atributo 1: %.2f vs %.2f -> %s vence\n", val1_attr1, val2_attr1, res1? nome_cidade1:nome_cidade2);
    printf("Atributo 2: %.2f vs %.2f -> %s vence\n", val1_attr2, val2_attr2, res2? nome_cidade1:nome_cidade2);

    // Soma dos atributos escolhidos
    float soma1 = val1_attr1 + val1_attr2;
    float soma2 = val2_attr1 + val2_attr2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n", nome_cidade1, soma1, nome_cidade2, soma2);

    if(soma1 > soma2) printf("\n%s venceu a rodada!\n", nome_cidade1);
    else if(soma2 > soma1) printf("\n%s venceu a rodada!\n", nome_cidade2);
    else printf("\nEmpate!\n");

   
    printf("\n=============================\n");

    return 0;
}