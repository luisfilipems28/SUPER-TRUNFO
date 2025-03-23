#include <stdio.h>

int main(){
    char estado1[0];
    char codcard1[0];  
    char cidade1[0];
    int popul1;
    float area1;
    float pib1;
    int pturisticos1;

    char estado2[0];
    char codcard2[0];  
    char cidade2[0];
    int popul2;
    float area2;
    float pib2;
    int pturisticos2;
    
  //Primeira rodada

    printf("Carta 1:\n");
    
    printf("Estado: %s\n", estado1);
    scanf("%s", estado1);

    printf("Código: %s\n", codcard1);
    scanf("%s", codcard1);

    printf("Nome da Cidade: %s\n", cidade1);
    scanf("%s", cidade1);

    printf("População: %s\n", &popul1);
    scanf("%s", &popul1);

    printf("PIB: %f\n", pib1);
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: %s\n", &pturisticos1);
    scanf("%s", &pturisticos1);

  
    printf("\n"); //Dei a quebra de linha nas cartas caso contrário o terminal ficaria muito poluído;
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcard1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %s\n", &popul1);
    printf("PIB: %f\n", pib1 );
    printf("Número de Pontos Turisticos: %s\n", &pturisticos1);
    printf("\n");


    //Segunda rodada
    printf("\n");
    printf("Próxima carta.\n");
    
    printf("Carta 2:\n");
    
    printf("Estado: %s\n", estado2);
    scanf("%s", estado2);

    printf("Código: %s\n", codcard2);
    scanf("%s", codcard2);

    printf("Nome da Cidade: %s\n", cidade2);
    scanf("%s", cidade2);

    printf("População: %s\n", &popul2);
    scanf("%s", &popul2);

    printf("PIB: %f\n", pib2);
    scanf("%f", pib2);

    printf("Número de Pontos Turísticos: %s\n", &pturisticos2);
    scanf("%s", &pturisticos2);
     
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcard2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %s\n", &popul2);
    printf("PIB: %f\n", pib2 );
    printf("Número de Pontos Turisticos: %s\n", &pturisticos2);
    printf("\n");

    return 0;

}