#include <stdio.h>
#include <stdlib.h>
#include "../lib/criararquivo.h"

int main(){

    char *rs = criar("files/texto2.txt","Hoje é sexta-feira\n");
    printf("%s",rs);
    return 0;
}