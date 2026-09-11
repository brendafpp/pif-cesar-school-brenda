## Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas

### a) Por que o uso de funções contidas em `<conio.h>` deve ser evitado em sistemas modernos?

A biblioteca `<conio.h>` **não faz parte do padrão ANSI C**, sendo uma biblioteca legada que foi muito utilizada principalmente em ambientes Windows/DOS.

Funções como `getch()` e `getche()` podem não estar disponíveis em sistemas como **Linux e macOS**, causando problemas de **portabilidade**. Por isso, em programas modernos e que precisam funcionar em diferentes sistemas operacionais, é recomendado utilizar as bibliotecas e funções que fazem parte do padrão da linguagem C.

### b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca `<stdio.h>`?

A biblioteca padrão `<stdio.h>` fornece funções portáveis para entrada e saída de caracteres, como:

- `getchar()` → lê um caractere da entrada padrão (`stdin`).
- `putchar()` → exibe um caractere na saída padrão (`stdout`).

### c) Trecho de código para leitura robusta de um caractere

Para ler um caractere e ignorar eventuais quebras de linha ('\n') residuais no buffer, podemos utilizar um while para descartar esses caracteres antes de realizar a leitura:

``` c
#include <stdio.h>

int main() {
    int caractere;

    // Ignora quebras de linha residuais
    while ((caractere = getchar()) == '\n');

    printf("Caractere lido: %c\n", caractere);

    return 0;
}