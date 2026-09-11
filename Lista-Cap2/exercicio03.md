## Questão 03. Formatação de Saída em Bases Numéricas e ASCII

Para realizar a tarefa, basta ler um número inteiro com `scanf()` e utilizar os especificadores `%d`, `%x`, `%o` e `%c` no `printf()`:

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}