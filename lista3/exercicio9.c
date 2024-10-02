#include <stdio.h>

/*
Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação 
de cada moeda em relação ao real. Depois apresente o seguinte menu: 
1) Converter de Real para Euro 
2) Converter de Real para Dólar 
3) Converter de Euro para Dólar 
4) Converter de Euro para Real 
5) Converter de Dólar para Euro 
6) Converter de Dólar para Real 
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda 
destino. 
*/

int selecionarConversao() {
    int opcao = 0;
    while (opcao <= 0 || opcao > 6) {
        printf("\nSelecione uma das opcoes");
        printf("\n1) Converter de Real para Euro ");
        printf("\n2) Converter de Real para Dólar ");
        printf("\n3) Converter de Euro para Dólar ");
        printf("\n4) Converter de Euro para Real ");
        printf("\n5) Converter de Dólar para Euro ");
        printf("\n6) Converter de Dólar para Real \n");
        scanf(" %d", &opcao);
    }
    return opcao;
}

float converter(float cotacaoDolar, float cotacaoEuro, float valor, int opcao) {
    float valorEmReais, valorFinal;
    switch (opcao) {
        case 1:
            valorFinal = valor / cotacaoEuro; break;
        case 2: 
            valorFinal = valor / cotacaoDolar; break;
        case 3:
            valorEmReais = valor * cotacaoEuro;
            valorFinal = valorEmReais / cotacaoDolar; break;
        case 4:
            valorFinal = valor * cotacaoEuro; break;
        case 5:
            valorEmReais = valor * cotacaoDolar;
            valorFinal = valorEmReais / cotacaoEuro;  break;
        case 6:
            valorFinal = valor * cotacaoDolar; break;
    }
    return valorFinal;
}


int main() {
    float cotacaoDolar, cotacaoEuro, valor, valorConvertido;
    int opcao;
    
    printf("\nInforme a cotacao do dolar: ");
    scanf(" %f", &cotacaoDolar);
    
    printf("\nInforme a cotacao do euro: ");
    scanf(" %f", &cotacaoEuro);
    
    opcao = selecionarConversao();
    
    printf("\nInforme o valor a ser convertido: ");
    scanf(" %f", &valor);
    
    valorConvertido = converter(cotacaoDolar, cotacaoEuro, valor, opcao);
    
    printf("\nO valor apos a conversao e de: $ %g", valorConvertido);

    return 0;
}