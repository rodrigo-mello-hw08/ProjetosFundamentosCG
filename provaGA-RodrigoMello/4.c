#include <stdio.h>

/*
Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em 
uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8 
medições (um dia completo) e determine:
a) A média de poluição diária.
b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de 
alerta sobre qualidade do ar.
c) Ao final, exiba o número total de medições que geraram um alerta
*/

int main() {
    float medicoes[8];
    float somaMedicoesDia=0;
    float mediaPoluicaoDiaria;
    int qtdDeMedicoesComAlerta=0;
    
    for (int i=0 ; i<8 ; i++) {
        printf("\nInforme o valor da %d° medicao: ", i+1);
        scanf(" %f", &medicoes[i]);
        
        if (medicoes[i] > 150) {
            qtdDeMedicoesComAlerta++;
            printf("Alerta!! Qualidade do ar acima do limite");
        }
        
        somaMedicoesDia += medicoes[i]; 
    }
    
    mediaPoluicaoDiaria = somaMedicoesDia / 8;
    printf("\nA media de poluicao diaria foi de: %g ppm", mediaPoluicaoDiaria);
    printf("\nNúmero total de medicoes com alerta: %d", qtdDeMedicoesComAlerta);
    
    return 0;
}