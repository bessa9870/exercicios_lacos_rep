#include <stdio.h>

int main(){
//Declaração variáveis
    int idade=0, idade_total=0;
//Laço e processamento
    float  media_idade=0;
    for(int i=1; i<=20; i++){
        printf("Digite a idade %d:", i);
        scanf("%d", &idade);
        idade_total = idade_total + idade;
    }
    media_idade = idade_total / 20.0;
    printf("A media de idade do grupo e de:%.2f", media_idade);
    return 0;
}
