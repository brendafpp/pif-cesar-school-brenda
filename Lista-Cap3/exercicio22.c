#include <stdio.h>

int main() {
    int n;
    int numero = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido! Digite um numero positivo.\n");
    } else {
        for (int linha = 1; linha <= n; linha++) {

            for (int coluna = 1; coluna <= linha; coluna++) {
                printf("%d", numero);
                numero++;

                if (coluna < linha) {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}