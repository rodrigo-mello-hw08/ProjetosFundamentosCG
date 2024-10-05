#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <ctype.h>

/* 
Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a 
execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é 
definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1. 
Por exemplo, o fatorial de 4 é 4x3x2x1=24. 
Exemplo de tela de saída: 
Entre com um número: 5 
O fatorial de 5 é 120 
Calcular outro número (s/n)? n 
*/

int calcularFatorial(int numero) {
    if (numero == 1) {
        return numero;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int numero, fatorial;
    char opcao = 's';
    bool continuar = true;
    
    while(continuar) {
        printf("\nEntre com um número: ");
        scanf(" %d", &numero);
        
        fatorial = calcularFatorial(numero);
        printf("\nO fatorial de %d é %d", numero, fatorial);
        
        printf("\nCalcular outro número (s/n)? ");
        scanf(" %c", &opcao);
        continuar = toupper(opcao) == 'S';
    }

    return 0;
}