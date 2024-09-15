#include <stdio.h>

/*
Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de 
A + B é menor que A + C. 
*/

int main() {
    float valorA, valorB, valorC, somaAB, somaAC;
    const char *resultado; //uso de ponteiro
    
    printf("\nInforme o valor de A: ");
    scanf("%f", &valorA);
    
    printf("\nInforme o valor de B: ");
    scanf("%f", &valorB);
    
    printf("\nInforme o valor de C: ");
    scanf("%f", &valorC);
    
    somaAB = valorA + valorB;
    somaAC = valorA + valorC;
    
    resultado = (somaAB > somaAC) ? "maior" : "menor";
    
    printf("A soma de A + B e %s que A + C", resultado);
    
    return 0;
}