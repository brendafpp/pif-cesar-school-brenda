
#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("\n===== CARGOS =====\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");

    printf("Digite o codigo do cargo: ");
    scanf("%d", &cargo);

    if (salario < 0) {
        printf("Salario invalido!\n");
        return 1;
    }

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;

        case 2:
            if (salario <= 5000) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;

        case 3:
            percentual = 0.08;
            break;

        default:
            printf("Cargo invalido!\n");
            return 1;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("\nValor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
