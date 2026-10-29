
## Questão 05 — Avaliação de Curto-Circuito em Operadores Lógicos

**a)** A saída exata será:

```text
a = 0, b = 5, c = 8
```

Como `a != 0` é falso, a segunda condição `++b > 5` não é avaliada devido ao curto-circuito do operador `&&`. Assim, `b` permanece com valor `5`. O programa executa o `else`, realizando `c -= 2`, resultando em `c = 8`.

**b)** A avaliação de curto-circuito acontece quando o programa deixa de avaliar uma parte da expressão lógica porque o resultado já pode ser determinado.

- No operador E (`&&`), se a primeira condição for falsa, a segunda não será avaliada, pois o resultado já será falso.
- No operador OU (`||`), se a primeira condição for verdadeira, a segunda não será avaliada, pois o resultado já será verdadeiro.

Esse comportamento evita avaliações desnecessárias e possíveis efeitos colaterais.

**c)** Se a condição fosse `if (a == 0 || ++b > 5)`, a primeira expressão seria verdadeira, pois `a = 0`. Portanto, a segunda expressão não seria avaliada, mantendo `b = 5`.

Como a condição geral seria verdadeira, o programa executaria `c += 10`, resultando em `c = 20`.

A saída seria:

```text
a = 0, b = 5, c = 20
```
