#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    /*
    Tabela ASCII:
    Cada caractere possui um valor inteiro correspondente.
    Por exemplo:
    'A' = 65
    'B' = 66
    'C' = 67
    'a' = 97
    'b' = 98
    'c' = 99
    '0' = 48
    '1' = 49

    O numero representa a posicao/codigo do caractere
    na tabela ASCII.
    */

    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}