#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10) + (horasExtras * 15);

    imposto = salarioBruto > 12000
              ? (salarioBruto - 12000) * 0.10
              : 0;

    salarioLiquido = salarioBruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}