#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve 
continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja 
menor que o terceiro. Não use o comando break.
Regras:
a) A cada iteração, o programa deve exibir os números sorteados.
b) Quando a condição for atendida (primeiro < e segundo e segundo < terceiro), o 
programa deve imprimir uma mensagem indicando que os números satisfazem a 
condição.

*/

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int primeiroNumero = 3, segundoNumero = 2, terceiroNumero = 1;
    int iteracao = 1;
    
    srand(time(0));
    
    while(! ((primeiroNumero < segundoNumero) && (segundoNumero < terceiroNumero) )) {
        primeiroNumero = sortearNumero(1, 10);
        segundoNumero = sortearNumero(1, 10);
        terceiroNumero = sortearNumero(1, 10);
        printf("\n%d°iteracao", iteracao);
        printf("\nnumeros sorteados %d - %d - %d\n", primeiroNumero, segundoNumero, terceiroNumero);
        iteracao++;
    }
    
    printf("Os números agora satisfazem a condição");

    return 0;
}