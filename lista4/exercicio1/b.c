#include <stdio.h>

/*
Gerar e escrever os números pares do intervalo [20,50]
*/

int main() {
    for(int i=20 ; i <= 50 ; i++) {
        if (i %2 ==0) {
            printf("\n%d", i);
        }
    }

    return 0;
}