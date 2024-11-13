#include <stdio.h>
#include <string.h> // Para usar a função strlen


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    char estado;
    char codigo_carta[20];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    printf("Digite o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    getchar(); // Consome o caractere de nova linha deixado pelo scanf
    fgets(nome_cidade, sizeof(nome_cidade), stdin); //fgets: ler strings com espaço

    // Remove a nova linha do final da string, se presente
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico);

    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico);

    return 0;
}