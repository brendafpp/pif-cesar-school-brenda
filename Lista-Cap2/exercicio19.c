#include <stdio.h>
#include <math.h>

int main() {
    int dias;
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.00;
    desconto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - desconto;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}