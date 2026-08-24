/*Questão 02. Faça um programa em C que declare uma variável de ponto flutuante de precisão simples
(float), atribua a ela um valor constante real de sua preferência (como o valor do número de Euler 'e' =
2.71828) e exiba o resultado no console formatado com exatamente três casas decimais de precisão.*/

#include<stdio.h>


int main(){
    float pi;
    pi = 3.14159265359;
    printf("O número de pi é: %.3f", pi);
    return 0;
}
