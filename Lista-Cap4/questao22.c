
#include <stdio.h>

int main() {
    float valor, imposto, valorFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("\n===== ESTADOS =====\n");
    printf("1 - MG (7%%)\n");
    printf("2 - SP (12%%)\n");
    printf("3 - RJ (15%%)\n");
    printf("4 - MS (8%%)\n");

    printf("Escolha o estado de destino: ");
    scanf("%d", &estado);

    if (valor < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    switch (estado) {
        case 1:
            imposto = 0.07;
            break;

        case 2:
            imposto = 0.12;
            break;

        case 3:
            imposto = 0.15;
            break;

        case 4:
            imposto = 0.08;
            break;

        default:
            printf("Erro: Estado invalido!\n");
            return 1;
    }

    valorFinal = valor + (valor * imposto);

    printf("Valor original: R$ %.2f\n", valor);
    printf("Valor do imposto: R$ %.2f\n", valor * imposto);
    printf("Preco final: R$ %.2f\n", valorFinal);

    return 0;
}
