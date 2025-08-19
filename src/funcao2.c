#include <stdio.h>
#include "../lib/funcao2.h"

int main(){
    mensagem();
    printf("\n");
    separador();
    printf("\n");
    printf("%d\n",precoTotal(5,10));
    char *y = "pedro oliveira";
    int x = sizeof(y);
    printf("%d\n %s\n",x,y);
    return 0;
}