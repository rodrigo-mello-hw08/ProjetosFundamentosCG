#include <stdio.h>
#include <string.h>

const int TAMANHO_ARRAY_INGREDIENTES = 7;
const int TAMANHO_ARRAY_POCOES = 7;

/* Tipos*/
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

/* Inicializadores de struct*/
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

/* Inicializadores de listas*/
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

/* Printers */
void imprimirIngrediente(Ingrediente ingrediente) {
    printf("\n%s: quantidade %d %s", ingrediente.nome, ingrediente.quantidade, ingrediente.unidadeMedida);
}

void imprimirPocao(Pocao pocao) {
    printf("\n%s", pocao.nome);
}

int main() {
    Ingrediente ingredientes[TAMANHO_ARRAY_INGREDIENTES];
    inicializarIngredientes(ingredientes);

    for (int i = 0; i < 7; i++) { 
        imprimirIngrediente(ingredientes[i]);
    }

    Pocao pocoes[TAMANHO_ARRAY_POCOES];
    inicializarPocoes(pocoes);

    for (int i = 0; i < TAMANHO_ARRAY_POCOES; i++) {
        imprimirPocao(pocoes[i]);
    }
    
    return 0;
}
