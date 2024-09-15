#include <stdio.h>

/*
Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for 
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
*/

int main() {
    float primeiroNumero, segundoNumero, resultado;
    
    printf("\nInforme o dividendo: ");
    scanf("%f", &primeiroNumero);
    
    printf("\nInforme o divisor: ");
    scanf("%f", &segundoNumero);
    
    if (segundoNumero == 0) {
        printf("Não é possível fazer divisao por zero");
    } else {
        resultado = primeiroNumero / segundoNumero;
        printf("\nO resultado da divisao e: %g", resultado);
    }
    
    return 0;
}