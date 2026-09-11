#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite uma número:");
    scanf("%f", &num);

    float quadrado = num*num;
    float dParte = num/10;

    printf("O quadrado de %.1f é: %.1f \nE sua décima parte é: %.2f", num, quadrado, dParte);

    return 0;
}