#include <stdio.h>

int main(){
////Declara��o de vari�veis
    int soma=0; //Soma inicializa com 0 por vamos soma-la com i que � igual a 1.
//La�o, processamento
    for(int i = 1; i<=100; i++){ //i � igual a 1 porque vamos repetir o la�o de "1" a 100.
        soma = soma + i;
    }
//Sa�da
    printf("%d", soma);

    return 0;
}
//O enunciado n�o pede nenhum n�mero a ser lido do usu�rio para o programa
