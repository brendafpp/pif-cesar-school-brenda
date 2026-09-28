Questão 06. Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo
que utiliza um laço de repetição com corpo vazio:

int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);

**a) Qual é o valor final da variável x que será impresso pela instrução printf?**
x = 6
//0
//1
//2
//3
//4
//5
//6

**b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem durante a execução do teste 'x++ < 5'.**
x começa em 0

0 < 5 → verdadeiro → x vira 1
1 < 5 → verdadeiro → x vira 2
2 < 5 → verdadeiro → x vira 3
3 < 5 → verdadeiro → x vira 4
4 < 5 → verdadeiro → x vira 5
5 < 5 → falso      → x vira 6

**c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o mesmo resultado final de x.**
int x = 0;

while (x < 5) {
    x++;
}

x++;

printf("Valor final de x = %d\n", x);