## Questão 08

O programa utiliza as sequências de escape `\n`, `\t` e `\"` dentro da função `printf()`.

- `\n` → realiza uma **quebra de linha** antes de imprimir o texto.
- `\t` → insere uma **tabulação** antes do texto.
- `\"` → imprime uma **aspas duplas (`"`)** na tela, sem encerrar a string.

A instrução:

`printf("\n\t\"Primeiro programa\"");`

faz com que o programa pule uma linha, insira uma tabulação e, em seguida, exiba o texto entre aspas.

### Saída gerada

    "Primeiro programa"

Portanto, a saída será uma linha em branco, seguida de uma tabulação e do texto:

**"Primeiro programa"**

Depois disso, o comando `system("PAUSE")` exibirá a mensagem de pausa do sistema, normalmente:

    Pressione qualquer tecla para continuar. . .

Por fim, `return 0;` encerra o programa indicando que sua execução foi concluída com sucesso.