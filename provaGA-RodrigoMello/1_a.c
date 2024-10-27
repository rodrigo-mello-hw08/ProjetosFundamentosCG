#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Sorteie um número entre -50 e 50.
*/

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int numero;
    
    srand(time(0));
    
    numero = sortearNumero(-50, 50);
    printf("Número sorteado foi %d", numero);

    return 0;
}