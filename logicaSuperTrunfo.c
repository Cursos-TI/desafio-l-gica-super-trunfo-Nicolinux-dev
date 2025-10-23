#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Configura a localidade para suportar caracteres especiais em português

    // ==============================
    // Título e introdução do jogo
    // ==============================
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nBem-vindo ao jogo Super Trunfo!\n");
    printf("Para começar, preencha todos os dados solicitados para criar suas cartas.\n");

    // Apresenta os atributos que cada carta deve ter
    printf("\nCada carta terá os seguintes atributos:\n");
    printf("   - Estado (Sigla)\n");
    printf("   - Código (1 letra de A a H + 2 números de 01 a 04) - ex: A01\n");
    printf("   - Nome da cidade\n");
    printf("   - População\n");
    printf("   - Área (em quilômetros quadrados)\n");
    printf("   - PIB (em bilhões de reais)\n");
    printf("   - Número de pontos turísticos\n");

    // Exemplo ilustrativo para orientar o usuário
    printf(
        "\nExemplo de preenchimento de carta:\n"
        "-----------------------------------\n"
        "Estado: CE\n"
        "Código: C01\n"
        "Nome da cidade: Fortaleza\n"
        "População: 180000\n"
        "Área: 155.00 \n"
        "PIB: 3.25\n"
        "Número de pontos turísticos: 5\n"
        "O valor do PIB per capita, Densidade populacional e o Super Poder serão calculados automaticamente!\n"
        "-----------------------------------\n"
        "Pronto! Agora é só jogar!\n");

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

    int choice;
    printf("\nEscolha o atributo para comparar!\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Escolha: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nComparando a população:\n");
        printf("%s: %lu habitantes\n", nome_cidade1, populacao1);
        printf("%s: %lu habitantes\n", nome_cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedor: %s com %lu habitantes!\n", nome_cidade1, populacao1);
        else if (populacao1 < populacao2)
            printf("Vencedor: %s com %lu habitantes!\n", nome_cidade2, populacao2);
        else
            printf("Empate! Ambas as cidades têm %lu habitantes.\n", populacao1);
        break;

    case 2:
        printf("\nComparando a área:\n");
        printf("%s: %.2f km²\n", nome_cidade1, area1);
        printf("%s: %.2f km²\n", nome_cidade2, area2);
        if (area1 > area2)
            printf("Vencedor: %s com %.2f km²!\n", nome_cidade1, area1);
        else if (area1 < area2)
            printf("Vencedor: %s com %.2f km²!\n", nome_cidade2, area2);
        else
            printf("Empate! Ambas as cidades têm %.2f km².\n", area1);
        break;

    case 3:
        printf("\nComparando o PIB:\n");
        printf("%s: %.2f bilhões de reais\n", nome_cidade1, pib1);
        printf("%s: %.2f bilhões de reais\n", nome_cidade2, pib2);
        if (pib1 > pib2)
            printf("Vencedor: %s com %.2f bilhões de reais!\n", nome_cidade1, pib1);
        else if (pib1 < pib2)
            printf("Vencedor: %s com %.2f bilhões de reais!\n", nome_cidade2, pib2);
        else
            printf("Empate! Ambas as cidades têm %.2f bilhões de reais.\n", pib1);
        break;

    case 4:
        printf("\nComparando os pontos turísticos:\n");
        printf("%s: %d\n", nome_cidade1, numero_pontos_turisticos1);
        printf("%s: %d\n", nome_cidade2, numero_pontos_turisticos2);
        if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
            printf("Vencedor: %s com %d pontos turísticos!\n", nome_cidade1, numero_pontos_turisticos1);
        else if (numero_pontos_turisticos1 < numero_pontos_turisticos2)
            printf("Vencedor: %s com %d pontos turísticos!\n", nome_cidade2, numero_pontos_turisticos2);
        else
            printf("Empate! Ambas as cidades têm %d pontos turísticos.\n", numero_pontos_turisticos1);
        break;

    case 5:
        printf("\nComparando a densidade populacional:\n");
        printf("%s: %.2f habitantes por km²\n", nome_cidade1, densidade_populacional1);
        printf("%s: %.2f habitantes por km²\n", nome_cidade2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
            printf("Vencedor: %s com %.2f habitantes por km²!\n", nome_cidade1, densidade_populacional1);
        else if (densidade_populacional1 > densidade_populacional2)
            printf("Vencedor: %s com %.2f habitantes por km²!\n", nome_cidade2, densidade_populacional2);
        else
            printf("Empate! Ambas as cidades têm %.2f habitantes por km².\n", densidade_populacional1);
        break;

    default:
        printf("Opção inválida!");
        break;
    }

    printf("\n=============================\n");

    return 0;
}
