## Questão 07

### a)
`printf("\n\tBom dia! Shirley.");`

**Saída:**

    Bom dia! Shirley.

Há uma linha em branco antes da frase e uma tabulação antes de `Bom dia! Shirley.`.

### b)
`printf("Você já tomou café? \n");`

**Saída:**

    Você já tomou café?

Há uma quebra de linha após a frase.

### c)
`printf("\n\nA solução não existe!\nNão insista.");`

**Saída:**

    
    A solução não existe!
    Não insista.

Há duas linhas em branco antes de `A solução não existe!` e uma quebra de linha entre as duas frases.

### d)
`printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`

**Saída:**

    Duas    linhas    de    saída
    ou      uma?

Os `\t` representam tabulações e o `\n` representa uma quebra de linha.

### e)
`printf("%s\n%s\n%s\n", "um", "dois", "três");`

**Saída:**

    um
    dois
    três

Cada palavra é impressa em uma linha diferente. O último `\n` faz com que o cursor passe para a linha seguinte.