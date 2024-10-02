#include <stdio.h>

/*
Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números 
que deverão ser lidos e também deve ser lido do teclado)
*/

int main() {
    int qtdNumeros, numero;
    int soma = 0;
    
    printf("\nQuantos números devem ser lidos? ");
    scanf(" %d", &qtdNumeros);
    
    for(int i=0 ; i < qtdNumeros ; i++) {
        printf("Informe o valor do %d° numero: ", i+1);
        scanf(" %d", &numero);
        soma += numero;    
    }

    printf("\n\nA soma dos numeros é igual a: %d", soma);

    return 0;
}