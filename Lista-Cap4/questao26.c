
#include <stdio.h>

int main() {
    int mes, ano, dias;
    char *nomeMes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || ano <= 0) {
        printf("Erro: Mes ou ano invalido!\n");
        return 1;
    }

    switch (mes) {
        case 1:
            nomeMes = "Janeiro";
            dias = 31;
            break;

        case 2:
            nomeMes = "Fevereiro";
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;

        case 3:
            nomeMes = "Marco";
            dias = 31;
            break;

        case 4:
            nomeMes = "Abril";
            dias = 30;
            break;

        case 5:
            nomeMes = "Maio";
            dias = 31;
            break;

        case 6:
            nomeMes = "Junho";
            dias = 30;
            break;

        case 7:
            nomeMes = "Julho";
            dias = 31;
            break;

        case 8:
            nomeMes = "Agosto";
            dias = 31;
            break;

        case 9:
            nomeMes = "Setembro";
            dias = 30;
            break;

        case 10:
            nomeMes = "Outubro";
            dias = 31;
            break;

        case 11:
            nomeMes = "Novembro";
            dias = 30;
            break;

        case 12:
            nomeMes = "Dezembro";
            dias = 31;
            break;
    }

    printf("\nMes: %s\n", nomeMes);
    printf("Ano: %d\n", ano);
    printf("Quantidade de dias: %d\n", dias);

    return 0;
}
