#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menuInicial() {
    int opcao = 0;
    while(opcao != 1 && opcao != 2) {
        printf("\n1 - Nova Simulação\n");
        printf("2 - Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &opcao);
    }
    return opcao;
}

int sortearNumero(int min, int max) {
    int numeroSorteado = min + rand() % (max - min + 1);
    //printf("\nO numero sorteado foi %d", numeroSorteado);
    return numeroSorteado;
}

float obterCondicaoAdversa() {
    int numero = sortearNumero(0, 100);
    float taxaAdversa = 0;
    if (numero <= 20) { 
        printf("\n(condição adversa: Alta Temperatura!)"); 
        taxaAdversa = -0.3;
    } else if (numero <= 35) { //15%
        printf("\n(condição adversa: Falta de Nutrientes!)");
        taxaAdversa = -0.25 ;
    } else if (numero <= 45) { //10%
        printf("\n(condição adversa: Excesso de Umidade!)");
        taxaAdversa = -0.2 ;
    } else if (numero <= 50) { //5%
        printf("\n(condição adversa: Radiação Ultravioleta!)");
        taxaAdversa = -0.5;
    } else if (numero <= 60) { //10%
        printf("\n(condição adversa: Condição Favorável!)");
        taxaAdversa = 0.2 ;
    } 
    
    return taxaAdversa;
}

int simularCiclo(int populacao, float taxaDeCrescimento, float condicaoAdversa) {
    int novaPopulacao = populacao + (populacao * taxaDeCrescimento / 100);
    if (condicaoAdversa != 0) {
        novaPopulacao = novaPopulacao + (novaPopulacao * condicaoAdversa);
    }
    return novaPopulacao;
}

void simular() {
    int populacaoInicial, numeroDeCiclos;
    float taxaDeCrescimento, condicaoAdversa;
    
    printf("\nPopulação inicial: ");
    scanf(" %d", &populacaoInicial);
    
    printf("Taxa de crescimento em porcentagem: ");
    scanf(" %f", &taxaDeCrescimento);
    
    printf("Número de ciclos: ");
    scanf(" %d", &numeroDeCiclos);
    
    int novaPopulacao = populacaoInicial;
    for (int i=0 ; i <= numeroDeCiclos ; i ++) {
        printf("\n-------------------------------------------");
        condicaoAdversa = obterCondicaoAdversa();
        novaPopulacao = simularCiclo(novaPopulacao, taxaDeCrescimento, condicaoAdversa);
        printf("\nCiclo %d: População = %d", i+1, novaPopulacao);
    }
    printf("\n-------------------------------------------");
    printf("\nSimulação concluída. População final: %d", novaPopulacao);
    printf("\n-------------------------------------------\n");
}

int main() {
    srand (time(0));
    int opcao = 0;
    
    while(opcao != 2) {
        opcao = menuInicial();
        if (opcao == 1) { simular(); }
    }

    return 0;
}