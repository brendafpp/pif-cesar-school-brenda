#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, p, area;
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c)/2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A área do triângulo é: %.2f", area);

    return 0;
}