#include <stdio.h>

/*
Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para 
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. 
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
*/
int main() {
    float precoLitroGasolina, valorDispAbastecimento, litros;
    printf("\n Informe o preco atual do litro da gasolina: ");
    scanf("%f", &precoLitroGasolina);
    
    printf("\n Informe qual o valor que deseja gastar: ");
    scanf("%f", &valorDispAbastecimento);

    litros = valorDispAbastecimento / precoLitroGasolina;
    printf("\n Voce abasteceu %g litros de gasolina", litros);
    
    return 0;
}