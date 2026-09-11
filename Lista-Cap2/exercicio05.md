# Questão 05 — Avaliação de Expressões Lógicas e Relacionais

Determine o resultado lógico (`1` para verdadeiro e `0` para falso) de cada uma das expressões, assumindo que:

```c
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;

a) i < j + 3

Resultado: 1

j + 3 = 2 + 3 = 5

i < 5 → 1 < 5 → verdadeiro

b) 2 * i - 7 <= j - 8

Resultado: 0

2 * 1 = 2

2 - 7 = -5

j - 8 = 2 - 8 = -6

-5 <= -6 → falso

c) -x + y >= 2.0 * y

Resultado: 0

-3.3 + 4.4 = 1.1

2.0 * 4.4 = 8.8

1.1 >= 8.8 → falso

d) x == y

Resultado: 0

3.3 == 4.4 → falso

e) !(n - j)

Resultado: 1

n - j = 2 - 2 = 0

!0 = 1


f) !n - j

Resultado: 1


!n - j

!2 - 2

Como 2 é diferente de zero:

!2 = 0

Então:

0 - 2 = -2

Em C, qualquer valor diferente de zero é considerado verdadeiro.

Logo:

-2 → 1

Resultado: 1

g) i && j && k

Resultado: 1

1 && 2 && 3

Todos os valores são diferentes de zero, portanto são considerados verdadeiros.

verdadeiro && verdadeiro && verdadeiro → verdadeiro

Resultado: 1

h) i || j - 3 && k

Resultado: 1

A expressão é avaliada respeitando a precedência dos operadores:

i || ((j - 3) && k)

1 || ((2 - 3) && 3)

1 || (-1 && 3)

Como 1 já é verdadeiro, o resultado do || é verdadeiro.

Resultado: 1

i) i < j && 2 >= k

Resultado: 0

i < j → 1 < 2 → verdadeiro

2 >= k → 2 >= 3 → falso

Então:

verdadeiro && falso → falso

Resultado: 0

j) i == 2 || j == 4 || k == 5

Resultado: 0

i == 2 → 1 == 2 → falso

j == 4 → 2 == 4 → falso

k == 5 → 3 == 5 → falso

Então:

falso || falso || falso → falso

Resultado: 0