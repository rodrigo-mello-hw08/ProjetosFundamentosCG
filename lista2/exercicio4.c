#include <stdio.h>

/*
Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do 
grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau 
B 2/3.
*/

void imprimirResultado(float media) {
    if (media >= 6) {
        printf("\n Parabéns voce foi aprovado com media igual a %g", media);
    } else {
        printf("\n Infelizmente voce foi reprovado pois sua media e igual a %g", media);
    }
}

int main() {
    float notaGrauA, notaGrauB, media;
    printf("\n Bem vindo a unisinos!!");
    printf("\n Qual sua nota do grau A? ");
    scanf("%f", &notaGrauA);
    
    printf("\n Qual sua nota do grau B? ");
    scanf("%f", &notaGrauB);

    media = (notaGrauA + (notaGrauB * 2)) / 3;
    imprimirResultado(media);
    return 0;
}
