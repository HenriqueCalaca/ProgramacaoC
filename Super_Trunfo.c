#include <stdio.h>

int main () {

/* Declarando Tipo de Variaveis */
    char c1_estado, c2_estado;
    char c1_codigo_carta[3], c2_codigo_carta[3];
    char c1_nome_cidade[20], c2_nome_cidade[20];
    int c1_populacao, c2_populacao;
    float c1_area, c2_area;
    float c1_pib, c2_pib;;
    int c1_qtd_pontos_turisticos, c2_qtd_pontos_turisticos;

/* Recebendo dados do Usuário */

    /*  Carta 1 */
    printf("Bem vindo ao jogo, nesse primeiro momento você vai cadastrar duas cartas \n");
    printf("e suas respectivas caractristicas de acordo com a descrição! \n");

    printf("Insira os dados da primeira carta abaixo! \n");

    printf("Escolha uma letra de A a H para representar sua primeira carta \n");
    scanf(" %c", &c1_estado);

    printf("Insira a letra escolhida (%c) e escolha um numero de 01 a 04 para criar o codigo da sua carta \n", c1_estado);
    scanf("%s", c1_codigo_carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", c1_nome_cidade);

    printf("Agora informe qual a população da cidade %s \n", c1_nome_cidade);
    scanf("%d", &c1_populacao);

    printf("Iforme a Area (em Km) da cidade %s \n", c1_nome_cidade);
    scanf("%f", &c1_area);

    printf("Qual o PIB da cidade %s ? \n", c1_nome_cidade);
    scanf("%f", &c1_pib);

    printf("Quantos pontos turisticos possuem a cidade %s ? \n", c1_nome_cidade);
    scanf("%d", &c1_qtd_pontos_turisticos);

    printf("Perfeito, agora vamos inserir os dados da segunda carta! \n");

    /*  Carta 2  */
    printf("Escolha uma letra de A a H para representar sua segunda carta \n");
    scanf(" %c", &c2_estado);

    printf("Insira a letra escolhida (%c) e escolha um numero de 01 a 04 para criar o codigo da sua carta \n", c2_estado);
    scanf("%s", c2_codigo_carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", c2_nome_cidade);

    printf("Agora informe qual a população da cidade %s \n", c2_nome_cidade);
    scanf("%d", &c2_populacao);

    printf("Iforme a Area (em Km) da cidade %s \n", c2_nome_cidade);
    scanf("%f", &c2_area);

    printf("Qual o PIB da cidade %s ? \n", c2_nome_cidade);
    scanf("%f", &c2_pib);

    printf("Quantos pontos turisticos possuem a cidade %s ? \n", c2_nome_cidade);
    scanf("%d", &c2_qtd_pontos_turisticos);

    /* Imprimindo dados das cartas*/

    /* Carta 1*/
    printf("Carta 1: \n");
    printf("Estado: %c\n", c1_estado);
    printf("Codigo: %s\n", c1_codigo_carta);
    printf("Nome da Cidade: %s\n", c1_nome_cidade);
    printf("População: %d\n", c1_populacao);
    printf("Área: %.2f\n", c1_area);
    printf("PIB %.2f\n", c1_pib);
    printf("Número de Pontos Turísticos: %d\n", c1_qtd_pontos_turisticos);

    printf("----------------------------------------------- \n");
    printf("----------------------------------------------- \n");

    /* Carta 2*/
    printf("Carta 2: \n");
    printf("Estado: %c\n", c2_estado);
    printf("Codigo: %s\n", c2_codigo_carta);
    printf("Nome da Cidade: %s\n", c2_nome_cidade);
    printf("População: %d\n", c2_populacao);
    printf("Área: %.2f\n", c2_area);
    printf("PIB %.2f\n", c2_pib);
    printf("Número de Pontos Turísticos: %d\n", c2_qtd_pontos_turisticos);

}
