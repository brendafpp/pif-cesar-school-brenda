#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero positivo.\n");
    } else if (n == 1) {
        printf("Termo 1: 1\n");
    } else {
        printf("Termos da sequencia:\n");
        printf("1 1");

        for (i = 3; i <= n; i++) {
            proximo = a + b;
            printf(" %d", proximo);
            a = b;
            b = proximo;
        }

        printf("\nN-esimo termo: %d\n", b);
    }

    return 0;
}