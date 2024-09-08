#include <stdio.h>

/*
Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o 
peso do prato do cliente e calcule o valor a ser pago.
*/
int main() {
    float precoKilo = 40;
    float pesoPratoCliente, valorASerPago;

    printf("\nQual o peso do seu prato em gramas? ");
    scanf("%f", &pesoPratoCliente);

    valorASerPago = (pesoPratoCliente / 1000) * precoKilo;
    printf("Valor a ser pago: R$ %g", valorASerPago);

    return 0;
}