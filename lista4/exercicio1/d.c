#include <stdio.h>

/*
Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente
*/

int main() {
    for(int i=95 ; i >= 25 ; i--) {
        if (i % 2 != 0) {
            printf("\n%d", i);    
        }
    }

    return 0;
}