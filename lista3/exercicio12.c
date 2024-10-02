#include <stdio.h>

/*
A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um 
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir: 
Categoria Idade 
Infantil A 5-7 anos
Infantil B 8-10 anos
Juvenil A 11-13 anos
Juvenil B 14-17 anos
Sênior Maiores de 18 anos
*/

void imprimirCategoria(int idadeNadador) {
    if (idadeNadador >= 18) {
        printf("\nCategoria Senior");
    } else if (idadeNadador >= 14) {
        printf("\nCategoria Juvenil B");
    } else if (idadeNadador >= 11) {
        printf("\nCategoria Juvenil A");
    } else if (idadeNadador >= 8) {
        printf("\nCategoria Infantil B");
    } else if (idadeNadador >= 5) {
        printf("\nCategoria Infantil B");
    } else {
        printf("\nNadador muito novo para se encaixar em uma categoria");
    }
}


int main() {
    int idadeNadador;
    
    printf("\nInforme a idade do nadador: ");
    scanf(" %d", &idadeNadador);
    imprimirCategoria(idadeNadador);
    
    return 0;
}
