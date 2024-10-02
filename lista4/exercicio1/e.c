#include <stdio.h>

/*
Ler 15 números e escrever a soma e a média dos números lidos
*/

int main() {
    int qtdNumeros = 15, somaNumeros = 0;
    int numero;
    float media;
    
    for(int i=0 ; i < qtdNumeros ; i++) {
        printf("Informe o valor do %d° numero: ", i+1);
        scanf(" %d", &numero);
        somaNumeros += numero;
    }
    media = somaNumeros/qtdNumeros;
    printf("\nA media dos numeros foi: %g", media);

    return 0;
}