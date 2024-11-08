#include <stdio.h>
#include <stdbool.h> 

/*
Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um 
programa que:
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
b. Calcule o total de passos dados na semana.
c. Calcule a média diária de passos.
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim, 
informe quais dias a meta foi alcançada.
*/

int const DIAS_SEMANA = 7;
int const META_DIARIA_PASSOS = 1000;

void printarDiasMetasAlcancadas(bool metaBatida, int passosSemana[DIAS_SEMANA]) {
    bool primeiroDia = true;
    printf("\n A meta diaria de passos foi alcada nos dias: ");    
    for (int i = 0; i < DIAS_SEMANA; i++) {
        if (passosSemana[i] >= META_DIARIA_PASSOS) {
            if (primeiroDia) {
                printf(" %d", i+1);
                primeiroDia = false;
            } else {            
                printf(", %d", i+1);
            }
        }    
    }
    
}

int main() {
    int passosSemana[DIAS_SEMANA];
    float somaPassosSemana = 0;
    float mediaPassosSemana;
    bool ultrapassou10Mil = false;


    printf("\n Informe a quantidade de passos realizado para cada dia da semana\n");
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("\n Dia %d: ", i+1);
        scanf(" %d", &passosSemana[i]);
        somaPassosSemana += passosSemana[i];
        if (!ultrapassou10Mil) { 
            ultrapassou10Mil = passosSemana[i] >= META_DIARIA_PASSOS; 
        }
        
    }
    mediaPassosSemana = somaPassosSemana / DIAS_SEMANA;

    printf("\n Total de passos dados na semana: %0.f", somaPassosSemana);
    printf("\n Media de passos dados na semana: %2.f", mediaPassosSemana);
    if (!ultrapassou10Mil) {
        printf("\n A meta de %d passos diarios nao foi alcancada em nenhum dia", META_DIARIA_PASSOS);
    } else {
        printarDiasMetasAlcancadas(ultrapassou10Mil, passosSemana);
    }
    
    return 0;
}
