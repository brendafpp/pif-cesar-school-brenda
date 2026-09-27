#include <stdio.h>
#include <math.h>

int main(){
    int diasTrabalho;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalho);

    float salarioBruto = 45*diasTrabalho;
    float salarioLiquido;
    float gratificacao  = salarioBruto*0.05;
    float imposto = salarioBruto*0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n.:: HOLERITE ::.\n");
    printf("Dias Trabalhados: %d\n", diasTrabalho);
    printf("Salário Bruto: %.2f\n", salarioBruto);
    printf("Desconto Gratificação:: %.2f\n", gratificacao);
    printf("Desconto Imposto: %.2f\n", imposto);
    printf("Salário Líquido: %.2f\n", salarioLiquido);


    return 0;
}