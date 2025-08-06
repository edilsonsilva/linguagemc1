#include <stdio.h>
#include <stdlib.h>
int main() {
    system("clear");
    int linha = 1;
    int altura = 10;

    while (linha <= altura) {
        int espacos = altura - linha;
        while (espacos > 0) {
            printf(" ");
            espacos--;
        }

        int simbolos = 2 * linha - 1;
        while (simbolos > 0) {
            printf("*");
            simbolos--;
        }

        printf("\n");
        linha++;
    }

    return 0;
}