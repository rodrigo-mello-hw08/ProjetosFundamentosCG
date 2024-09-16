#include <stdio.h>

/*
Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa 
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto 
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é 
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20. 
*/

int main() {
    float percentDesconto = 0.11, valMaxDesconto = 318.20;
    float salario, valorDesconto, salarioFinal;


    printf("\nInforme o seu salario em R$: ");
    scanf(" %f", &salario);
    
    valorDesconto = salario * percentDesconto;
    if (valorDesconto > valMaxDesconto) {
        printf("\nValor máximo de desconto excedido, aplicando desconto maximo permitido de R$ %g", valMaxDesconto);
        valorDesconto = valMaxDesconto;
    }
    
    salarioFinal = salario - valorDesconto;
    
    printf("\nSalario apos desconto: R$ %g", salarioFinal);
    printf("\nDesconto aplicado: R$ %g", valorDesconto);

    return 0;
}