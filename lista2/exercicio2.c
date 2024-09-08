#include <stdio.h>

/*
Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a 
cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o 
valor total em reais que ele precisará pagar.
*/
int main() {
    float cotacaoDolarReal, dolaresDesejados, reaisNecessarios;
    printf("\nInforme a cotacao do dolar para real: \n");
    scanf("%f", &cotacaoDolarReal);
    
    printf("\nQuantos dolares voce gostaria de comprar? ");
    scanf("%f", &dolaresDesejados);

    reaisNecessarios = dolaresDesejados * cotacaoDolarReal;
    printf("\nSera necessario R$ %g reais para adquirir $%g dolares", reaisNecessarios, dolaresDesejados);

    return 0;
}