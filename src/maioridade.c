#include <stdio.h>

int main(){
    int idade;
    printf("Digite a sua idade e tecle Enter\n");
    scanf("%d",&idade);
    if(idade > 17){
        printf("Você está autorizado a entrar\n");
    }
    else{
        printf("Você não está autorizado\n");
    }
    return 0;
}