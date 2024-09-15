#include <stdio.h>

/*
Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se 
é ímpar. 
*/

int main() {
    int numero;
    
    printf("\nInforme o valor do numero de entrada: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("\nO número informado e par");
    } else {
        printf("\nO número informado e impar");
    }
    
    return 0;
}