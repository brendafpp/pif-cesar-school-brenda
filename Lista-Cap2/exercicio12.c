#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    --numero;
    printf("Antecessor: %d\n", numero);

    ++numero;
    ++numero;
    printf("Sucessor: %d\n", numero);

    return 0;
}