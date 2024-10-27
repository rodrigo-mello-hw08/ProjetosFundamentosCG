#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Sorteie um número par entre 20 e 100
*/

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int numero = 1; //inicializa com impar
    
    srand(time(0));
    
    while(numero % 2 != 0) { //verifica se e par
        numero = sortearNumero(20, 100);
    }
    printf("Número sorteado foi %d", numero);

    return 0;
}