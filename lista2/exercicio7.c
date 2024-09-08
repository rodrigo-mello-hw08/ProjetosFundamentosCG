#include <stdio.h>

/*
Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar 
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que 
leia o número de pássaros que o criador possui e calcule a quantidade total de ração 
necessária por dia.
*/

int main() {
    int gramasRacaoPassaro = 30;
    int qtdPassaros, racaoNecessaria;
    
    printf("\nQuantos passaros você tem? ");
    scanf("%d", &qtdPassaros);
    
    racaoNecessaria = qtdPassaros * gramasRacaoPassaro;
    printf("Você irá precisar de %d gramas de ração por dia para alimenta-los", racaoNecessaria);

    return 0;
}