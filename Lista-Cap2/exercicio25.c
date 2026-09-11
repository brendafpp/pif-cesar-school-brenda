#include <stdio.h>
#include <math.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}