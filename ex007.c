#include <stdio.h>

int main(){
//Declarando vari�veis
    float altura, menor_altura;
    printf("Digite sua altura:");
    scanf("%f", &menor_altura);
/*Inicializei as duass vari�veis pois
para entrar no la�o nenhuma podia ter
valor0*/
    altura = menor_altura;
//La�o
    while(altura != 0){
//Dentro do la�o, pedi a segunda para compara��o
        printf("Digite sua altura:");
    scanf("%f", &altura);
/*Se o valor da segunda fosse menor que a primeira
O valor se torna a nova menor altura*/
        if(altura != 0 && altura <= menor_altura){
            menor_altura = altura;
        }
    }
/*O la�o se repete at� que 0 zero seja digitado
pelo usuario. S� a� o printf abaixo � imprimido
na tela, pois ele se encontra fora do lado*/
    printf("A menor altura e: %f", menor_altura);
    return 0;
}
