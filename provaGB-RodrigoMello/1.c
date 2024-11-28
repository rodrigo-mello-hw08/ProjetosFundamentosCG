#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
0.5 pt) Implemente uma função sortear que receba o intervalo de valores inteiros início e 
fim como parâmetro, sorteie e retorne um número dentro do intervalo (considerando intervalo 
fechado [início, fim]).
Exemplo de uso:
int nroSorteado = sortear(1,10);
*/

int sortear(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0));
    int nroSorteado = sortear(1, 10);
    printf("\n\nO numero sorteado entre 1 e 10 foi: %d\n", nroSorteado);
}
