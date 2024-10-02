#include <stdio.h>

/*
Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de 
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50, 
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao 
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram 
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1.
*/

int imprimeQtdCedula(int resto, int valorCedula) {
    int qtdCedulas = 0;
    if (resto >= valorCedula) {
        qtdCedulas = resto / valorCedula;
        resto -= qtdCedulas * valorCedula;
        printf("\n%d nota(s) de R$ %d", qtdCedulas, valorCedula);
    }
    return resto;
}

int main() {
    int valorEntrada, resto;
    
    printf("\n Insira o valor de entrada: ");
    scanf(" %d", &valorEntrada);
    
    resto = valorEntrada;
    resto = imprimeQtdCedula(resto, 100);
    resto = imprimeQtdCedula(resto, 50);
    resto = imprimeQtdCedula(resto, 20);
    resto = imprimeQtdCedula(resto, 10);
    resto = imprimeQtdCedula(resto, 5);
    resto = imprimeQtdCedula(resto, 1);
    
    return 0;
}
