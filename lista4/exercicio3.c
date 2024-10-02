#include <stdio.h>

/*
Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número. 
Exemplo de tela de saída:
Entre com um número: 5
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
Calcular outro número (s/n)? n
*/

char lerOpcao() {
    char opcao = 'a';
    while (opcao != 'n' && opcao != 's') {
        printf("\n\nCalcular outro número (s/n)? ");
        scanf(" %c", &opcao);
    }
    return opcao;
}

void imprimirTabuada(int numero) {
    for (int i=1 ; i <= 10 ; i++) {
        printf("\n%d x %d = %d", numero, i, i*numero);
    }
}

int main() {
    int valor;
    char opcao = 's';
    
    while (opcao == 's') {
        printf("Entre com um número: ");
        scanf(" %d", &valor);
        imprimirTabuada(valor);
        opcao = lerOpcao();
    }
    
    return 0;
}