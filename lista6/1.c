#include <stdio.h>

/*
Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], 
faça um programa que copie o conteúdo dos vetores dados para uma matriz de 
tamanho 3x5 de forma a obter o seguinte resultado:
𝑀 = [
    1 5 9 2 5
    7 4 13 21 6
    8 −3 5 7 12
]
*/

int main() {
    int v1[] = {1,5,9,2,5};
    int v2[] = {7,4,13,21,6};
    int v3[] = {8,-3,5,7,12};
    int matrizFinal[3][5];
    int ii = 0;

    
    printf("\nmatriz v1 = [");
    for (int j = 0; j < 5; j++) {
        printf("%d ", v1[j]);
        matrizFinal[ii][j] = v1[j];
    }
    printf("]");

    ii++;
    printf("\nmatriz v2 = [");
    for (int j = 0; j < 5; j++) {
        printf("%d ", v2[j]);
        matrizFinal[ii][j] = v2[j];
    }
    printf("]");

    ii++;
    printf("\nmatriz v3 = [");
    for (int j = 0; j < 5; j++) {
        printf("%d ", v3[j]);
        matrizFinal[ii][j] = v3[j];
    }
    printf("]");

    printf("\nmatriz final = [\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizFinal[i][j]);
        }
        printf("\n");
    }
    printf("]");
    
    
    return 0;
}
