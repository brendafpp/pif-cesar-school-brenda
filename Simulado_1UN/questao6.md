Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3) — Analise o
programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um
comando de desvio e controle de escopo interno:

#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
    if (i == 5) continue;
    if (i == 8) break;
    int soma = 0;
    soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");

return 0;
}

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
Porque a variável soma foi declarada dentro do bloco do for, portanto seu escopo termina ao fechar. O printf está fora desse escopo e não consegue acessar soma.

b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e
break no fluxo?

i = 1: executa normalmente.
i = 2: executa normalmente.
i = 3: executa normalmente.
i = 4: executa normalmente.
i = 5: continue → pula o restante da iteração.
i = 6: executa normalmente.
i = 7: executa normalmente.
i = 8: break → encerra o for.
i = 9 e 10: não são executadas.


c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no
console.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}

**Soma final = 115**