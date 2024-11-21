#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h> 

const int TAMANHO_ARRAY_INGREDIENTES = 7;
const int TAMANHO_ARRAY_POCOES = 5;

/* Tipos */
typedef struct {
    char nome[30]; 
    int quantidade; 
    char unidadeMedida[5];
} Ingrediente;

typedef struct {
    char nome[30];
    int ingredientes[7]; 
    int quantidades[7]; 
} Pocao;

/* limpar tela */
void limparTela() {
    printf("\nCarregando");
    for (int i = 0; i < 5; i++) {
        printf(".");
        sleep(1);
    }
    
    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

/* Inicializadores de struct */
Ingrediente inicializarIngrediente(char nome[30], int quantidade, char unidadeMedida[5]) {
    Ingrediente ingrediente;
    strcpy(ingrediente.nome, nome);
    ingrediente.quantidade = quantidade;
    strcpy(ingrediente.unidadeMedida, unidadeMedida);
    return ingrediente;
}

Pocao inicializarPocao(char nome[30], int ingredientes[7], int quantidades[7]) {
    Pocao pocao;
    strcpy(pocao.nome, nome);
    memcpy(pocao.ingredientes, ingredientes, sizeof(pocao.ingredientes));
    memcpy(pocao.quantidades, quantidades, sizeof(pocao.quantidades));
    return pocao;
}

/* Inicializadores de listas */
void inicializarIngredientes(Ingrediente* ingredientes) {
    ingredientes[0] = inicializarIngrediente("Po de Fenix", 100, "g");
    ingredientes[1] = inicializarIngrediente("Essencia Celestial", 50, "ml");
    ingredientes[2] = inicializarIngrediente("Raiz de Dragao", 45, "g");
    ingredientes[3] = inicializarIngrediente("Orvalho Lunar", 30, "ml");
    ingredientes[4] = inicializarIngrediente("Flores secas", 200, "g");
    ingredientes[5] = inicializarIngrediente("Elixir amargo", 20, "ml");
    ingredientes[6] = inicializarIngrediente("Lagrimas de unicornio", 15, "ml");
}

void inicializarPocoes(Pocao* pocoes) {
    int ingredientesPocao0[7] = {0, 1, 4, 6, -1, -1, -1};
    int quantidadesPocoes0[7] = {30, 20, 20, 10, -1, -1, -1};
    pocoes[0] = inicializarPocao("Pocao de Cura", ingredientesPocao0, quantidadesPocoes0);

    int ingredientesPocao1[7] = {3, 2, 4, -1, -1, -1, -1};
    int quantidadesPocoes1[7] = {20, 30, 30, -1, -1, -1, -1};
    pocoes[1] = inicializarPocao("Pocao Forca da Floresta", ingredientesPocao1, quantidadesPocoes1);

    int ingredientesPocao2[7] = {1, 2, -1, -1, -1, -1, -1};
    int quantidadesPocoes2[7] = {30, 50, -1, -1, -1, -1, -1};
    pocoes[2] = inicializarPocao("Pocao Sabedoria da Riqueza", ingredientesPocao2, quantidadesPocoes2);

    int ingredientesPocao3[7] = {3, 4, 6, -1, -1, -1, -1};
    int quantidadesPocoes3[7] = {10, 50, 5, -1, -1, -1, -1};
    pocoes[3] = inicializarPocao("Pocao Sorte no Amor", ingredientesPocao3, quantidadesPocoes3);

    int ingredientesPocao4[7] = {5, 2, -1, -1, -1, -1, -1};
    int quantidadesPocoes4[7] = {10, 15,-1, -1, -1, -1, -1};
    pocoes[4] = inicializarPocao("Pocao Malvada", ingredientesPocao4, quantidadesPocoes4);
}

/* acoes */
void exibirItens(Ingrediente* ingredientes) {
    for (int i = 0; i < TAMANHO_ARRAY_INGREDIENTES; i++) {
        printf("\n%d. %s: %d %s", 
            i+1, 
            ingredientes[i].nome, 
            ingredientes[i].quantidade, 
            ingredientes[i].unidadeMedida);
    }
    printf("\n");
}

void estoqueAtual(Ingrediente* ingredientes) {
    printf("\nEstoqueAtual:");
    exibirItens(ingredientes);
}

void consultarIngredientes(Ingrediente* ingredientes) {
    printf("\nIngredientes Disponiveis:");
    exibirItens(ingredientes);
}

void reabastecerIgrediente(Ingrediente* ingredientes) {
    estoqueAtual(ingredientes);
    int item = -1;
    int quantidade = -1;
    while (item < 1) {
        printf("\nInforme o item no qual voce deseja reabastecer: ");
        scanf(" %d", &item);
    }
    while (quantidade < 1) {
        printf("\nInforme a quantidade que deseja rebastecer: ");
        scanf(" %d", &quantidade);
    }
    ingredientes[item-1].quantidade += quantidade;
    printf("Item %s foi reabastecido, nova quantidade: %d %s\n", 
        ingredientes[item-1].nome, 
        ingredientes[item-1].quantidade,
        ingredientes[item-1].unidadeMedida);
}

// void prepararPocao(Ingrediente* ingredientes, Pocao* pocoes) {
    // bool possuiIngredientes = false;
    // int item = -1;
    // while (item < 1) {
    //     printf("\nInforme a pocao que deseja preparar: ");
    //     scanf(" %d", &item);
    // }
// }

int obterNumeroIngredientes(Pocao pocao) {
    int numero = 0;
    for (int i = 0; i < TAMANHO_ARRAY_INGREDIENTES; i++) {
        if (pocao.ingredientes[i] > 1) {
            numero++;
        }        
    }
    return numero;
}


void exibirPocoes(Pocao* pocao, Ingrediente* ingrediente) {
    printf("\nPocoes");
    for (int i = 0; i < TAMANHO_ARRAY_POCOES; i++) {
        printf("\n%d. %s", i+1, pocao[i].nome);
        int numeroIngredientesPocao = obterNumeroIngredientes(pocao[i]);
        printf("\nIngredientes:");
        for (int j = 0; j < numeroIngredientesPocao; j++) {
            printf("\n%d - %s %d %s", 
                j+1, 
                ingrediente[j].nome, 
                ingrediente[j].quantidade, 
                ingrediente[j].unidadeMedida);
        }
        printf("\n");
    }
}

int lerOpcaoMenu() {
    int opcao = -1;
    while (opcao < 1) {
        printf("\n1. Consultar Ingredientes Disponiveis");
        printf("\n2. Preparar Pocao");
        printf("\n3. Reabastecer Ingrediente");
        printf("\n4. Sair do Programa");
        printf("\n5. Exibir possiveis pocoes\n");
        scanf(" %d", &opcao);    
    }
    return opcao;
}

int main() {
    Ingrediente ingredientes[TAMANHO_ARRAY_INGREDIENTES];
    inicializarIngredientes(ingredientes);

    Pocao pocoes[TAMANHO_ARRAY_POCOES];
    inicializarPocoes(pocoes);

    int opcao = -1;
    while (opcao != 4) {        
        printf("\nBem vindo ao sistema de gerenciamento de pocoes e alquimia!");
        opcao = lerOpcaoMenu();
        limparTela();
        switch (opcao) {
            case 1: 
                consultarIngredientes(ingredientes); break;
            case 3:
                reabastecerIgrediente(ingredientes); break;
            case 4: 
                printf("Saindo do sistema"); break;
            case 5:
                exibirPocoes(pocoes, ingredientes); break;
            default:
                printf("Erro: opcao nao reconhecida"); break;
        }
    }
    
    return 0;
}
