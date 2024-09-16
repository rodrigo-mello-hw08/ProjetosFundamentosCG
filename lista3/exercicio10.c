#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que 
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no 
começo do programa quantas faces quer, para depois fazer o sorteio. 
*/

int sortearNumero(int max) {
    return 1 + rand() % (max - 1 + 1);
}

int gerarNumero(int lados) {
    switch (lados) {
        case 4:
            return sortearNumero(4);
        case 6:
            return sortearNumero(6);
        case 8:
            return sortearNumero(8);
        case 10:
            return sortearNumero(10);
        case 12:
            return sortearNumero(12);
        case 16:
            return sortearNumero(16);
        default:
            printf("\nFormato de dado nao reconhecido");
            return -1;
    }
}

int main() {
    int facesDado, numeroSorteado;
    
    printf("\nDados disponiveis [4, 6, 8, 10, 12, 16]");
    printf("\nInforme qual dado voce gostaria de rodar: ");
    scanf(" %d", &facesDado);
    
    numeroSorteado = gerarNumero(facesDado);
    printf("\nO numero sorteado foi %d", numeroSorteado);

    return 0;
}