#include <stdio.h>

/*
(4.0 pts) Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e 
4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém.
Exemplo de matriz:
0 4 3 2 1
1 0 2 4 0
3 2 4 4 0
1 2 3 4 0
0 0 0 1 2
Retornaria a seguinte contagem:
\nQuantidade de valores 0: 8
\nQuantidade de valores 1: 4
\nQuantidade de valores 2: 5
\nQuantidade de valores 3: 3
\nQuantidade de valores 4: 5
*/

int main() {
    int matriz[5][5] = {
        {0, 4, 3, 2, 1},
        {1, 0, 2, 4, 0},
        {3, 2, 4, 4, 0},
        {1, 2, 3, 4, 0},
        {0, 0, 0, 1, 2}
    };
    int qtdZero = 0, qtdUm = 0, qtdDois = 0, qtdTres=0, qtdQuatro = 0; 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int numero = matriz[i][j];
            switch (numero) {
                case 0:
                    qtdZero++; break;
                case 1:
                    qtdUm++; break;
                case 2:
                    qtdDois++; break;
                case 3:
                    qtdTres++; break;
                case 4:
                    qtdQuatro++; break;
                default:
                    printf("\nErro numero nao reconhecido"); break;
            }
        }        
    }

    printf("\nQuantidade de valores 0: %d", qtdZero);
    printf("\nQuantidade de valores 1: %d", qtdUm);
    printf("\nQuantidade de valores 2: %d", qtdDois);
    printf("\nQuantidade de valores 3: %d", qtdTres);
    printf("\nQuantidade de valores 4: %d", qtdQuatro);
    
    return 0;
}
