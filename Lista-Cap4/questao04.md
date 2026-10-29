
## Questão 04 — Seleção Múltipla com switch-case e Efeito Fall-Through

**a)** A saída exata será:

```text
Prata
Ouro
```

Isso ocorre porque `codigo = 2`, fazendo o programa entrar no `case 2`. Como não existe um `break` após `printf("Prata\n")`, a execução continua no `case 3`, imprimindo também "Ouro", até encontrar o `break`.

**b)** O `break` serve para encerrar a execução do `switch`, impedindo que os comandos dos próximos casos sejam executados. Quando ele é omitido, ocorre o fenômeno chamado *fall-through*, no qual a execução continua nos casos seguintes, independentemente de seus valores.

**c)** O `switch` aceita expressões de tipos inteiros, como `int`, `char`, `short`, `long` e tipos de enumeração (`enum`). Não é permitido utilizar diretamente `float` ou `double`, pois, segundo o padrão ANSI C, a expressão do `switch` deve possuir um tipo inteiro.
