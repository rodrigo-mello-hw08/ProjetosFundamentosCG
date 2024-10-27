#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

/*
. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
Depois disso, implemente algoritmos para:
a. Imprimir o vetor
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
c. Verificar o número de ocorrências do valor 50 neste vetor.
d. Calcular a média dos valores do vetor
e. Encontrar o maior e o menor valor dos elementos do vetor.
f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
g. Imprimir o vetor em ordem inversa
h. Copiar os elementos em ordem inversa para outro vetor.
i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os 
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o 
conteúdo de vPares e vImp
*/

int const TAMANHO = 10;

int sortearNumero() {
    return 10 + rand() % (90 - 10 + 1);
}

int main() {
    int vetor[TAMANHO], vetorReverso[TAMANHO], vetorPar[TAMANHO], vetorImpar[TAMANHO];
    bool existeOValor50 = false;
    int qtdOcorrenciaValor50 = 0, menorValor, maiorValor, posicaoVetorInverso = 0;
    float somaValoresVetor = 0, produtoValoresVetor=1, mediaValoresVetor;
    int qtdPar = 0, qtdImpar = 0;

    srand (time(0));
    for (int i=0 ; i < TAMANHO ; i++) { 
        vetor[i] = sortearNumero(); 
    }
    
    // (E) Inicializar variaveis de menor e maior
    menorValor = vetor[0];
    maiorValor = vetor[0];
    
    printf("\n A) Imprimir o valor\n");
    for (int i=0 ; i < TAMANHO ; i++) {
        if (vetor[i] == 50) { 
            // (C) Incrementa contador de 50
            qtdOcorrenciaValor50++; 
        }
        // (F) Soma e produto valores
        somaValoresVetor += vetor[i];
        produtoValoresVetor *= vetor[i];
        
        // (E) Compara maior e menor
        if (vetor[i] < menorValor) {menorValor = vetor[i]; }
        if (vetor[i] > maiorValor) {maiorValor = vetor[i]; }
        
        printf(" Nodo [%d] = %d\n", i, vetor[i]);
    }
    
    // (B) Inicializar variavel boolean que verifica existencia do 50
    existeOValor50 = qtdOcorrenciaValor50 > 0;

    // (D) Calcula a media dos valores
    mediaValoresVetor = somaValoresVetor / TAMANHO;
    
    printf("\n B) Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)");
    if(existeOValor50) { printf("\n >> Encontrei o valor 50 no array"); } 
    else { printf("\n >> Não Encontrei o valor 50 no array"); }
    
    printf("\n\n C) Verificar o número de ocorrências do valor 50 neste vetor.");
    printf("\n >> O numero 50 apareceu no array %d vez(es)", qtdOcorrenciaValor50);
    
    printf("\n\n D) Calcular a média dos valores do vetor");
    printf("\n >> A media dos valores do vetor e igual a %g", mediaValoresVetor);
    
    printf("\n\n E) Encontrar o maior e o menor valor dos elementos do vetor.");
    printf("\n >> O menor valor do array e %d", menorValor);
    printf("\n >> O maior valor do array e %d", maiorValor);

    printf("\n\n F) Imprimir a soma e o produto acumulado dos valores dos elementos do vetor");
    printf("\n >> A soma dos valores e igual a %g", somaValoresVetor);
    printf("\n >> O produto dos valores e igual a %g", produtoValoresVetor);

    printf("\n\n G) Imprimir o vetor em ordem inversa\n");
    for (int i=TAMANHO-1 ; i >= 0 ; i--) {
        printf(" Nodo [%d] = %d\n", i, vetor[i]);
    }

    //(H) vetores par e impar
    printf("\n\n H)Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o conteúdo de vPares e vImp");
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] % 2 == 0) {
            vetorPar[qtdPar++] = vetor[i];
        } else {
            vetorImpar[qtdImpar++] = vetor[i];
        }
    }

    printf("\n >> Vetor Impar\n");
    for (int i = 0; i < qtdImpar; i++) {
        printf(" Nodo [%d] = %d\n", i, vetorImpar[i]);
    }
    
    printf("\n >> Vetor Par\n");
    for (int i = 0; i < qtdPar; i++) {
        printf(" Nodo [%d] = %d\n", i, vetorPar[i]);
    }

    return 0;
}