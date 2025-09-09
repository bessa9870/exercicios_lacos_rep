#include <stdio.h>

int main(){
////Declaração de variáveis
    int soma=0; //Soma inicializa com 0 por vamos soma-la com i que é igual a 1.
//Laço, processamento
    for(int i = 1; i<=100; i++){ //i é igual a 1 porque vamos repetir o laço de "1" a 100.
        soma = soma + i;
    }
//Saída
    printf("%d", soma);

    return 0;
}
//O enunciado não pede nenhum número a ser lido do usuário para o programa
