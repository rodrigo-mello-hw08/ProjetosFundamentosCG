#include <stdio.h>

/*
Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo 
o resultado. 
*/

int main() {
    float numeroEntrada, resultado;
    
    printf("\nInforme o valor do numero de entrada: ");
    scanf("%f", &numeroEntrada);
    
    resultado = (numeroEntrada < 0) ? (numeroEntrada * 3) : (numeroEntrada * 2);
    
    printf("\nO resultado é: %g", resultado);
    
    return 0;
}