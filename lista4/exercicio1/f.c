#include <stdio.h>

/*
Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números 
ímpares lidos.
*/

int main() {
    int qtdNumerosPares = 0, qtdNumerosImpares = 0;
    int numero;
    
    for(int i=0 ; i < 10 ; i++) {
        printf("Informe o valor do %d° numero: ", i+1);
        scanf(" %d", &numero);
        numero % 2 == 0 ? qtdNumerosPares++ : qtdNumerosImpares++;
    }

    printf("\nQuantidade de números pares: %d", qtdNumerosPares);
    printf("\nQuantidade de números impares: %d", qtdNumerosImpares);

    return 0;
}