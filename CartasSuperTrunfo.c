#include <stdio.h>

int main(){
    
    // variaveis da carta 1

    char estado1;
    char codigo1[4];
    char nomecidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Varíaveis da carta 2

    char estado2;
    char codigo2[4];
    char nomecidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Entradas e saídas carta 1

    printf("Digite os dados da carta 1:");

    printf("Digite o estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código( A letra do estado seguida de um número de 01 a 04 ex.: A01, B02): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomecidade1);

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a área em KM²: ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf(" %d", &pontosturisticos1);

    // entradas e saídas para a carta 2

    printf("Digite os dados da carta 2:\n");

    printf("Digite o estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (A letra do estado seguida de um número de 01 a 04 ex.: A01, B04) ");
    scanf(" %s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomecidade2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em KM²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2);

    // Apresentação dos dados da carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1 );
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    // Apresentação dos dados da carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;

}