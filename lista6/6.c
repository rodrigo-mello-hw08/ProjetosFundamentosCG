#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a 
informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e 
segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores 
como nota do Grau A e do Grau B.
Exemplo (matriz com informação de 3 alunos):
Grau A Grau B Grau Parcial
7,5 | 6,7 | 7,0
4,0 | 7,1  | 6,1
8,5 | 10,0 | 9,5
*/

const int TAMANHO_COLUNA = 3;
const int TAMANHO_LINHA = 10;

float sortearNumero() {
    float numeroAleatorio = (float)rand() / RAND_MAX; 
    return numeroAleatorio * 10.0;
}

float calcularMedia(float valorA, float valorB) {
    float valorRealA = (valorA * (1.0/3.0));
    float valorRealB = (valorB * (2.0/3.0));
    return  valorRealA + valorRealB;
}

int main() {
    float matriz[TAMANHO_LINHA][TAMANHO_COLUNA];

    srand(time(0));

    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA-1; coluna++) {
            matriz[linha][coluna] = sortearNumero();
        }
        matriz[linha][2] = calcularMedia(matriz[linha][0], matriz[linha][1]);
    }

    printf("\n matriz = [\n");
    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        printf("  ");
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            printf("%.1f | ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("]");
        

    srand(time(0));

    return 0;
}
