#include <stdio.h>

int main(){
//Declaração de variáveis
    double produto=1;//Como é um numero muito grande, usei double
//Laço, processamento
    for(double i = 1; i<=100; i++){
        produto = produto * i;
    }
//Saída
    printf("%g", produto);
    return 0;
}
/*Aqui vem uma coisa que eu aprendi recentemente,
sei que o printf tem uma personalidade diferente
dependendo do alocador que usar (%d, %f, %lf..)).
Usei um novo alocador, %e, pois esse permite que
o printf imprima numeros em notação cientifica.
Também existe o %g, que deixa a decisão de usar
ou não notação cientifica ao printf*/
