#include <stdio.h>

/*
Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada 
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6, 
12 e 20.
*/

int main() {
    int vetor[5];
    int tamanhoArray = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0 ; i<tamanhoArray ; i++) {
        printf("\n Insira o [%d] valor: ", i);
        scanf(" %d", &vetor[i]);
    }

    printf("Resultado: ");
    for (int i = 0; i < tamanhoArray; i++) {
        if (i != 0) { printf(", "); }
        
        int valor = vetor[i] * i;
        printf(" %d", valor);
    }
    
    return 0;
}
