#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, tentativa;
    int tentativas = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra secreta (a-z): ");

    do {
        scanf(" %c", &tentativa);
        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois.\n");
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes.\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }

    } while (tentativa != secreta);

    return 0;
}