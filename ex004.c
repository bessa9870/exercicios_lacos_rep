#include <stdio.h>

int main(){
//Declara��o de vari�veis
    int n1, n2;
//La�o e processamento
    printf("Digite o primeiro numero:");
    scanf("%d", &n1);
    do{
    printf("Digite o segundo numero(Deve ser maior que %d):", n1);
    scanf("%d", &n2);
        if(n2 <= n1){
            printf("Valor invalido. Tente novamente\n");
        }
    }while(n2 <= n1);
//Sa�da
        printf("Valor valido :D");
    return 0;
}
/*Fa�a "do" enquanto "while". O "if" foi opicional.
O ultimo printf est� fora do la�o e, s� ser�
mostrado ao usu�rio quando a flag for atendida.
O la�o � lido de cima pra baixo, ele ir� executar
independentemente o que est� dentro de "do"
e s� depois ir� ler a condi��o do while e repetir
caso tenha atendido. Logo, o c�digo que usa do-while
sempre ser� executado ao menos uma vez*/
