#include <stdio.h>
#include <ctype.h>

/*
Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço 
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir 
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
*/


int calcularValor(int opcao, float valorProduto) {
    float descontoAVista = 0.15, descontoAVistaCredito = 0.1, juros3VezesCredito = 0.1;
    switch (opcao) {
        case 1:
            return valorProduto - (valorProduto * descontoAVista);
        case 2:
            return valorProduto - (valorProduto * descontoAVistaCredito);
        case 3:
            return valorProduto;
        case 4:
            return valorProduto + (valorProduto * juros3VezesCredito);
        default:
            printf("\nOpcao invalida!!");
            return -1;
    }
}

int main() {
    float valorProduto, valorFinal;
    int opcaoPagamento;
    
    printf("\nInforme o valor do produto: ");
    scanf(" %f", &valorProduto);
    
    printf("\nInforme a opcao de pagamento ");
    printf("\n1 - A vista em dinheiro, com 15 porcento de desconto");
    printf("\n2 - A vista no cartao de credito, com 10 porcento de desconto");
    printf("\n3 - Parcelado no cartao em 2x sem juros");
    printf("\n4 - Parcelado no cartao em 3x com 10 porcento de juros\n");
    scanf(" %d", &opcaoPagamento);

    valorFinal = calcularValor(opcaoPagamento, valorProduto);
    printf("\nO valor do produto ficou R$ %g", valorFinal);
    
    return 0;
}
