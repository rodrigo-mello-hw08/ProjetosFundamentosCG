#include <stdio.h>
#include <ctype.h>

/*
(1.5 pts) Programa “Cebolinha”: ler uma string (array de char) e 
converter todos os r's em l's.
Exemplo:
    Entrada:
    O rato roeu a roupa do rei de Roma
    Saída:
    O lato loeu a loupa do lei de Loma
OBS: para ler uma string com espaços, podemos usar o comando fgets():
char myString[100];
printf("Digite uma palavra ou frase: ");
fgets(myString, sizeof(myString), stdin);
printf("String digitada: %s", myString);
*/

const int TAMANHO_FRASE = 100;

int main() {
    char frase[TAMANHO_FRASE];
    char fraseCebolinha[TAMANHO_FRASE];

    printf("\nDigite uma palavra ou frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < TAMANHO_FRASE; i++) {
        if (frase[i] == 'r') {
            fraseCebolinha[i] = 'l';
        } else if (frase[i] == 'R'){
            fraseCebolinha[i] = 'L';
        } else {
            fraseCebolinha[i] = frase[i];
        }        
    }
    printf("Frase cebolinha: %s", fraseCebolinha);    

    return 0;
}
