#include <stdio.h>
#include <string.h> // Para usar a função strlen


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    printf("****** Cadastro de Cartas - Super Trunfo ******\n");
    printf(" Cadastro da Carta 1 \n");
    printf("Digite o Estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade da primeira carta: \n");
    getchar(); // Consome o caractere de nova linha deixado pelo scanf
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //fgets: ler strings com espaço

    // Remove a nova linha do final da string, se presente
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Digite a população da primeira carta: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos da primeira carta: \n");
    scanf("%d", &ponto_turistico1);
    // Dados da carta 2
    
    printf("**** Cadastro da Carta 2 ****\n");
    printf("Digite o Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade segunda carta: \n");
    getchar(); // Consome o caractere de nova linha deixado pelo scanf
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //fgets: ler strings com espaço

    // Remove a nova linha do final da string, se presente
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    
    printf("Digite a população da segunda carta: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &ponto_turistico2);
    
    printf("#############################\n");
    printf("Dados da Carta 1\n");
    printf("############################\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    //Nível Aventureiro- operadores
    
    densidade_populacional1 = (float) populacao1 / area1;  //conversão explicita
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    
    pib_per_capita1 =  pib1 * 1000000000 / populacao1; // convresão do PIB em Bilhões para reais antes do calcul
    super_poder1 = (float)populacao1+area1+pib1+pib_per_capita1+densidade_populacional1+ponto_turistico1;
    printf("PIB per Capita: %.0f reais\n", pib_per_capita1); // %.0f: imprimir valor inteiro
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Super Poder:%.2f\n", super_poder1);
    printf("#############################\n");
    printf("Dados da Carta 2\n");
    printf("############################\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);

    densidade_populacional2 = (float) populacao2 / area2;  //conversão explicita
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    
    pib_per_capita2 =  pib2 * 1000000000 / populacao2; // convresão do PIB em Bilhões para reais antes do calcul
    super_poder2 = (float)populacao2+area2+pib2+pib_per_capita2+densidade_populacional2+ponto_turistico2;
    printf("PIB per Capita: %.0f reais\n", pib_per_capita2); // %.0f: imprimir valor inteiro
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Super Poder:%.2f\n", super_poder2);

    // Comparando as propriedades das cartas 1 e 2
    int pontos_carta1 = 0, pontos_carta2 = 0;

    printf("##########################\n");
    printf("COMPARADOR DE CARTAS\n");
    printf("##########################\n");
    printf("Se o resultado for: 0(falso) e se for 1(verdadeiro)\n");
    printf("COMPARANDO AS PROPRIEDADES ......\n");

    pontos_carta1 += (populacao1 > populacao2);
    pontos_carta2 += (populacao2 > populacao1); 
    printf("A Propiredade: POPULAÇÃO da Carta 1 > A Propriedade POPULAÇÃO da Carta 2 :%d\n", populacao1 > populacao2);
    
    pontos_carta1 += (area1 > area2);
    pontos_carta2 += (area2 > area1);
    printf("A Propriedade: ÁREA da Carta 1  > A Propriedade:ÁREA da carta 2 :%d\n", area1 > area2);
    
    pontos_carta1 += (pib1 > pib2);
    pontos_carta2 += (pib2 > pib1);
    printf("A Propriedade: PIB da Carta 1  > A Propriedade:PIB da carta 2 :%d\n", pib1 > pib2);
    
    pontos_carta1 += (ponto_turistico1 > ponto_turistico2);
    pontos_carta2 += (ponto_turistico2 > ponto_turistico1);
    printf("A Propriedade:PONTOS TURÍSTICOS da Carta 1  > A Propriedade:PONTOS TURÍSTICOS da carta 2 :%d\n", ponto_turistico1 > ponto_turistico2);
    
    pontos_carta1 += (densidade_populacional1 < densidade_populacional2);
    pontos_carta2 += (densidade_populacional2 < densidade_populacional1);
    printf("A Propriedade: DENSIDADE POPULACIONAL da Carta 1  > A Propriedade:DENSIDADE POPULACIONAL da carta 2 :%d\n", densidade_populacional1 > densidade_populacional2);
    
    pontos_carta1 += (pib_per_capita1 > pib_per_capita2);
    pontos_carta2 += (pib_per_capita2 > pib_per_capita1);
    printf("A Propriedade: PIB per capita da Carta 1 > A Propriedade:PIB per capita da carta 2: %d\n", pib_per_capita1 > pib_per_capita2);

    pontos_carta1 += (super_poder1 > super_poder2);
    pontos_carta2 += (super_poder2 > super_poder2);
    printf("A Propriedade: SUPER PODER da Carta 1 > A Propriedade SUPER PODER da Carta 2 :%d\n", super_poder1 > super_poder2);
    // Determinando o vencedor
    printf("##########################\n");
    printf("RESULTADO FINAL\n");
    printf("##########################\n");
    //Usa operador ternário para determinar o vencedor
    printf("%s\n", (pontos_carta1 > pontos_carta2) ? "A Carta 1 é a vencedora!" : (pontos_carta2 > pontos_carta1) ? "A Carta 2 é a vencedora!" : "Empate! Ambas as cartas têm o mesmo número de pontos.");

    return 0;

}
