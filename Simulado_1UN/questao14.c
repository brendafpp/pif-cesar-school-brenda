#include <stdio.h>

int main() {
    int senha, tentativas = 0;
    int senhaSecreta = 2026;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        printf("Senha incorreta!\n");
        tentativas++;
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}