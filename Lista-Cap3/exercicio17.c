#include <stdio.h>

int main() {
    float nota;
    float soma = 0;
    float maior, menor;
    float media;
    int quantidade = 0;

    printf("Digite a nota (-1.0 para encerrar): ");
    scanf("%f", &nota);

    if (nota == -1.0) {
        printf("Nenhum aluno foi avaliado.\n");
    } else {
        maior = nota;
        menor = nota;

        while (nota != -1.0) {
            soma += nota;
            quantidade++;

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }

            printf("Digite a nota (-1.0 para encerrar): ");
            scanf("%f", &nota);
        }

        media = soma / quantidade;

        printf("\nTotal de alunos avaliados: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    }

    return 0;
}