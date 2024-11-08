#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e 
10. Calcule as somas: 
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares

Encontre o maior e o menor valor da matriz gerada no exercício anterior.
*/

const int TAMANHO_COLUNA = 4;
const int TAMANHO_LINHA = 6;

int sortearNumero() {
    return (rand() % 21) - 10;
}

int main() {
    int matriz[TAMANHO_LINHA][TAMANHO_COLUNA];
    int somaElementosLinha2 = 0;
    int somaElementosLinha5 = 0;
    long int produtoElementosLinha1 = 1;
    long int produtoElementosLinha4 = 1;
    long int somaProdutoElementos = 0;
    int somaColunasIndicesPares = 0;
    int somaLinhasIndicesImpares = 0;
    int maiorValor = -1000;
    int menorValor = 1000;

    srand(time(0));

    printf("\n matriz = [\n");
    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        printf("  ");
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            matriz[linha][coluna] = sortearNumero();
            printf("%d ", matriz[linha][coluna]);
            if (matriz[linha][coluna] > maiorValor) {
                maiorValor = matriz[linha][coluna];
            }
            if (matriz[linha][coluna] < menorValor) {
                menorValor = matriz[linha][coluna];
            }
            
        }
        printf("\n");
    }
    printf("]");

    for (int linha = 0; linha < TAMANHO_LINHA; linha++) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; coluna++) {
            int valor = matriz[linha][coluna];
            if (linha == 0) {
                produtoElementosLinha1 *= valor;
            } else if (linha == 1) {
                somaElementosLinha2 += valor;
            } else if(linha == 3) {
                produtoElementosLinha4 *= valor;
            } else if (linha == 4) {
                somaElementosLinha5 += valor;
            }

            if (coluna%2 == 0) {
                somaColunasIndicesPares += valor;
            }
            if (linha%2 != 0) {
                somaLinhasIndicesImpares += valor;
            }
        }
    }
    somaProdutoElementos = produtoElementosLinha1 + produtoElementosLinha4;

    printf("\n Soma dos elementos da segunda linha: %d", somaElementosLinha2);
    printf("\n Soma dos elementos da quinta linha: %d", somaElementosLinha5);
    printf("\n Multiplicacao dos elementos primeira linha pelos elementos da quarta linha: %d", somaProdutoElementos);
    printf("\n Soma dos elementos só das colunas com índices pares: %d", somaColunasIndicesPares);
    printf("\n Soma dos elementos só das linhas com índices impares: %d", somaLinhasIndicesImpares);    
    printf("\n O maior valor encontrado foi %d", maiorValor);
    printf("\n O menor valor encontrado foi %d", menorValor);
}