#include <stdio.h>

int main(){
    
    //Estado 1
    char estado1 = 'R';
    char codigo1[4] = "A01";
    char nome1[20] = "Recife";
    int populacao = 6748004;            // milhões
    float area1 = 1300.25;          // km²
    float pib1 = 300.50;            // bilhões
    int ponto1 = 40;     
    float dp = populacao / area1;
    float capita = pib1 / populacao;            
 

    //Estado 2
    char estado2 = 'P';  
    char codigo2[4] = "P02";
    char nome2[20] = "Paraíba";
    int populacao2 = 1225000;
    float area2 = 1432.11;           
    float pib2 = 699.28;            
    int ponto2 = 20;    
    float dp2 = populacao / area2;
    float capita2 = pib2 / populacao;


    printf("Carta 1: \n");
    printf("Estado: %c  \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", nome1);
    printf("População: %d milhões \n", populacao);
    printf("Área: %.2f km² \n", area1);
    printf("Pib: %.2f Bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", ponto1);
    printf("Densidade Populacional: %d \n", dp);
    printf("PIB per Capita: %d \n\n", capita);

    printf("Carta 2: \n");
    printf("Estado: %c  \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d milhões \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Pib: %.2f Bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", ponto2);
    printf("Densidade Populacional: %d \n", dp2);
    printf("Pib per capita: %d \n", capita2);

    

    return 0;

}
