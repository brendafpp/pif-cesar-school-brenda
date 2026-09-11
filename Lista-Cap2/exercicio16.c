#include <stdio.h>

int main() {
    float alturaDegrau, alturaTotal;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &alturaTotal);

    alturaTotal = alturaTotal * 100;

    quantidadeDegraus = (int)(alturaTotal / alturaDegrau);

    if (alturaTotal / alturaDegrau > quantidadeDegraus) {
        quantidadeDegraus++;
    }

    printf("Quantidade minima de degraus: %d\n", quantidadeDegraus);

    return 0;
}