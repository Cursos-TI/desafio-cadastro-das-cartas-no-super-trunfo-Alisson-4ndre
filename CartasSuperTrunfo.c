#include <stdio.h>

int main(){
// Variáveis da carta 1
char estado1;
char codigo1[4];
char nomecidade1[30];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;
float densidade1;       // nova variável
float pibpercapita1;    // nova variável

// Variáveis da carta 2
char estado2;
char codigo2[4];
char nomecidade2[30];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidade2;       // nova variável
float pibpercapita2;    // nova variável

// Entradas e saídas para a carta 1
printf("Digite os dados da carta 1:\n");

printf("Digite o estado (letra de 'A' a 'H'): ");
scanf(" %c", &estado1);

printf("Digite o código (A letra do estado seguida de um número de 01 a 04 ex.: A01, B03): ");
scanf(" %s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %s", nomecidade1);

printf("Digite a população: ");
scanf(" %d", &populacao1);

printf("Digite a área em KM²: ");
scanf(" %f", &area1);

printf("Digite o PIB (em bilhões de reais): ");
scanf(" %f", &pib1);

printf("Digite a quantidade de pontos turísticos: ");
scanf(" %d", &pontosturisticos1);

// Calcular densidade e PIB per capita da carta 1
densidade1 = populacao1 / area1;
pibpercapita1 = (pib1 * 1000000000.0) / populacao1; // PIB em reais

// Entradas e saídas para a carta 2
printf("\nDigite os dados da carta 2:\n");

printf("Digite o estado (letra de 'A' a 'H'): ");
scanf(" %c", &estado2);

printf("Digite o código da carta 2 (A letra do estado seguida de um número de 01 a 04 ex.: A01, B04): ");
scanf(" %s", codigo2);

printf("Digite o nome da cidade: ");
scanf(" %s", nomecidade2);

printf("Digite a população: ");
scanf(" %d", &populacao2);

printf("Digite a área em KM²: ");
scanf(" %f", &area2);

printf("Digite o PIB (em bilhões de reais): ");
scanf(" %f", &pib2);

printf("Digite a quantidade de pontos turísticos: ");
scanf(" %d", &pontosturisticos2);

// Calcular densidade e PIB per capita da carta 2
densidade2 = populacao2 / area2;
pibpercapita2 = (pib2 * 1000000000.0) / populacao2; // PIB em reais

// Apresentação dos dados da carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1 );
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercapita1);

// Apresentação dos dados da carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercapita2);

return 0;
}