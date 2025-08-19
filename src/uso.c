#include <stdio.h>
#include <stdlib.h>
#include "../lib/criararquivo.h"

int main(){

    char *rs = criar("files/principal.txt","novo texto\n");
    printf("%s",rs);
    return 0;

}