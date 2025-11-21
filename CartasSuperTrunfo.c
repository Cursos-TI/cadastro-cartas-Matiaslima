#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Variaveis da primeira carta
  char a_Estado[30], a_Codigo[30], a_Cidade[30];
  int a_Populacao, a_PontosTuristicos;
  float a_Area, a_PIB;

  // Variaveis da segunda carta
  char b_Estado[30], b_Codigo[30], b_Cidade[30];
  int b_Populacao, b_PontosTuristicos;
  float b_Area, b_PIB;

  // Área para entrada de dados
  printf("Vamos cadastrar sua primeira carta \n Digite o estado:\n");
  scanf("%s", &a_Estado);
  
  printf("\nDigite o codigo: \n");
  scanf("%s", &a_Codigo);

  printf("\nDigite a cidade:\n");
  scanf("%s", &a_Cidade);

  printf("\nDigite a população:\n");
  scanf("%d", &a_Populacao);

  printf("\nDigite a area:\n");
  scanf("%f", &a_Area);

  printf("\nDigite o PIB:\n");
  scanf("%f", &a_PIB);

  printf("\nDigite o numero de pontos turisticos:\n");
  scanf("%d", &a_PontosTuristicos);

  printf("\nVamos cadastrar sua segunda carta \n Digite o estado:\n");
  scanf("%s", &b_Estado);
  
  printf("\nDigite o codigo: \n");
  scanf("%s", &b_Codigo);

  printf("\nDigite a cidade:\n");
  scanf("%s", &b_Cidade);

  printf("\nDigite a população:\n");
  scanf("%d", &b_Populacao);

  printf("\nDigite a area:\n");
  scanf("%f", &b_Area);

  printf("\nDigite o PIB:\n");
  scanf("%f", &b_PIB);

  printf("\nDigite o numero de pontos turisticos:\n");
  scanf("%d", &b_PontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\nCarta 01:\nEstado: %s \nCodigo: %s \nCidade: %s \nPopulação: %d \nArea: %.2f \nPIB: %.2f \nPontos Turisticos: %d\n"
          , a_Estado, a_Codigo, a_Cidade, a_Populacao, a_Area, a_PIB, a_PontosTuristicos);
  printf("Carta 02:\nEstado: %s \nCodigo: %s \nCidade: %s \nPopulação: %d \nArea: %.2f \nPIB: %.2f \nPontos Turisticos: %d\n"
          , b_Estado, b_Codigo, b_Cidade, b_Populacao, b_Area, b_PIB, b_PontosTuristicos);
return 0;
} 
