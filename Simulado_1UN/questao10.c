#include <stdio.h>
#include <math.h>

int main (){
    int segundos, horas, minutos, segundosRestantes;
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos = (segundos % 3600)/ 60;
    segundosRestantes = segundos % 60;

    printf("%d horas, %d minutos e %d segundos", horas, minutos, segundosRestantes);


    return 0;
}