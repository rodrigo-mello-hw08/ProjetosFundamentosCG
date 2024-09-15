#include <stdio.h>

/*
Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3. 
*/

int main() {
    int numero;
    
    printf("\nInforme o valor do numero de entrada: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0) {
        printf("\nO número informado e divisivel por 3");
    } else {
        printf("\nO número informado nao e divisivel por 3");
    }
    
    return 0;
}