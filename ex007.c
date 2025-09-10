#include <stdio.h>

int main(){
//Declarando variáveis
    float altura, menor_altura;
    printf("Digite sua altura:");
    scanf("%f", &menor_altura);
/*Inicializei as duass variáveis pois
para entrar no laço nenhuma podia ter
valor0*/
    altura = menor_altura;
//Laço
    while(altura != 0){
//Dentro do laço, pedi a segunda para comparação
        printf("Digite sua altura:");
    scanf("%f", &altura);
/*Se o valor da segunda fosse menor que a primeira
O valor se torna a nova menor altura*/
        if(altura != 0 && altura <= menor_altura){
            menor_altura = altura;
        }
    }
/*O laço se repete até que 0 zero seja digitado
pelo usuario. Só aí o printf abaixo é imprimido
na tela, pois ele se encontra fora do lado*/
    printf("A menor altura e: %f", menor_altura);
    return 0;
}
