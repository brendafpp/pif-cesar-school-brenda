
#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasNoMes;
    char *nomeMes;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || ano <= 0) {
        printf("Data invalida!\n");
        return 1;
    }

    switch (mes) {
        case 1:
            nomeMes = "janeiro";
            diasNoMes = 31;
            break;
        case 2:
            nomeMes = "fevereiro";
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                diasNoMes = 29;
            } else {
                diasNoMes = 28;
            }
            break;
        case 3:
            nomeMes = "marco";
            diasNoMes = 31;
            break;
        case 4:
            nomeMes = "abril";
            diasNoMes = 30;
            break;
        case 5:
            nomeMes = "maio";
            diasNoMes = 31;
            break;
        case 6:
            nomeMes = "junho";
            diasNoMes = 30;
            break;
        case 7:
            nomeMes = "julho";
            diasNoMes = 31;
            break;
        case 8:
            nomeMes = "agosto";
            diasNoMes = 31;
            break;
        case 9:
            nomeMes = "setembro";
            diasNoMes = 30;
            break;
        case 10:
            nomeMes = "outubro";
            diasNoMes = 31;
            break;
        case 11:
            nomeMes = "novembro";
            diasNoMes = 30;
            break;
        case 12:
            nomeMes = "dezembro";
            diasNoMes = 31;
            break;
    }

    if (dia < 1 || dia > diasNoMes) {
        printf("Data invalida!\n");
        return 1;
    }

    printf("%d de %s de %d\n", dia, nomeMes, ano);

    return 0;
}
