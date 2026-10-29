
#include <stdio.h>

int main() {
    int idade, tempoServico;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu tempo de servico (anos): ");
    scanf("%d", &tempoServico);

    if (idade < 0 || tempoServico < 0) {
        printf("Dados invalidos!\n");
        return 1;
    }

    if (idade >= 65 || tempoServico >= 30 ||
        (idade >= 60 && tempoServico >= 25)) {
        printf("Voce pode se aposentar!\n");
    } else {
        printf("Voce ainda nao pode se aposentar.\n");
    }

    return 0;
}
