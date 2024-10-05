#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.
*/

int main() {
    char nomes[5][30];
    char primeiroNome[30];
    
    for (int i=0 ; i<5 ; i++) {
        printf("\nInforme o nome da %d pessoa: ", i+1);
        scanf(" %s", &nomes[i]);
    }
    
    strcpy(primeiroNome, nomes[0]);
    
    for (int i=1; i<5; i++) {
        if (strcmp(nomes[i], primeiroNome) < 0) {
            strcpy(primeiroNome, nomes[i]);
        }
    }
    
    printf("\nO primeiro nome em ordem alfabética é: %s", primeiroNome);

    return 0;
}