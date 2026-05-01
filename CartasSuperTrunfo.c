#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades

 // Carta 1
 
 char estado1;
 char codigo1[19];
 char cidade1[50];
 int populacao1;;
 float area1;
 float pib1;
 int pontos;

 // Carta 2

 char estado2;
 char codigo2[17];
 char cidade2[60];
 int populacao1;
 float area2;
 float pib2;
 int pontos2;

  // Área para entrada de dados

 printf("cadastro da Carta1 \n")

 printf("estado (A-H): ");
 scanf("%c", %estado1  ");

 printf("codigo (A019): ";
 scanf("%s", codigo1);

 printf("nome da cidade: ");
 scanf("%[^\n]", cidade1);

 printf("populacao: ");
 scanf("%d", %populacao1);

 printf("Area (km2): ");
 scanf("%f", &area1);

 printf("PIB: ");
 scanf("%f", pib1);

 printf("Numero de pontos turisticos: ");
 scanf("%d", % pontos);


 printf("cadastro da Carta2 \n")

 printf("estado (A-H): ");
 scanf("%c", %estado2 ");

 printf("odigo (A019): ";
 scanf("%s", codigo2);

 printf("nome da cidade: ");
 scanf(" %[^\n]", cidade2);

 printf("Populacao2: ");
 scanf("%d", %populacao2);

 printf("Area (km2): ");
 scanf("%f", &area2);

 printf("PIB: ");
 scanf("%f", %pib2);

 printf("Numero de pontos turisticos: ");
 scanf("%d", %pontos2);

  // Área para exibição dos dados da cidade

return 0;
} 
