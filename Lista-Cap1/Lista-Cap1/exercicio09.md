## Questão 09

O programa utiliza o modificador `%c` para imprimir caracteres individuais. Os caracteres `'\n'`, `'\t'` e `'\"'` são passados como argumentos para o `printf()`.

- `'\n'` → realiza uma **quebra de linha**.
- `'\t'` → insere uma **tabulação**.
- `'\"'` → imprime uma **aspas dupla (`"`)**.

Na primeira instrução:

`printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');`

o programa executa uma quebra de linha, insere uma tabulação e imprime uma aspas dupla antes do texto `Primeiro programa`.

Porém, na segunda instrução:

`printf("%c", "\"");`

há um **erro**, pois `"\""` é uma string (literal de texto), enquanto `%c` espera um único caractere. O correto seria utilizar aspas simples:

`printf("%c", '\"');`

### Saída esperada considerando a correção

    "Primeiro programa"

Após isso, o `system("PAUSE")` exibirá a mensagem de pausa do sistema:

    Pressione qualquer tecla para continuar. . .

**Conclusão:** o compilador espera que `%c` receba um valor do tipo caractere (`char`). Portanto, `'\"'` está correto, enquanto `"\""` representa uma string e está incorreto para `%c`.