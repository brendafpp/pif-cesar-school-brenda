#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j == i || j == N - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}