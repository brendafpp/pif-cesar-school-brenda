
#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Dados invalidos!\n");
        return 1;
    }

    if (nota >= 9.0) {
        if (faltas <= 20) {
            conceito = 'A';
        } else {
            conceito = 'B';
        }
    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            conceito = 'B';
        } else {
            conceito = 'C';
        }
    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            conceito = 'C';
        } else {
            conceito = 'D';
        }
    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            conceito = 'D';
        } else {
            conceito = 'E';
        }
    } else {
        conceito = 'E';
    }

    printf("Conceito do aluno: %c\n", conceito);

    return 0;
}
