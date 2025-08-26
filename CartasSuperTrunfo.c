#include <stdio.h>

int main(){
    
    //Estado 1
    char estado1 = 'R';
    char codigo1[4] = "A01";
    char nome1[20] = "Recife";
    int populacao = 158;            // milhões
    float area1 = 218.843;          // km²
    float pib1 = 54.691;            // bilhões
    int ponto1 = 40;                
 

    //Estado 2
    char estado2 = 'P';  
    char codigo2[4] = "P02";
    char nome2[20] = "Paraíba";
    int populacao2 = 4;
    float area2 = 56.585;           
    float pib2 = 77.470;            
    int ponto2 = 20;        


    printf("Carta 1: \n");
    printf("Estado: %c  \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", nome1);
    printf("População: %d milhões \n", populacao);
    printf("Área: %.2f km² \n", area1);
    printf("Pib: %.2f Bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n\n", ponto1);

    printf("Carta 2: \n");
    printf("Estado: %c  \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d milhões \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Pib: %.2f Bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n\n", ponto2);

    

    return 0;
}
