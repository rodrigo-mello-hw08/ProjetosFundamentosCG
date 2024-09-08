#include <stdio.h>

int main(){
    char resposta;
    printf("\nQual é o verdadeiro nome do super-herói Batman?");
    printf("\na) Bruce Wayne");
    printf("\nb) Clark Kent");
    printf("\nc) Peter Parker");
    printf("\nd) Tony Stark");
    printf("\ne) Steve Rogers");
    printf("\n Resposta: a");
    scanf("%c", &resposta);

    printf("Você respondeu alternativa %c. A resposta correta é a alternativa a.", resposta);
}