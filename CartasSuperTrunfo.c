#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Vamos cadastrar carta!\n");

    char codigo_carta[4]; // código da carta. Ex.: A01
    printf("Digite o código da carta. Ex.: A01\n");
    scanf("%3s", &codigo_carta);

    char pais[50]; // país da carta, com limite de 50 caracteres.
    printf("Digite o país da carta. OBS: limite de 50 caracteres.\n");
    scanf("%s", &pais);
    
    char estado[50]; // nome do estado da carta, com limite de 50 caracteres.
    printf("Digite o nome do estado da carta. OBS: limite de 50 caracteres.\n");
    scanf("%s", &estado);

    char cidade[50]; // nome da cidade da carta, com limite de 50 caracteres.
    printf("Digite o nome da cidade da carta. OBS: limite de 50 caracteres.\n");
    scanf("%50s", &cidade);

    printf("\nMuito bem! temos os dados da carta.\n\nCódigo: %s -- País: %s\nEstado: %s -- Cidade: %s\n", codigo_carta, pais, estado, cidade);

    printf("\nAgora vamos seguir com o cadastro dos demais dados da carta.\n");

    int populacao; // população da cidade da carta;
    printf("Digite a população da cidade.\n");
    scanf("%d", &populacao);

    float area; // área da cidade
    printf("Digite a área.\n");
    scanf("%f", &area);

    float pib; //pib da cidade
    printf("Digite o PIB da cidade.\n");
    scanf("%f",&pib);

    int pontos_turisticos; // numero de pontos turisticos na cidade
    printf("E por fim. Digite o quantidade de pontos turisticos da cidade.\n");
    scanf("%d", &pontos_turisticos);

    printf("E finalizamos o cadastro da carta! Confira abaixo os dados da carta e divirta-se!\n");
    printf("\nCódigo: %s -- País: %s\nEstado: %s -- Cidade: %s\n", codigo_carta, pais, estado, cidade);
    printf("População: %d -- Área: %.2fm²\nPIB: %.2f -- Pontos turísticos: %d\n", populacao, area, pib, pontos_turisticos);

    printf("\n\nBom jogo!");

    return 0;
}
