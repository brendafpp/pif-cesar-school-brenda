
#include <stdio.h>

int main() {
    float valorCompra, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    printf("\n===== FORMA DE PAGAMENTO =====\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = valorCompra * 0.90;
            comissao = valorFinal * 0.05;

            printf("\nPagamento a vista\n");
            printf("Valor com desconto: R$ %.2f\n", valorFinal);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        case 2:
            valorFinal = valorCompra;
            parcela = valorFinal / 3;
            comissao = valorFinal * 0.05;

            printf("\nPagamento parcelado\n");
            printf("Valor total: R$ %.2f\n", valorFinal);
            printf("3 parcelas de: R$ %.2f\n", parcela);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
