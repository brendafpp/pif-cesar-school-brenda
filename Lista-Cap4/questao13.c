
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("===== CALCULADORA =====\n");
    printf("+ - Soma\n");
    printf("- - Subtracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    printf("^ - Potenciacao\n");

    printf("Escolha uma operacao: ");
    scanf(" %c", &operacao);

    if (operacao != '+' && operacao != '-' &&
        operacao != '*' && operacao != '/' &&
        operacao != '^') {
        printf("Operacao invalida!\n");
        return 1;
    }

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;

        case '-':
            resultado = num1 - num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro: Divisao por zero!\n");
                return 1;
            }
            resultado = num1 / num2;
            break;

        case '^':
            resultado = pow(num1, num2);
            break;

        default:
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
