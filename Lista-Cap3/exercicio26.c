#include <stdio.h>

int main() {
    int A, B, i, j, divisores;
    int soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("Numeros primos no intervalo:\n");

    for (i = A; i <= B; i++) {
        divisores = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (i > 1 && divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}