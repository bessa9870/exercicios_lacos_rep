#include <stdio.h>

int main(){
//Declara��o de vari�veis
    int idade=0, somatorio=0, cont=0;
//La�o e processamento
    float media;
    do{
        printf("Digite a idade");
        scanf("%d", &idade);
        if(idade != -1){
    somatorio = somatorio + idade;
        cont++; //O contador fica dentro do if, pois dessa forma ele s� incrementa se esriver certo.
        }
    }while(idade != -1);
    media = (float) somatorio / cont;//Eu tenho quw usar parenteses!!!!!!!!!!!!!!!!!!!!!!!!!!
//Sa�da
    printf("A quantidade de idades registrada e de:%d\n", cont);
    printf("A media de idades seria:%.2f", media);

    return 0;
}
/*Usei o if para que o -1 n�o seja
registrado no contador e acabe interferindo
no c�lculo. Tentei inicializar o contador com
valor =1, mas tamb�m estava interferindo com o
resultado, ent�o vai ficar =0 meszmo. N�o chora*/
