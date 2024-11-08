#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um 
programa que:
a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação 
acumulada de um jogador.
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma 
mensagem de "Rodada de Destaque" para esse jogador.
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).
*/

const int QTD_JOGADORES = 4;
const int QTD_RODADAS = 5;
const int PONTUACAO_MINIMA = 0;
const int PONTUACAO_MAXIMA = 100;
const int PONTUACAO_DESTAQUE = 80;

int sortearNumero() {
    return PONTUACAO_MINIMA + rand() % (PONTUACAO_MAXIMA - PONTUACAO_MINIMA + 1);
}

int printarEObterMaiorPontuacao(char nomesJogadores[4][100], int pontuacaoJogadores[4]) {
    int maiorPontuacao = pontuacaoJogadores[0];
    printf("\n Pontuacao final");
    printf("\n %s: %d pontos", nomesJogadores[0], pontuacaoJogadores[0]);
    for (int i = 1; i < QTD_JOGADORES; i++) {
        printf("\n %s: %d pontos", nomesJogadores[i], pontuacaoJogadores[i]);
        if (pontuacaoJogadores[i] > maiorPontuacao) {
            maiorPontuacao = pontuacaoJogadores[i];
        }
    }
    return maiorPontuacao;
}

void encontrarVencedor(int maiorPontuacao, char nomesJogadores[4][100], int pontuacaoJogadores[4]) {
    int qtdVencedores = 0;
    int posicaoVencedor = -1;
    for (int i = 0; i < QTD_JOGADORES; i++) {
        if (pontuacaoJogadores[i] == maiorPontuacao) {
            qtdVencedores++;
            posicaoVencedor = i;
        }
    }

    switch (qtdVencedores) {
        case 4:
        case 3:
        case 2:
            printf("\n\n Houve um empate entre os jogadores");
            break;
        default:
            printf("\n\n O vencedor foi o jogador %s com %d pontos", nomesJogadores[posicaoVencedor], pontuacaoJogadores[posicaoVencedor]);
            break;
    }
    
}

int main() {
    int pontuacaoJogadores[] = {0, 0, 0, 0};
    char nomesJogadores[][100] = {"Rodrigo", "Iury", "Luis", "Joao"};
    int maiorPontuacao;

    srand (time(0));

    printf("\n Jogadores: %s", nomesJogadores[0]);
    for (int i = 1; i < QTD_JOGADORES; i++) {
        printf(", %s", nomesJogadores[i]);
    }

    printf("\n ------------ Inicio do jogo ------------");
    
    for (int i = 0; i < QTD_RODADAS; i++) {
        printf("\n [Rodada %d]", i+1);
        for (int j = 0; j < QTD_JOGADORES; j++) {
            int pontuacaoJogador = sortearNumero();
            pontuacaoJogadores[j] += pontuacaoJogador;

            printf("\n Jogador %s: %d pontos", nomesJogadores[j], pontuacaoJogador);
            if (pontuacaoJogador >= PONTUACAO_DESTAQUE) {
                printf(" **Pontuacao destaque**"); 
            }
            
        }
        printf("\n");
    }
    printf("\n ------------- Fim do jogo -------------");

    maiorPontuacao = printarEObterMaiorPontuacao(nomesJogadores, pontuacaoJogadores);
    encontrarVencedor(maiorPontuacao, nomesJogadores, pontuacaoJogadores);

    return 0;
}


