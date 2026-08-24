#include <stdio.h>

int main() {

    int n1, n2, n3;
    double media;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media: %.2f\n", media);

    return 0;
}