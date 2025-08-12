#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Digite um número\n");
    scanf("%d",&n);
    for(i = n ; i >= 0 ; i--){
        printf("%d\n",i);
    }
    return 0;
}