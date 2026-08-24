/*Um estudante iniciante de programação em C escreveu o programa abaixo e encontrou
diversos erros que impedem a sua compilação. Analise o código atentamente, aponte cada um dos
erros presentes e escreva a versão corrigida e funcional desse programa:*/

/*ERROS APONTADOS:
#include <stdio.h>
#include <stdlib.h>; //aqui não precisa do ;
int Main{} //os parênteses precisam vim antes das chaves “()”, e as chaves vão do início ao fim
( //deveriam ser chaves
printf( Existem %d semanas no ano.,52); // faltou as aspas
cout << endl; //c++ do nada???
system("PAUSE");
return 0;
) // deveria ser chave
*/

/*CÓDIGO CORRIGIDO:*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Existem %d semanas no ano", 52);

    system("PAUSE");

    return 0;
}