#include <stdio.h>

int main() {
    int NUM, i;
    int encontrou = 0;

    printf("Digite um numero limite positivo: ");
    scanf("%d", &NUM);

    printf("Multiplos de 3 e 5 ao mesmo tempo:\n");

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero satisfaz a condicao.");
    }

    return 0;
}