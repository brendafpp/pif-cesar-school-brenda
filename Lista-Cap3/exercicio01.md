**Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.**
Analise o funcionamento dessas estruturas e responda:

**a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento em que a condição de teste é avaliada?**
No while como a condição vem antes, o bloco de código só é executado se a condição for verdadeira. Já no do-while como a condição vem após o bloco do código, ele executa pelo menos 1 vez.

**b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se apresenta como a escolha mais elegante, legível e adequada?**
for → quando sabemos quantas vezes queremos repetir algo ou temos uma sequência para percorrer.
while → quando não sabemos exatamente quantas vezes a repetição acontecerá e ela depende de uma condição. A condição é verificada antes de executar o bloco.
do-while → quando precisamos que o bloco seja executado pelo menos uma vez, pois a condição só é verificada depois da execução.


**c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução se condicao for verdadeira.**
É de lógica, e se a condição for verdadeira, o laço irá entrar em um loop infinito.

