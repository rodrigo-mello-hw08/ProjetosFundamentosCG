#include <stdio.h>
#include <ctype.h>

/*
Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do 
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes) 
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
d) dependentes com mais de 60 anos pagam R$ 480
*/


int calcularPreco(int idade) {
    if (idade > 60) {
        return 480;
    } else if (idade >= 31) {
        return 395;
    } else if (idade >= 10) {
        return 220;
    } else if (idade >= 0) {
        return 100;
    } 
    
    printf("\n Idade invalida!!");
    return 0;
}

int cadastrarDependentes(int valorParcial) {
    char desejoContinuarCadastrando = 'S';
    int idadeDependente;
    while('S' == toupper(desejoContinuarCadastrando)) {
        printf("\nInforme a idade do dependente: ");
        scanf(" %d", &idadeDependente);
        valorParcial += calcularPreco(idadeDependente);
        
        printf("\nSubtotal do plano: R$ %d", valorParcial);
        
        printf("\nDeseja cadastrar mais algum dependente? ");
        scanf(" %c", &desejoContinuarCadastrando);
    }
    return valorParcial;
}

int main() {
    int idadeTitular, qtdDependentes, valorAcumulado;
    char cadastroDependente;
    
    printf("\nInforme a sua idade: ");
    scanf(" %d", &idadeTitular);
    
    valorAcumulado = calcularPreco(idadeTitular) + 300;
    
    printf("\nDeseja cadastrar algum dependente? ");
    scanf(" %c", &cadastroDependente);
    
    if('S' == toupper(cadastroDependente)) {
        valorAcumulado = cadastrarDependentes(valorAcumulado);    
    }
    
    printf("\nO seu plano deu um total de R$ %d", valorAcumulado);
    
    return 0;
}
