#include <stdio.h>

/*
Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras 
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da 
compra com o desconto.
*/

int main() {
    float desconto = 0.15;
    float valorCompra, valorCompraComDesconto;
    
    printf("\nInforme o valor da compra: ");
    scanf("%f", &valorCompra);
    
    valorCompraComDesconto = valorCompra - (valorCompra * desconto);
    printf("\nO valor da compra apos o desconto e de R$ %g", valorCompraComDesconto);

    return 0;
}