#include <stdio.h>

/*
Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o 
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também 
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e 
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. 
 Exemplo de tela de saída:
 Entre com o valor do divisor: 3
 Início do intervalo: 17
 Final do intervalo: 29
 Números divisíveis por 3 no intervalo de 17 a 29:
  18 21 24 27

*/

int main() {
    int divisor, inicioIntervalo, finalIntervalo;
    printf("\nEntre com o valor do divisor: ");
    scanf(" %d", &divisor);
    
    printf("\nInício do intervalo: ");
    scanf(" %d", &inicioIntervalo);
    
    printf("\nFinal do intervalo: ");
    scanf(" %d", &finalIntervalo);
    
    printf("\nNúmeros divisíveis por %d no intervalo de %d a %d: \n", divisor, inicioIntervalo, finalIntervalo);
    for(int i = inicioIntervalo ; i < finalIntervalo ; i++) {
        if (i % divisor == 0) {
            printf(" %d", i);
        }
    }
    
    return 0;
}