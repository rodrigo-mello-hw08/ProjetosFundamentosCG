#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor,
o maior e a média dos valores sorteados.
*/

int sortearNumero() {
    int numero = rand() % (101);
    printf("\nO numero sorteado foi %d", numero);
    return numero;
}

int main() {
    srand(time(0));
    int maior = 0, menor = 0, numero, somaNumeros;
    float media = 0;
    
    for(int i=0 ; i<5 ; i++) {
        numero = sortearNumero();
        if (numero < menor) { menor = numero;}
        if (numero > maior) { maior = numero;}
        somaNumeros += numero;
    }
    media = somaNumeros / 5;
    printf("\n\nA media dos numeros e: %g", media);
    
    return 0;
}
