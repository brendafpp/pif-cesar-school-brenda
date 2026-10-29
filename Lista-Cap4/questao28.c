
#include <stdio.h>

int main() {
    int opcao;

    printf("===== ATENDIMENTO BANCARIO =====\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce sera direcionado para a consulta de saldo.\n");
            break;

        case 2:
            printf("Voce sera direcionado para a emissao de extrato.\n");
            break;

        case 3:
            printf("Voce sera direcionado para o setor de transferencias.\n");
            break;

        case 4:
            printf("Aguarde, voce sera direcionado para um atendente.\n");
            break;

        default:
            printf("Erro: Opcao invalida!\n");
    }

    return 0;
}
