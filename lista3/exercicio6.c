#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <time.h>

/*
Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois 
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie 
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da 
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga 
que o programa venceu 
*/

int sortearNumero(int min, int max) {
    int numeroSorteado = min + rand() % (max - min + 1);
    printf("O numero sorteado foi %d", numeroSorteado);
    return numeroSorteado;
}

bool escolherParOuImpar() {
    char resposta = '\0';
    while (resposta != 'I' && resposta != 'P') {
        printf("\nEscolha uma das opcoes \n[P] - Par \n[I] - Impar \n ");
        scanf(" %c", &resposta);
    }
    bool usuarioApostouPar = resposta == 'P';
    return usuarioApostouPar;
}

int escolhaNumero() {
    int numero = -1;
    while (numero < 0 || numero > 5) {
        printf("\nEscolha um numero de 0 a 5 ");
        scanf(" %d", &numero);
    }
    return numero;
}

int main() {
    bool usuarioApostouPar, resultadoPar, usuarioVenceu;
    int resultadoSoma, numeroEscolhidoUsuario, numeroSorteado;
    
    usuarioApostouPar = escolherParOuImpar();
    numeroEscolhidoUsuario = escolhaNumero();
    numeroSorteado = sortearNumero(0, 5);
    
    resultadoSoma = (numeroEscolhidoUsuario + numeroSorteado);
    printf("\nO resultado da soma foi [%d]", resultadoSoma);
    
    resultadoPar = resultadoSoma % 2 == 0;
    usuarioVenceu = usuarioApostouPar == resultadoPar;
    
    if (usuarioVenceu) {
        printf("\nVoce venceu!!");
    } else {
        printf("\nInfelizmente voce perdeu");
    }
    
    return 0;
}
