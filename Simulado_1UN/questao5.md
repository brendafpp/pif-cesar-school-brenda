**a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?**

o while ele executa apenas quando a condição é verdadeira (a condição é testada antes do bloco), já o do while ele executa uma vez, independente da condição, pois ela é testada após o bloco.

**b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?**
Quando sabemos a quantidade exata de repetições que serão realizadas

**c) O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?**

É um erro de lógica, não de compilação. Se condicao for verdadeira, o while executará um laço infinito, pois o corpo do laço é vazio.