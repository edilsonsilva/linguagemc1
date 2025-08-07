#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int valor;
    int qtd=0;
    int i;
    int vetor[qtd];
    printf("Digite um valor\n");
    scanf("%i",&valor);
    while(valor != 0){
        vetor[qtd] = valor;       
        qtd++;
        printf("Digite outro valor\n");
        scanf("%i",&valor);
    }

    printf("\n======== Valores digitados pelo usuário ==========\n");
    for(i = 0 ; i < qtd ; i++){
        printf("%i | ",vetor[i]);
    }
    printf("\n");

}