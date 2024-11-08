#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30 
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por 
dia. Escreva um programa que:
a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
b. Calcule o consumo total do mês.
c. Calcule a média de consumo diário.
d. Imprima o dia em que houve o maior consumo e o menor consumo de água.
*/

const int DIAS_MES = 30;
const int PONTUACAO_MINIMA = 100;
const int PONTUACAO_MAXIMA = 500;

int sortearNumero() {
    return PONTUACAO_MINIMA + rand() % (PONTUACAO_MAXIMA - PONTUACAO_MINIMA + 1);
}

int main() {
    int consumoDiaMes[DIAS_MES];
    long int consumoTotal = 0;
    float mediaConsumoMes;
    int maiorConsumo = -1, menorConsumo = 10000;
    int diaMaiorConsumo = -1, diaMenorConsumo = -1;

    srand (time(0));

    printf("\n Consumo por dia");
    for (int i = 0; i < DIAS_MES; i++) {
        int consumoDia = sortearNumero();
        consumoDiaMes[i] = consumoDia;
        printf("\n Dia %d: %d litros", i+1, consumoDia);
        consumoTotal += consumoDia;

        if (consumoDia > maiorConsumo) { 
            maiorConsumo = consumoDia;
            diaMaiorConsumo = i; 
        }
        if (consumoDia < menorConsumo) { 
            menorConsumo = consumoDia;
            diaMenorConsumo = i; 
        }
    }

    mediaConsumoMes = consumoTotal / DIAS_MES;

    printf("\n\n Total consumido ao longo do mes: %d litros", consumoTotal);
    printf("\n Media de consumo ao longo do mes: %2.f litros", mediaConsumoMes);
    printf("\n Dia de maior consumo de agua: %d", diaMaiorConsumo + 1);
    printf("\n Dia de menor consumo de agua: %d", diaMenorConsumo + 1);
    
}
