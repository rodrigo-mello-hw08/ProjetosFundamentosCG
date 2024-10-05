#include <stdio.h>

/* 
Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do 
teclado. 
Exemplo de tela de saída, para n = 5 e caracter = `*`: 
Entre com um número: 5 
Entre com um caracter: * 
* 
* * 
* * * 
* * * * 
* * * * *
*/

void imprimir(int numeroDeLinhas, char caractere) {
    for(int i=1; i<=numeroDeLinhas ; i++) {
        for(int j=1 ; j <= i ; j++) {
            printf("%c", caractere);
        };
        printf("\n");
    }
}


int main() {
    int numeroDeLinhas;
    char caractere;
    
    printf("\nEntre com um número de linhas: ");
    scanf(" %d", &numeroDeLinhas);
    
    printf("\nEntre com um caractere: ");
    scanf(" %c", &caractere);
        
    imprimir(numeroDeLinhas, caractere);

    return 0;
}