#include <stdio.h>

int main(){
//Declarando vari�veis
    int somatorio=0;
//La�o, processamento
    for(int i=1; i<=500; i++){
        if(i % 2 == 0){
            somatorio = somatorio + i;
        }
    }
//Sa�da
    printf("%d", somatorio);

    return 0;
}
