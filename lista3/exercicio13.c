#include <stdio.h>

/*
Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme 
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou 
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau 
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o 
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.
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

int main() {
    float notaA, notaB, notaC, mediaFinal;
    int notaDeCorte = 6, opcaoSubstituicao = 0;
    
    printf("\nInforme a nota obtida no Grau A: ");
    scanf(" %f", &notaA);
    
    printf("\nInforme a nota obtida no Grau B: ");
    scanf(" %f", &notaB);
    
    mediaFinal = calcularMedia(notaA, notaB);
    if (mediaFinal >= notaDeCorte) {
        printf("Parabens! voce foi aprovado com media %f", mediaFinal);
        return 0;
    } 
    
    opcaoSubstituicao = selecionarSubstituicao();
    printf("\nInforme a nota obtida no Grau C: ");
    scanf(" %f", &notaC);
    
    if (opcaoSubstituicao == 1) {
        mediaFinal = calcularMedia(notaC, notaB);
    } else {
        mediaFinal = calcularMedia(notaA, notaC);
    }
    
    if (mediaFinal >= notaDeCorte) {
        printf("\nParabens! voce foi aprovado com media %f", mediaFinal);
    } else {
        printf("\nInfelizmente voce foi reprovado com a media %f, mesmo apos a recuperacao", mediaFinal);
    }
    
    return 0;
}
