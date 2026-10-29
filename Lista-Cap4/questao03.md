
## Questão 03 — Operador Condicional Ternário vs. Estrutura if-else

**a)** A segunda linha utiliza o operador ternário para verificar se `media >= 7.0`. Se a condição for verdadeira, a variável `situacao` recebe o caractere `'A'`, representando aprovado. Caso contrário, recebe `'R'`, representando reprovado.

Como `media = 6.8`, a condição é falsa e `situacao` receberá `'R'`.

**b)** Código utilizando `if-else`:

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não. O operador ternário é utilizado para escolher entre duas expressões de acordo com uma condição. Ele não substitui diretamente estruturas `if-else` que possuem blocos com múltiplos comandos, como declarações, laços e outras instruções. Embora seja possível combinar expressões, o `if-else` é mais adequado para decisões complexas, pois oferece maior clareza e organização.
