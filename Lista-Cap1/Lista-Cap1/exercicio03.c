/*O uso correto de comentários é fundamental para documentar e tornar o código
compreensível. Com base nos tipos de comentários estudados (múltiplas linhas e linha única), escreva
um programa simples em C e documente-o de forma clara. Siga o modelo de formatação de código
ilustrado abaixo:*/

/* Programa de Calcular a média das notas em C*/
#include<stdio.h> //para o printf
#include<math.h> //para os cálculos matemáticos


int main(){ //função main
    float nota1; //variável nota 1
    float nota2; //variável nota 2
    printf("Digite a nota 1: "); //informar oq vai ser inserido
    scanf("%f", &nota1); //mandar oq foi inserido para a variável correta
    printf("Digite a nota 2: "); //informar oq vai ser inserido
    scanf("%f", &nota2); //mandar oq foi inserido para a variável correta
    float media; //variável da média
    media = (nota1 + nota2)/2; //cálculo da média
    printf("Sua média é: %.2f", media); //printar o resultado


    return 0;
}


