#include <stdio.h>
#include <stdbool.h> 
#include <ctype.h>

/*
Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema 
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C 
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se 
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a 
média geral dos alunos
*/


float calcularMedia(float notaA, float notaB) {
    return (notaA + (notaB * 2)) / 3;
}

int selecionarSubstituicao() {
    int opcaoSubstituicao = 0;
    while (opcaoSubstituicao != 1 && opcaoSubstituicao != 2) {
        printf("\nVoce ficou em recuperacao!!");
        printf("\nDeseja substituir a nota de qual Grau?\n 1 - Grau A \n 2 - Grau B\n");
        scanf(" %d", &opcaoSubstituicao);
    }
    return opcaoSubstituicao;
}

float calcularMediaAluno() {
    float notaA, notaB, notaC, mediaFinal;
    int notaDeCorte = 6, opcaoSubstituicao = 0;
    
    printf("\nInforme a nota obtida no Grau A: ");
    scanf(" %f", &notaA);
    
    printf("\nInforme a nota obtida no Grau B: ");
    scanf(" %f", &notaB);
    
    mediaFinal = calcularMedia(notaA, notaB);
    if (mediaFinal >= notaDeCorte) {
        printf("\nAPROVADO");
        return mediaFinal;
    } 
    
    opcaoSubstituicao = selecionarSubstituicao();
    printf("\nInforme a nota obtida no Grau C: ");
    scanf(" %f", &notaC);
    
    mediaFinal = opcaoSubstituicao == 1 ? 
        calcularMedia(notaC, notaB) : calcularMedia(notaA, notaC);
    
    if (mediaFinal >= notaDeCorte) {
        printf("\nAPROVADO");
    } else {
        printf("\nREPROVADO");
    }
    return mediaFinal;
}

int main() {
    float somaNotas = 0, mediaAlunos;
    int qtdAlunos = 0;
    char opcaoCadastro;
    bool continuarCadastrando = true;
    
    while(continuarCadastrando) {
        printf("Informe os dados do aluno %d\n", ++qtdAlunos);
        somaNotas += calcularMediaAluno();
        printf("\nDeseja continuar cadastrando alunos? \nS-Sim\nN-Nao\n");
        scanf(" %c", &opcaoCadastro);
        printf("\n---------------------------------\n");
        continuarCadastrando = toupper(opcaoCadastro) == 'S';
    }
    
    mediaAlunos = somaNotas / qtdAlunos;
    printf("\nQuantidade de alunos cadastrados: %d", qtdAlunos);
    printf("\nMédia somada de todos os alunos: %g", mediaAlunos);
    
    return 0;
}
