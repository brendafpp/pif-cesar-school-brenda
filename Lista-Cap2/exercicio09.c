#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    // Para evitar matematicamente a divisao por zero, o divisor deve ser diferente de zero.
    if (num2 != 0) {
        printf("Divisao real: %.2f\n", (float)num1 / num2);
    } else {
        printf("Divisao real: nao e possivel dividir por zero.\n");
    }

    return 0;
}