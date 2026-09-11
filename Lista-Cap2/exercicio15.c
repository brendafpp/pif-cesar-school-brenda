#include <stdio.h>

int main() {
    float nota, soma = 0;
    float mediaSimples, mediaPonderada;
    float somaPonderada = 0;
    int peso;

    for (int i = 1; i <= 4; i++) {
        printf("Digite a nota da prova %d: ", i);
        scanf("%f", &nota);

        soma += nota;

        if (i <= 2) {
            peso = 1;
        } else {
            peso = 2;
        }

        somaPonderada += nota * peso;
    }

    mediaSimples = soma / 4;
    mediaPonderada = somaPonderada / 6;

    printf("\nMedia aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}