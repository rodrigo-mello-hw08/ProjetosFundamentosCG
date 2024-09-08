#include <stdio.h>

/*
O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer 
que você calcule quanto cada cliente gastou na loja apenas informando o número de 
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os 
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o 
total. Exiba na tela o valor do desconto e o valor da compra. 
*/

int main() {
    int precoCamisetas = 25, precoCalcas = 100, precoCintos= 40;
    int qtdCamisetas, qtdCalcas, qtdCintos;
    float perctDesconto = 0.10;
    float valorDesconto, valorCompra, valorFinal;
    
    printf("\nInforme a quantidade de camisetas que voce esta levando: ");
    scanf("%d", &qtdCamisetas);
    
    printf("\nInforme a quantidade de calcas que voce esta levando: ");
    scanf("%d", &qtdCalcas);
    
    printf("\nInforme a quantidade de cintos que voce esta levando: ");
    scanf("%d", &qtdCintos);
    
    valorCompra = (qtdCamisetas * precoCamisetas) + (qtdCalcas * precoCalcas) + (qtdCintos * precoCintos);
    valorDesconto = valorCompra * perctDesconto;
    valorFinal = valorCompra - valorDesconto;
    
    printf("\nO valor total da compra e de R$ %g. Desconto total R$ %g", valorFinal, valorDesconto);

    return 0;
}