#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido! O fatorial nao existe para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial = fatorial * i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}