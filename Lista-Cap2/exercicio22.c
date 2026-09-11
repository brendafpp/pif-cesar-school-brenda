#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);

    /*
    Na tabela ASCII, as letras maiusculas e minusculas
    possuem uma diferenca de 32 posicoes.

    Exemplo:
    'A' = 65
    'a' = 97

    97 - 65 = 32

    Portanto, para transformar uma letra maiuscula
    em minuscula, adicionamos 32 ao seu valor ASCII.
    */

    letra = letra + 32;

    printf("Letra minuscula: %c\n", letra);

    return 0;
}