#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo. 
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.
*/

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int qtdTentativas = 3;
    int valor;
    
    int numeroSorteado = sortearNumero(1, 10);
    printf("\nFoi sorteado um numero aleatorio, tente encontrar o valor");
    for (int i=0 ; i < qtdTentativas ; i++) {
        printf("\n\n%d° rodada - digite seu chute: ", i+1);
        scanf(" %d", &valor);
        
        if (valor == numeroSorteado && i != qtdTentativas) { 
            break; 
        } else if(valor > numeroSorteado && i != qtdTentativas) {
            printf("Tente novamente, o valor e menor que [%d]", valor);
        } else if (i != qtdTentativas) {
            printf("Tente novamente, o valor e maior que [%d]", valor);
        }
    }
    
    if (valor == numeroSorteado) {
        printf("\n\nParabens voce acertou!!");
    } else {
        printf("\n\nVoce perdeu, o valor era [%d]", numeroSorteado);
    }


    return 0;
}