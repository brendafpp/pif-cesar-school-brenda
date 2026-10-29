
#include <stdio.h>

int main() {
    int valorCompra, valorPago, troco, restante;
    int ced100, ced50, ced20, ced10, ced5, ced2;

    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valorCompra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%d", &valorPago);

    if (valorCompra <= 0 || valorPago <= 0) {
        printf("Erro: Os valores devem ser positivos!\n");
        return 1;
    }

    if (valorPago < valorCompra) {
        printf("Erro: Valor entregue insuficiente!\n");
        return 1;
    }

    troco = valorPago - valorCompra;
    restante = troco;

    ced100 = restante / 100;
    restante = restante % 100;

    ced50 = restante / 50;
    restante = restante % 50;

    ced20 = restante / 20;
    restante = restante % 20;

    ced10 = restante / 10;
    restante = restante % 10;

    ced5 = restante / 5;
    restante = restante % 5;

    ced2 = restante / 2;
    restante = restante % 2;

    printf("\nTroco total: R$ %d\n", troco);

    if (ced100 > 0)
        printf("%d cedula(s) de R$ 100\n", ced100);

    if (ced50 > 0)
        printf("%d cedula(s) de R$ 50\n", ced50);

    if (ced20 > 0)
        printf("%d cedula(s) de R$ 20\n", ced20);

    if (ced10 > 0)
        printf("%d cedula(s) de R$ 10\n", ced10);

    if (ced5 > 0)
        printf("%d cedula(s) de R$ 5\n", ced5);

    if (ced2 > 0)
        printf("%d cedula(s) de R$ 2\n", ced2);

    if (restante > 0)
        printf("Valor restante: R$ %d (sem cedula disponivel)\n", restante);

    return 0;
}
