**Questão 03. Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento.**

Analise os três trechos de código abaixo:

// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
printf("%d\t", a);

// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
printf("%c", ch + 1);

// Trecho C: Omissão completa de expressões
for (;;)
printf("Laço Infinito\n");

**a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?**
36  18  9   4   2   1
// a = a/2
// a = 36/2 = 18
// a = 18/2 = 9
// a = 9/2 = 4
// a = 4/2 = 2
// a = 2/2 = 1

**b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?**
A operação ch + 1 utiliza o valor numérico associado ao caractere para obter o próximo caractere da sequência. Os parênteses em (ch = getch()) são necessários porque garantem que a tecla lida seja primeiro armazenada em ch e, em seguida, comparada com 'X'. Sem os parênteses, a comparação seria realizada antes da atribuição, fazendo ch receber apenas 0 ou 1.

**c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma programática sem forçar o encerramento do processo pelo sistema operacional?**
O laço infinito pode ser interrompido programaticamente utilizando o comando break, geralmente dentro de uma estrutura condicional que determine quando a execução deve terminar. O break encerra imediatamente o for e permite que o programa continue após o laço.