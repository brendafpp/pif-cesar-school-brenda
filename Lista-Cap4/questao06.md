
## Questão 06 — Construções else-if e Análise Lógica de Intervalos

**a)** Para `idade = 65`, a saída será:

```text
Idoso
Adulto
Jovem
```

Isso acontece porque os três comandos `if` são independentes. Como `65` é maior ou igual a `60`, `18` e `12`, todas as condições são verdadeiras, fazendo com que as três mensagens sejam impressas.

**b)** Em uma sequência de comandos `if` independentes, todas as condições são verificadas separadamente, permitindo que vários blocos sejam executados.

Já em uma cadeia `else-if`, as condições são verificadas em sequência e, assim que uma delas é verdadeira, seu bloco é executado e as demais condições são ignoradas. Dessa forma, apenas uma alternativa é escolhida.

**c)** Código corrigido utilizando `else-if`:

```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

Com essa estrutura, apenas uma categoria será impressa, pois as condições são verificadas em ordem e a execução entra somente no primeiro bloco cuja condição seja verdadeira.

Para `idade = 25`, a saída será:

```text
Adulto
```
