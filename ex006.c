#include <stdio.h>

int main(){
//Declaração de variáveis
    int idade=0, somatorio=0, cont=0;
//Laço e processamento
    float media;
    do{
        printf("Digite a idade");
        scanf("%d", &idade);
        if(idade != -1){
    somatorio = somatorio + idade;
        cont++; //O contador fica dentro do if, pois dessa forma ele só incrementa se esriver certo.
        }
    }while(idade != -1);
    media = (float) somatorio / cont;//Eu tenho quw usar parenteses!!!!!!!!!!!!!!!!!!!!!!!!!!
//Saída
    printf("A quantidade de idades registrada e de:%d\n", cont);
    printf("A media de idades seria:%.2f", media);

    return 0;
}
/*Usei o if para que o -1 não seja
registrado no contador e acabe interferindo
no cálculo. Tentei inicializar o contador com
valor =1, mas também estava interferindo com o
resultado, então vai ficar =0 meszmo. Não chora*/
