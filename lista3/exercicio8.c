#include <stdio.h>

/*
Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor 
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço 
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na 
tela o valor de venda. 
*/

float calcularValorRevendaProduto(float valorProduto, float percentualLucro) {
    return valorProduto + (valorProduto * percentualLucro);
}

int main() {
    float lucroProdutoBarato = 0.45, lucroProdutoMedio = 0.35, lucroProdutoCaro = 0.25;
    float limiteProdutoBarato = 20, limiteProdutoMedio = 50;
    float valorProduto, valorRevendaProduto;

    printf("\nInforme o valor inicial do produto em R$: ");
    scanf(" %f", &valorProduto);
    
    if (valorProduto <= limiteProdutoBarato) {
        valorRevendaProduto = calcularValorRevendaProduto(valorProduto, lucroProdutoBarato);
    } else if (valorProduto <= limiteProdutoMedio) {
        valorRevendaProduto = calcularValorRevendaProduto(valorProduto, lucroProdutoMedio);
    } else {
        valorRevendaProduto = calcularValorRevendaProduto(valorProduto, lucroProdutoCaro);
    }
    
    printf("\nO valor de venda e de: R$ %g", valorRevendaProduto);

    return 0;
}