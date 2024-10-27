#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número 
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um 
array com 6 posições e ao final imprima o percentual do resultado de cada face.
*/

int sortearNumero() {
    return 1 + rand() % (6 - 1 + 1);
}

float calcularPercentual(int valor, int total) {
    return (100 * valor) / total;
}

int main() {
    int vetor[6] = {0, 0, 0, 0, 0, 0};
    int numeroDeIteracoes;

    srand(time(0));

    printf("\n Insira um numero de iteracoes: ");
    scanf(" %d", &numeroDeIteracoes);

    for (int i = 0; i < numeroDeIteracoes; i++) {
        int valor = sortearNumero();
        int posicaoASerAtualizada = --valor;
        vetor[posicaoASerAtualizada] += 1;
    }

    printf("\n\n Vetor");
    for (int i = 0; i < 6; i++) {
        printf("\n Frequencia do lado %d:  %d", i+1, vetor[i]);
    }
    
    printf("\n\n Percentual de cada face\n");
    for (int i = 0; i < 6; i++) {
        float percentual = calcularPercentual(vetor[i], numeroDeIteracoes);
        printf("\n Percentual do lado %d: %g", i+1, percentual);
    }
    
    return 0;
}
