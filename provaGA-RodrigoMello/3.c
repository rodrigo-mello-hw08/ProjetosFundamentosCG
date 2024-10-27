#include <stdio.h>

/*
Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em 
centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5 
dias e exiba:
a) O deslocamento total ao longo do período.
b) O maior deslocamento registrado.
c) A média de deslocamento diário.

*/

int main() {
    float deslocamentos[5];
    float deslocamentoTotal=0, maiorDeslocamento=0;
    float mediaDeslocamento;
    
    for (int i=0 ; i< 5 ; i++) {
        printf("\nInforme o deslocamento do %d dia: ", i+1);
        scanf(" %f", &deslocamentos[i]);
        
        deslocamentoTotal += deslocamentos[i]; 
        if(deslocamentos[i] > maiorDeslocamento) {
            maiorDeslocamento = deslocamentos[i];
        }
    }
    
    mediaDeslocamento = deslocamentoTotal / 5;
    printf("\nO deslocamento total ao longo do periodo foi de: %g cm", deslocamentoTotal);
    printf("\nO maior deslocamento registrado foi de: %g cm", maiorDeslocamento);
    printf("\nA media dos deslocamentos foi de: %g cm", mediaDeslocamento);
    
    return 0;
}