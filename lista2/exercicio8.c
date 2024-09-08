#include <stdio.h>

/*
Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa 
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
*/

int main() {
    float tempCelcius, tempFahrenheit;
    
    printf("\nConversor de temperatura");
    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &tempCelcius);
    
    tempFahrenheit = (tempCelcius * 9/5) + 32;
    printf("\n%g graus Celsius equivalem a %g graus Fahrenheit", tempCelcius, tempFahrenheit);

    return 0;
}