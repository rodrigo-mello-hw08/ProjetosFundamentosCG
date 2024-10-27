#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Sorteie um número decimal entre 0 e 1 com duas casas decimais
*/

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    float numero;
    
    srand(time(0));
    
    numero = sortearNumero(0, 100);
    if (numero != 0) {
        numero /= 100;
    }
    
    printf("Número sorteado foi %.2f", numero);

    return 0;
}