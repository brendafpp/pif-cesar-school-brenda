
#include <stdio.h>

int main() {
    int horas;
    float valorTotal;

    printf("Digite o tempo de permanencia (horas): ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: Tempo de permanencia invalido!\n");
        return 1;
    }

    if (horas <= 2) {
        valorTotal = horas * 2.00;
    } else if (horas <= 4) {
        valorTotal = 2 * 2.00 + (horas - 2) * 2.50;
    } else {
        valorTotal = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
    }

    printf("\nTempo total: %d hora(s)\n", horas);
    printf("Valor a pagar: R$ %.2f\n", valorTotal);

    return 0;
}
