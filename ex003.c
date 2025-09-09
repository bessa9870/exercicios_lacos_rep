#include <stdio.h>

int main(){
//Declarando variáveis
    int somatorio=0;
//Laço, processamento
    for(int i=1; i<=500; i++){
        if(i % 2 == 0){
            somatorio = somatorio + i;
        }
    }
//Saída
    printf("%d", somatorio);

    return 0;
}
