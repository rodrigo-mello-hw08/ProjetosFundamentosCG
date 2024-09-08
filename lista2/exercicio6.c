#include <stdio.h>

/*
A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma 
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones 
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em 
um dia e calcule o total arrecadado
*/
int main() {
    int qtdTablets, qtdSmartphones;
    float precoTablet = 1500, precoSmartphone = 1000;
    float totalArrecadado;

    printf("\n Informe a quantidade de tablets vendidas no dia: ");
    scanf("%d", &qtdTablets);
    
    printf("\n Informe a quantidade de smartphones vendidos no dia: ");
    scanf("%d", &qtdSmartphones);
    
    totalArrecadado = (qtdSmartphones * precoSmartphone) + (qtdTablets * precoTablet);
    printf("\n O total arrecadado no dia foi de R$ %g", totalArrecadado);
}