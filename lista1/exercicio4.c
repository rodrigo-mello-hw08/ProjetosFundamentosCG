#include <stdio.h>
#include <stdlib.h>

void exibirOpcoes(char alternativas[5][100]) {
    printf("\n----------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("\n [%d]) %s", i+1, alternativas[i]);
    }
    
    printf("\n Qual a alternativa correta? \n");
}

void imprimirResultado(int gabarito, int resposta) {
    if (resposta == gabarito) {
        printf("\nVocê acertou!!!");
    } else {
        printf("\nResposta errada, a alternativa correta era [%d]", gabarito);
    }
    return;
}

int main() {
    int resposta;
    int gabarito;
    char pergunta[100];
    char alternativas[5][100];

    printf("\n Digite a pergunta a ser respondida:");
    scanf("%s", &pergunta);
    printf("Insira 5 alterantivas para sua pergunta anterior\n");

    for (int i = 0; i < 5; i++){
        printf("Insira a alternativa para a pergunta [%d]: ", i+1);
        scanf("%s", &alternativas[i]);
    }
    printf("\nInforme a resposta da pergunta:");
    scanf("%d", &gabarito);

    exibirOpcoes(alternativas);
    printf("Selecione a resposta da pergunta\n");
    scanf("%d", &resposta);

    imprimirResultado(gabarito, resposta);
    return 0;
    //Todo: faltou terminar -- problema scanf
}