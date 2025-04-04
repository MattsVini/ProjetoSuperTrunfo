#include <stdio.h>



int main() {
    // Criando as variávies, para os atributos das cartas
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];

    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    int comparar = 2; 
    int opcao;

    float area1, area2;
    float PIB1, PIB2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;

    //O usuário precisa inserir os dados para fornecer atributos para a primeira carta.
    printf("Digite o estado do país da primeira carta: \n");
    scanf("%s", estado1);

    printf("\nDigite o código: \n");
    scanf("%s", codigo1);

    printf("\nDigite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("\nDigite a quantidade de habitantes na cidade: \n");
    scanf("%lu", &populacao1);

    printf("\nDigite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("\nDigite o PIB da cidade(em bilhões): \n");
    scanf("%f", &PIB1);

    printf("\nDigite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%d", &pontos_turisticos1);

    //Cálculo da desindade populacional da primeira carta.
    densidade_populacional1 = populacao1 / area1;
    
    //Cálculo do PIB per capita.
    PIB_per_capita1 = (PIB1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + (area1 / populacao1);
    //A saída de dados da primeira carta.
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n\n", PIB_per_capita1);
   ////////////////////////////////////////////////////////////////////

    //O usuário precisa inserir os dados para fornecer atributos para a segunda carta.
    printf("Digite o estado do país da segunda carta: \n");
    scanf(" %s", estado2);

    printf("\nDigite o código: \n");
    scanf("%s", codigo2);

    printf("\nDigite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("\nDigite a quantidade de habitantes na cidade: \n");
    scanf("%lu", &populacao2);

    printf("\nDigite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade(em bilhões): \n");
    scanf("%f", &PIB2);

    printf("\nDigite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%d", &pontos_turisticos2);

    //Calculo para a densidade populacional da segunda carta.
    densidade_populacional2 = populacao2 / area2;

    //Cálculo do PIB per capita.
    PIB_per_capita2 = (PIB2 * 1000000000) / populacao2;

    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (area2 / populacao2);
    //A saída de dados da segunda carta
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n\n", PIB_per_capita2);
    /////////////////////////////////////////////////////////////

    //comparação dos atributos sem a utilização da lógica da estrutura de decisão.
/*    int compar_populacao = populacao1 > populacao2;
    int compar_area = (int) area1 > area2;
    int compar_PIB = (int) PIB1 > PIB2;
    int compar_pt = pontos_turisticos1 > pontos_turisticos2;
    int compar_dp = (int) densidade_populacional1 < densidade_populacional2;
    int compar_PIB_per_capita = PIB_per_capita1 > PIB_per_capita2;
    int compar_super_poder = (int) super_poder1 > super_poder2;
*/
    //comparação das cartas sem a lógica de estrutura de decisão
   /* printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", comparar - compar_populacao, compar_populacao);
    printf("Área: Carta %d venceu (%d)\n", comparar - compar_area, compar_area);
    printf("PIB: Carta %d venceu (%d)\n", comparar - compar_PIB, compar_PIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comparar - compar_pt, compar_pt);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comparar - compar_dp, compar_dp);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comparar - compar_PIB_per_capita, compar_PIB_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n\n", comparar - compar_super_poder, compar_super_poder);
*/
    //O menu para comparação de um atributo entre duas cartas usando switch-case
    printf("*** Escolha qual atributo que você quer comparar ***\n");
    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");

    switch (opcao)
    {
    case 1:
        printf("Nome das cartas:\n");
        printf("Carta 1: %s, Carta 2: %s\n", nome_cidade1, nome_cidade2);
        break;
    case 2:
        print("População:\n");
        printf("Carta 1: %d  vs  Carta 2: %d\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 venceu!");
        } else if (populacao1 == populacao2){
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }
        break;
    case 3:
        print("Área:\n");
        printf("Carta 1: %d  vs  Carta 2: %d\n", area1, area2);
        if (area1 > area2){
                printf("Carta 1 venceu!\n");
            } else if (area1 == area2){
                printf("Empate!");
            } else{
                printf("Carta 2 venceu!\n");
            }    
            break;
    case 4:
        print("PIB:\n");
        printf("Carta 1: %.2f  vs  Carta 2: %.2f", PIB1, PIB2);
        if (PIB1 > PIB2){
            printf("Carta 1 venceu!\n");
        } else if (pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!");
        } else{
            printf("Carta 2 venceu!\n");
        }
        break;
    case 5:
        print("Número de pontos turísticos:\n");
        printf("Carta 1: %d  vs  Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Carta 1 venceu!\n");
        } else if (pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!");
        } else{
            printf("Carta 2 venceu!\n");
        }
        break;
    case 6:
        print("Densidade demográfica:\n");
        printf("Carta 1: %.2f  vs  Carta 2: %.2f", densidade_populacional1, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2){
            printf("Carta 1 venceu!\n");
        } else if (densidade_populacional1 == densidade_populacional2){
            printf("Empate!");
        } else{
            printf("Carta 2 venceu!\n");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }
    return 0;
}
