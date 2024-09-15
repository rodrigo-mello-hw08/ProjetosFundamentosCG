#include <stdio.h>

/*
Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de 
A + B é menor que A + C. 
*/

int main() {
    float valorA, valorB, valorC, somaAB, somaAC;
    
    printf("\nInforme o valor de A: ");
    scanf("%f", &valorA);
    
    printf("\nInforme o valor de B: ");
    scanf("%f", &valorB);
    
    printf("\nInforme o valor de C: ");
    scanf("%f", &valorC);
    
    somaAB = valorA + valorB;
    somaAC = valorA + valorC;
    
    if (somaAB > somaAC) {
        printf("\nA soma de A + B e maior que A + C");
    } else {
        printf("\nA soma de A + B e menor que A + C");
    }

    
    return 0;
}