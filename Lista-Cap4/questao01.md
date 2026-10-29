
## Questão 01 — Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

**a)** Ao escrever `if (x = 0)`, ocorre uma atribuição, e não uma comparação. A variável `x` recebe o valor `0` e, como esse valor é considerado falso em C, o bloco do `if` não será executado. Já `if (x == 0)` compara o valor de `x` com zero, sem modificá-lo, executando o bloco caso a comparação seja verdadeira.

**b)** Na Linguagem C, uma condição numérica é considerada falsa quando seu valor é igual a `0` e verdadeira quando é diferente de `0`. Isso vale tanto para números inteiros quanto para números reais. Portanto, valores positivos e negativos diferentes de zero são interpretados como verdadeiros.

**c)** Na instrução `if (x = -5)`, a variável `x` recebe o valor `-5`. Como esse valor é diferente de zero, a condição é considerada verdadeira e o bloco associado será executado. Segundo o padrão ANSI C, qualquer valor numérico diferente de zero representa uma condição verdadeira.
