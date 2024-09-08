#include <stdio.h>

/*  
Faça um algoritmo que leia uma quantidade de tempo em minutos 
e escreva o tempo equivalente em segundos na tela.
*/
int main() {
    int tempoEmMinutos;
    printf("Digite uma quantidade de tempo em minutos: ");
    scanf("%d", &tempoEmMinutos);

    int tempoEmSegundos = tempoEmMinutos * 60;
    printf("\nEsse mesmo tempo em minutos é equivalente a %d segundos", tempoEmSegundos);
}