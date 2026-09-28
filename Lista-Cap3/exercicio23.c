#include <stdio.h>

int main() {
    int L, i, j;

    printf("Digite o lado do quadrado (3 a 20): ");
    scanf("%d", &L);

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}