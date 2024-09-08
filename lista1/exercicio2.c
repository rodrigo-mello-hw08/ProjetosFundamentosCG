#include <stdio.h>

int main(){
    char nome[30];

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nOla, %s", nome);
}