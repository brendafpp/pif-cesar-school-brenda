#include <stdio.h>

int main() {
    int saque, quantidade;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    quantidade = 0;

    while (saque >= 100) {
        saque -= 100;
        quantidade++;
    }
    printf("Cedulas de R$ 100: %d\n", quantidade);

    quantidade = 0;

    while (saque >= 50) {
        saque -= 50;
        quantidade++;
    }
    printf("Cedulas de R$ 50: %d\n", quantidade);

    quantidade = 0;

    while (saque >= 20) {
        saque -= 20;
        quantidade++;
    }
    printf("Cedulas de R$ 20: %d\n", quantidade);

    quantidade = 0;

    while (saque >= 10) {
        saque -= 10;
        quantidade++;
    }
    printf("Cedulas de R$ 10: %d\n", quantidade);

    quantidade = 0;

    while (saque >= 5) {
        saque -= 5;
        quantidade++;
    }
    printf("Cedulas de R$ 5: %d\n", quantidade);

    quantidade = 0;

    while (saque >= 2) {
        saque -= 2;
        quantidade++;
    }
    printf("Cedulas de R$ 2: %d\n", quantidade);

    if (saque != 0) {
        printf("Nao foi possivel completar o saque.\n");
    }

    return 0;
}