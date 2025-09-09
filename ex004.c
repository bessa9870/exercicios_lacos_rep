#include <stdio.h>

int main(){
//Declaração de variáveis
    int n1, n2;
//Laço e processamento
    printf("Digite o primeiro numero:");
    scanf("%d", &n1);
    do{
    printf("Digite o segundo numero(Deve ser maior que %d):", n1);
    scanf("%d", &n2);
        if(n2 <= n1){
            printf("Valor invalido. Tente novamente\n");
        }
    }while(n2 <= n1);
//Saída
        printf("Valor valido :D");
    return 0;
}
/*Faça "do" enquanto "while". O "if" foi opicional.
O ultimo printf está fora do laço e, só será
mostrado ao usuário quando a flag for atendida.
O laço é lido de cima pra baixo, ele irá executar
independentemente o que está dentro de "do"
e só depois irá ler a condição do while e repetir
caso tenha atendido. Logo, o código que usa do-while
sempre será executado ao menos uma vez*/
