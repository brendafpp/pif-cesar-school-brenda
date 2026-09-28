#include <stdio.h>

void versaoFor() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n");
}

void versaoWhile() {
    int i = 0;

    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n");
}

void versaoDoWhile() {
    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
}

int main() {
    printf("Versao com for:\n");
    versaoFor();

    printf("\nVersao com while:\n");
    versaoWhile();

    printf("\nVersao com do-while:\n");
    versaoDoWhile();

    return 0;
}

/*
Resposta:
A estrutura mais adequada para este caso é o for,pois sabemos exatamente o início (0), o fim (100) e o incremento (1). O for deixa essas três informações organizadas no próprio cabeçalho do laço.
*/