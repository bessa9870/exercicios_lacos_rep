#include <stdio.h>

int main(){
//Declara��o de vari�veis
    double produto=1;//Como � um numero muito grande, usei double
//La�o, processamento
    for(double i = 1; i<=100; i++){
        produto = produto * i;
    }
//Sa�da
    printf("%g", produto);
    return 0;
}
/*Aqui vem uma coisa que eu aprendi recentemente,
sei que o printf tem uma personalidade diferente
dependendo do alocador que usar (%d, %f, %lf..)).
Usei um novo alocador, %e, pois esse permite que
o printf imprima numeros em nota��o cientifica.
Tamb�m existe o %g, que deixa a decis�o de usar
ou n�o nota��o cientifica ao printf*/
