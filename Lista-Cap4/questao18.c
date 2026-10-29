
#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            resultado = temperatura * 1.8 + 32;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;

        case 2:
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;

        case 3:
            resultado = (temperatura - 32) / 1.8;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;

        case 4:
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
    }

    return 0;
}
