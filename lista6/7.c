#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos 
em positivos e vice-versa.
*/

const int TAMANHO_COLUNA = 5;
const int TAMANHO_LINHA = 5;

int sortearNumero() {
    int numero =  rand() % (101);
    if (rand() % 2 == 0) { numero = -numero; }
    return numero;
}

void printarMatriz(int matriz[5][5], const char* nome) {
    printf("\n matriz %s = [\n", nome);
    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        printf("  ");
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            printf("%d| ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("]");
}

int main() {
    int matriz[TAMANHO_LINHA][TAMANHO_COLUNA];

    srand(time(0));
    
    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            matriz[linha][coluna] = sortearNumero();
        }
    }
    printarMatriz(matriz, "inicial");
    
    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            matriz[linha][coluna] *= -1;
        }
    }
    printarMatriz(matriz, "final");

    return 0;
}
