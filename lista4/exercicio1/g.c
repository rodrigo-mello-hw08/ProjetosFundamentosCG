#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem 
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de 
números positivos e negativos lidos.
*/

int sortearNumero(int min, int max) {
    int numeroSorteado = min + rand() % (max - min + 1);
    return numeroSorteado;
}

int main() {
    int qtdNumeros = 20, qtdNumerosPositivos = 0, qtdNumerosNegativos = 0;
    int numeroSorteado;
    for(int i=0 ; i < qtdNumeros ; i++) {
        numeroSorteado = sortearNumero(-10, 10);
        if (numeroSorteado < 0) {
            printf("\nO %d° numero é igual [%d] e é [NEGATIVO]", i+1, numeroSorteado);
            qtdNumerosPositivos++;
        } else if (numeroSorteado > 0) {
            printf("\nO %d° numero é igual [%d] e é [POSITIVO]", i+1, numeroSorteado);
            qtdNumerosNegativos++;
        } else {
            printf("\nO %d° numero é igual [%d] e é [NULO]", i+1, numeroSorteado);
        }
    }

    printf("\n\nQuantidade de números positivos: %d", qtdNumerosPositivos);
    printf("\nQuantidade de números negativos: %d", qtdNumerosNegativos);

    return 0;
}