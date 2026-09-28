#include <stdio.h>

int main() {
    float valor;
    float soma = 0;
    float media;
    int quantidade = 0;

    printf("Digite um valor negativo para encerrar.\n");

    printf("Digite um valor: ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor: ");
        scanf("%f", &valor);
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\nQuantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    return 0;
}