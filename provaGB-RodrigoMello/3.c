#include <stdio.h>
#include <stdbool.h> 
#include <ctype.h>

/*
(4.0 pts) Correção de provas objetivas: faça um programa que permita cadastrar um vetor com 
o gabarito de uma prova objetiva contendo 10 questões, cujos resultados podem ser de ‘a’ a ‘f’. 
Depois disso, permita ao usuário a opção de entrar com as respostas dadas por um estudante.
Exemplo de gabarito:
    a f c d d a e e b a
O programa deve:
a) Contabilizar o número de respostas certas e dar a pontuação final, de 0 a 10.
b) Durante o processo de correção, imprimir na tela quais questões foram acertadas e quais o 
estudante errou. Neste caso, deve-se imprimir a resposta correta.
Exemplo:
Respostas do estudante:
    a f a d f a e e c a
Saída do programa:
Questão 1: resposta correta
Questão 2: resposta correta
Questão 3: resposta incorreta. A resposta correta é c.
Questão 4: resposta correta
Questão 5: resposta incorreta. A resposta correta é d.
Questão 6: resposta correta
Questão 7: resposta correta
Questão 8: resposta correta
Questão 9: resposta incorreta. A resposta correta é b.
Questão 10: resposta correta
A pontuação do estudante é 7/10.

*/
const int QTD_QUESTOES = 10;

char lerEntrada() {
    bool invalido = true;
    char escolha;
    while (invalido) {
        scanf(" %c", &escolha);
        escolha = tolower(escolha);
        if (escolha != 'a' && escolha != 'b' 
            && escolha != 'c' && escolha != 'd' 
            && escolha != 'e' && escolha != 'f') {
            printf("\n Opcao invalida, escreva novamente:\n ");
        } else {
            invalido = false;
        }        
    }
    return escolha;
}

void cadastrarGabarito(char* gabarito) {
    printf("\nIniciando preenchimento de gabarito: ");
    for (int i = 0; i < QTD_QUESTOES; i++) {
        printf("\nQual a resposta da questao %d? ", i+1);
        gabarito[i] = lerEntrada();
    }
}

void cadastrarRespostas(char* respostas) {
    printf("\nIniciando preenchimento das questoes: ");
    for (int i = 0; i < QTD_QUESTOES; i++) {
        printf("\nQual a sua resposta para a questao %d? ", i+1);
        respostas[i] = lerEntrada();
    }
}

int main() {
    int qtdAcertos = 0;
    char gabarito[QTD_QUESTOES];
    char respostasAluno[QTD_QUESTOES];

    cadastrarGabarito(gabarito);
    cadastrarRespostas(respostasAluno);

    printf("\nCorrigindo prova");
    for (int i = 0; i < QTD_QUESTOES; i++) {
        if (gabarito[i] == respostasAluno[i]) {
            printf("\nQuestao %d: resposta correta", i+1);
            qtdAcertos++;
        } else {
            printf("\nQuestao %d: resposta incorreta. A resposta correta é %c.", i+1, gabarito[i]);
        }
    }
    printf("\nA pontuacao do estudante e %d/%d.", qtdAcertos, QTD_QUESTOES);

    return 0;
}
