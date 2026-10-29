
## Questão 02 — Associação do Comando else e Aninhamento de Decisões

**a)** A mensagem impressa será:

```text
Opção B
```

Isso acontece porque `x > 10` é verdadeiro (`15 > 10`), permitindo a execução do segundo `if`. Entretanto, `y > 10` é falso (`5 > 10`), fazendo com que o `else` associado ao segundo `if` seja executado.

**b)** Na Linguagem C, quando não são utilizadas chaves, o `else` é associado ao `if` mais próximo que ainda não possui um `else` correspondente. Essa regra evita ambiguidades na interpretação de estruturas condicionais aninhadas.

**c)** Código reescrito com chaves:

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Dessa forma, a Opção B será impressa somente quando `x <= 10`, pois o `else` está associado ao primeiro `if`.
