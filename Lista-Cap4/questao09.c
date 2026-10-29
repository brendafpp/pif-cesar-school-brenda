
#include <stdio.h>

int main() {
    float laboratorio, semestral, final, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &laboratorio);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &final);

    if (laboratorio < 0 || laboratorio > 10 ||
        semestral < 0 || semestral > 10 ||
        final < 0 || final > 10) {
        printf("Notas invalidas!\n");
        return 1;
    }

    media = (laboratorio * 2 + semestral * 3 + final * 5) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}
