#include <stdio.h>

/*
Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma 
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros 
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
*/

const int TAMANHO = 4;

int main() {
    int matriz[TAMANHO][TAMANHO];

    printf("\nMatriz = [\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("[");
        for (int j = 0; j < TAMANHO; j++) {
            int valor = i == j ? 1 : 0;
            matriz[i][j] = valor;            
            printf("%d ", matriz[i][j]);
        }
        printf("],\n");
    }
    printf("]");
    
    return 0;
}
