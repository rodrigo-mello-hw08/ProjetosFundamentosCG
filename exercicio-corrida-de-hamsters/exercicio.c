#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

int deslocar(int numero, int posicaoAtual) {
    switch(numero) {
        case 1: 
            return 1;
        case 2:
            return 2;
        case 3: 
            return 0;
        case 4: 
            return posicaoAtual < 1 ? 0 : -1;
        case 5: 
            if (posicaoAtual < 1) {
                return 0;
            } 
            return posicaoAtual < 2 ? -1 : -2;

        default:
            printf("Erro!!!");
            return 0;
    }
}

void imprimirPosicao(int posicao, int avanco) {
    for(int i = 0; i <= 12 ; i++) {
        i <= posicao ? printf("•") : printf("0");
    }

    avanco < 0 ? printf(" [") : printf(" [+");
    printf("%d]", avanco);
}

void imprimirPosicoes(int posicaoHamster1, int avancoH1, int posicaoHamster2, int avancoH2) {
    printf("H1: ");   
    imprimirPosicao(posicaoHamster1, avancoH1);
    printf("\nH2: "); 
    imprimirPosicao(posicaoHamster2, avancoH2);
}

void imprimirResultado(int posicaoHamster1, int posicaoHamster2) {
    if (posicaoHamster1 >= 12 && posicaoHamster2 >= 12) {
        printf("\nOs hamster empataram!!!");
    } else if (posicaoHamster1 >= 12 && posicaoHamster2 < 12){
        printf("\nOs hamster 1 venceu!!!");
    } else {
        printf("\nOs hamster 2 venceu!!!");
    }
}

void limparTela() {
    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

int main() {
    srand(time(0));
    int posicaoHamster1 = 0, posicaoHamster2 = 0;
    int numSorteadoH1, numSorteadoH2, avancoH1, avancoH2;
    bool terminou = false;
    int rodada = 1;
    
    while(!terminou) {
        limparTela();
        printf("\n-----------Rodada-%d--------------------\n", rodada++);
        numSorteadoH1 = sortearNumero(1, 5);
        avancoH1 = deslocar(numSorteadoH1, posicaoHamster1);
        posicaoHamster1 += avancoH1;
        
        numSorteadoH2 = sortearNumero(1, 5);
        avancoH2 = deslocar(numSorteadoH2, numSorteadoH2);
        posicaoHamster2 += avancoH2;
        
        imprimirPosicoes(posicaoHamster1, avancoH1, posicaoHamster2, avancoH2);
        terminou = (posicaoHamster1 >= 12 || posicaoHamster2 >= 12);
        printf("\n---------------------------------------\n");
        sleep(1);
    }
    
    imprimirResultado(posicaoHamster1, posicaoHamster2);
    return 0;
}