### a) Valor exibido no console

O valor numérico que será exibido no console é **2**.

### b) Explicação do fenômeno

Isso ocorre porque, em C, ao atribuir um número de ponto flutuante (`double`/`float`) a uma variável do tipo inteiro (`int`), a linguagem simplesmente **descarta toda a parte fracionária** do número (os dígitos após a vírgula), sem realizar nenhum arredondamento matemático.

**Nome do fenômeno:** Coerção Implícita de Tipos (ou Conversão Implícita de Tipos), que resulta em um **Truncamento**.

### c) Formas de prevenir ou controlar o comportamento

#### Manter a precisão

Altere o tipo da variável para `float` ou `double` e ajuste o especificador de formato no `printf` para `%f` (ex.: `%.2f`).

#### Arredondamento
Inclua a biblioteca <math.h> e use funções de arredondamento como round() (arredonda para o inteiro mais próximo), ceil() (arredonda para cima) ou floor() (arredonda para baixo)

#### Conversão Explícita
Caso a intenção seja realmente truncar, utilize o operador de cast (int) para indicar explicitamente que a perda de precisão é proposital.